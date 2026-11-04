MUNICIPAL FINANCIAL MANAGEMENT SYSTEM (MFMS)
Course: PAP521S – Programming in Practice
Language: C (C99)
Group Number:  7
Group Members: Kakavire Kamatupa U, Eiases Stephany, Kassoma Isak, 
Date: 20 October 2026
1. Introduction
The Municipal Financial Management System (MFMS) is a modular C program developed to support basic municipal financial and administrative activities. The system brings together employee management, budget and expenditure management, supplier management, asset management, and reporting functions in one program.
2. Problem Description
Managing municipal employee information, budgets, suppliers, and assets requires organised record keeping. Handling these activities separately can make information difficult to retrieve and financial information harder to monitor. MFMS was developed as a simple computer-based system to organise these activities and demonstrate the application of programming concepts.
3. Project Objectives
The objectives of the project are to:
•	Develop a menu-driven municipal management program.
•	Manage employee records and support employee searches.
•	Record budget and expenditure information.
•	Manage supplier and asset information.
•	Provide reporting functionality.
•	Apply modular programming, functions, arrays, structures where applicable, and input/output operations in C.
•	Compile, execute, and test the system.
4. System Features and Design
The system is written in C using the C99 standard. Its main menu provides access to the available functions.
The system is divided into modules:
•	Main module (main.c): Displays the main menu and directs the user to available operations.
•	Employee module (employees.c and its header): Supports adding, displaying, and searching employee records.
•	Budget module (budget.c and its header): Handles budget and expenditure information and budget reporting.
•	Supplier module (suppliers.c and its header): Supports supplier-related operations.
•	Asset module (assets.c and its header): Handles asset-related operations.
•	Reports module (reports.c and its header): Provides reporting functionality.
•	Integration and validation: The modules are brought together to form the complete system, with input validation where implemented.
The program uses a menu-driven interface to make it easier for users to select operations.
5. Testing and Results
The program was compiled using GCC with the C99 standard. Compilation errors encountered during development were corrected, and the program subsequently launched successfully.
The following checks were performed:
•	Compilation: Successful; the compiler produced no errors in the final compilation attempt.
•	Program launch: Successful; the main menu appeared.
•	Menu display: The menu displayed the options to add an employee, display all employees, search for an employee by ID, and exit.
•	Add employee: The program prompted the user to enter an employee ID. Further testing is required to confirm the complete process.
•	Other modules: Full functional testing of all budget, supplier, asset, and reporting operations remains to be confirmed.
6. Challenges and Solutions
During development, several compilation problems were encountered, including duplicate function definitions, mismatched function declarations, incorrect variable names, and missing definitions. These were addressed by correcting the relevant source code and header files.
Testing also highlighted the importance of consistent naming, correct function declarations, and checking compilation output before running the program.
7. Conclusion
The MFMS project demonstrates the development of a modular, menu-driven financial management program in C. The successful compilation and launch indicate that the program can execute and display its main menu. Further functional testing is needed to confirm all operations and ensure that the complete system behaves as expected.
8. Individual Contribution
Student 7 – Testing, Documentation and Git Coordination
My responsibilities included assisting with compilation and execution checks, identifying and helping correct programming errors, documenting testing results, preparing project documentation, and supporting Git coordination. I verified that the program compiled successfully and that its main menu launched. Testing of the remaining functions should be recorded as it is completed
