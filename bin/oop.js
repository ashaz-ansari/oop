#!/usr/bin/env node
'use strict';

const fs = require('fs');
const path = require('path');

const ROOT = path.join(__dirname, '..');
const TC_SUFFIX = '_tc.cpp';

const FILES = fs
  .readdirSync(ROOT)
  .filter((name) => /^\d{2}_.+\.cpp$/.test(name))
  .sort();

function isTc(name) {
  return name.endsWith(TC_SUFFIX);
}

function pool(tc) {
  return FILES.filter((name) => (tc ? isTc(name) : !isTc(name)));
}

function pad(n) {
  return String(n).padStart(2, '0');
}

function resolve(query, tc) {
  const candidates = pool(tc);
  const q = String(query).trim();

  if (/^\d+$/.test(q)) {
    const prefix = pad(q) + '_';
    return candidates.find((name) => name.startsWith(prefix)) || null;
  }

  const needle = q.toLowerCase().replace(/\.cpp$/, '').replace(/_tc$/, '');
  return (
    candidates.find((name) => name.toLowerCase().includes(needle)) || null
  );
}

function read(name) {
  return fs.readFileSync(path.join(ROOT, name), 'utf8');
}

function save(name, dir) {
  fs.mkdirSync(dir, { recursive: true });
  const target = path.join(dir, name);
  fs.writeFileSync(target, read(name));
  process.stderr.write('saved  ' + target + '\n');
}

function label(tc) {
  return tc ? 'Turbo C++' : 'standard C++';
}

function help() {
  const lines = [
    '',
    '  oop - OOP practicals (CM31203)',
    '',
    '  Usage',
    '    oop <number> [tc] [--write]     print one program',
    '    oop all [tc] [--out <dir>]      save every program',
    '    oop list [tc]                   list all programs',
    '',
    '  Options',
    '    tc              Turbo C++ (iostream.h, char strings, no STL)',
    '    -w, --write     save into the current directory instead of printing',
    '    -o, --out <dir> directory to save into',
    '    -h, --help      show this help',
    '',
    '  Examples',
    '    npx --yes github:ashaz-ansari/oop 7          print practical 7',
    '    npx --yes github:ashaz-ansari/oop 7 tc       print practical 7 (Turbo C++)',
    '    npx --yes github:ashaz-ansari/oop 7 -w       save practical 7 here',
    '    npx --yes github:ashaz-ansari/oop all tc -o ./tcpp',
    '    npx --yes github:ashaz-ansari/oop 7 > seven.cpp',
    '',
  ];
  process.stdout.write(lines.join('\n'));
}

function main() {
  const argv = process.argv.slice(2);
  const rest = [];
  let tc = false;
  let write = false;
  let outDir = process.cwd();

  for (let i = 0; i < argv.length; i++) {
    const arg = argv[i];
    if (arg === '-h' || arg === '--help') return help();
    if (arg === 'tc' || arg === '--tc' || arg === 'turbo') {
      tc = true;
      continue;
    }
    if (arg === 'cpp' || arg === 'std' || arg === 'normal' || arg === 'modern') {
      tc = false;
      continue;
    }
    if (arg === '-w' || arg === '--write' || arg === 'save') {
      write = true;
      continue;
    }
    if (arg === '-o' || arg === '--out') {
      const value = argv[++i];
      if (!value) {
        process.stderr.write('oop: --out needs a directory\n');
        process.exit(1);
      }
      outDir = path.resolve(value);
      write = true;
      continue;
    }
    rest.push(arg);
  }

  if (rest.length === 0) return help();

  const command = rest[0].toLowerCase();

  if (command === 'list' || command === 'ls') {
    const names = pool(tc);
    process.stdout.write(label(tc) + ' (' + names.length + ' files)\n\n');
    names.forEach((name) => process.stdout.write('  ' + name + '\n'));
    process.stdout.write('\n');
    return;
  }

  if (command === 'all' || command === 'every') {
    const names = pool(tc);
    names.forEach((name) => save(name, outDir));
    process.stderr.write(
      'saved ' + names.length + ' ' + label(tc) + ' files to ' + outDir + '\n'
    );
    return;
  }

  const name = resolve(rest[0], tc);

  if (!name) {
    process.stderr.write('oop: no program matches "' + rest[0] + '"\n\n');
    pool(tc).forEach((f) => process.stderr.write('  ' + f + '\n'));
    process.exit(1);
  }

  if (write) {
    save(name, outDir);
  } else {
    process.stdout.write(read(name));
  }
}

main();
