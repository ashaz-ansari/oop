# OOP Practicals (CM31203)

All 24 Object Oriented Programming practicals, in two flavours:

- **standard C++** — `01_Input_Output_Statements.cpp` (works with g++, clang++, Dev-C++, VS Code)
- **Turbo C++** — `01_Input_Output_Statements_tc.cpp` (old Borland dialect: `#include <iostream.h>`, `char` strings, no STL, `getch()`)

Every file is comment-free.

## Usage

```bash
# print a practical
npx --yes github:ashaz-ansari/oop 7

# print the Turbo C++ version
npx --yes github:ashaz-ansari/oop 7 tc

# save it here instead of printing
npx --yes github:ashaz-ansari/oop 7 -w
npx --yes github:ashaz-ansari/oop 7 tc -w

# pipe it straight into a file
npx --yes github:ashaz-ansari/oop 7 > seven.cpp

# grab everything
npx --yes github:ashaz-ansari/oop all -o ./cpp
npx --yes github:ashaz-ansari/oop all tc -o ./turbo

# see what's available
npx --yes github:ashaz-ansari/oop list
npx --yes github:ashaz-ansari/oop list tc
```

You can also pass the file name instead of the number:
`npx --yes github:ashaz-ansari/oop string tc`

## Options

| Option | Meaning |
| --- | --- |
| `tc` | Turbo C++ version |
| `-w`, `--write` | save into the current directory |
| `-o`, `--out <dir>` | directory to save into (implies `--write`) |
| `-h`, `--help` | help |

## The practicals

| # | Program | Turbo C++ differences |
| --- | --- | --- |
| 01 | Input / Output statements | `<iostream.h>`, `getch()` |
| 02 | Structure and array of structure | `char name[30]` instead of `string` |
| 03 | Call by value | `getch()` |
| 04 | Call by reference | `getch()` |
| 05 | Function overloading | `getch()` |
| 06 | Class and objects | `getch()` |
| 07 | Array of objects | `getch()` |
| 08 | Object as function argument | `getch()` |
| 09 | Static members | `getch()` |
| 10 | Friend function | `getch()` |
| 11 | Constructor and destructor | `getch()` |
| 12 | Constructor overloading | `getch()` |
| 13 | String operations with functions | `char` arrays + `<string.h>` (`strcat`, `strcmp`, `strchr`, `strrev`) |
| 14 | String operations without functions | manual `char` loops |
| 15 | Single inheritance | `getch()` |
| 16 | Multilevel inheritance | `getch()` |
| 17 | Multiple inheritance | `getch()` |
| 18 | Virtual base class | `getch()` |
| 19 | Operator overloading | no member-init list |
| 20 | Operator overloading (friend) | no member-init list |
| 21 | `this` pointer | `getch()` |
| 22 | Virtual function | `override` removed (C++11 only) |
| 23 | Type conversion | no member-init list |
| 24 | File processing + exception handling | custom exception class (no `<stdexcept>`), `fin.getline(char*, int)` |

## Notes

- The `_tc` files end with `getch()` so output stays on screen in the Turbo C++ IDE.
  Delete those lines if you don't want the pause.
- Practical 24 needs exception handling enabled in Turbo C++:
  **Options → Compiler → C++ options**.
- Programs 02, 03 and 20 have no counterpart in the unit notes (the notes start at
  Unit 2 and cover call by reference and member operator overloading only), so those
  three were written to fit the syllabus.

## Course

GOVT. POLYTECHNIC, PUNE — Object Oriented Programming, course code **CM31203**, units 2–6.
Viva questions for all five units are in `OOP_Viva_Questions.pdf`.
