# Municipal Financial Management System (MFMS)

**Course:** PAP521S – Programming in Practice  
**Language:** C (C99)  

## Project Description

The Municipal Financial Management System is a menu-driven C application designed to organise basic municipal financial and administrative operations.

## Features

- Employee management: add, display, and search employee records.
- Budget management: manage budget and expenditure information.
- Supplier management: perform supplier-related operations.
- Asset management: access asset-related operations.
- Reporting: provide reports through the reporting module.
- Menu-driven navigation.

*The availability of individual features depends on the implementation in the submitted source code.*

## Project Files

- `main.c` – Main menu and program entry point.
- `employees.c` – Employee operations.
- `budget.c` – Budget operations.
- `suppliers.c` – Supplier operations.
- `assets.c` – Asset operations.
- `reports.c` – Reporting operations.
- Corresponding `.h` files – Function declarations and shared definitions.

## Requirements

- GCC compiler
- A C99-compatible environment
- Visual Studio Code or another code editor (optional)

## Compilation

Open a terminal in the project directory and run:

```bash
gcc -Wall -Wextra -std=c99 main.c employees.c budget.c suppliers.c assets.c reports.c -o mfms.exe
```

## Running the Program

On Windows PowerShell, run:

```powershell
.\mfms.exe
```

Follow the displayed menu and enter the number corresponding to the operation you want to select.

## Group Responsibilities

- Student 1: Employee management
- Student 2: Budget management
- Student 3: Supplier management
- Student 4: Asset management
- Student 5: Reports
- Student 6: Functions, integration and validation
- Student 7: Testing, documentation and Git coordination

## Testing Status

The program has been compiled and launched successfully, and the main menu has been displayed. Complete testing of all individual operations must be verified and documented before claiming that every feature passes.

## Group Members

[Kakavire K U 224028529, Eiases S S 226166058, Morris M N 220082928,Imene J J 225040271, Kassoma I N 226071189, Tweumuna T.O.T 226092356, Joseph M 226065669]
