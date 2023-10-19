# Software Development Fundamentals (CS700) - Assignment 3

This is the solution to assignment 3 of CS700, which is a banking program that simulates the operations of a local bank.

## Directory Structure
```
.
│
├── include
│   ├── Helpers
│   │   ├── cliHelper.h - Provides helper functions for command-line interfaces.
│   │   └── Date.h - Provides date-related functionalities.
│   │
│   ├── Account.h - Base class header for all account types.
│   ├── Adult.h - Header for the Adult customer type.
│   ├── Bank.h - Header for the main bank operations.
│   ├── CheckingAccount.h - Header for checking account functionalities.
│   ├── Customer.h - Base class header for all customer types.
│   ├── SavingsAccount.h - Header for savings account functionalities.
│   ├── Senior.h - Header for the Senior customer type.
│   ├── Student.h - Header for the Student customer type.
│   └── Transaction.h - Header for recording and handling transactions.
│
├── src
│   ├── Helpers
│   │   ├── cliHelper.cpp - Implementation of helper functions for CLI.
│   │   └── Date.cpp - Implementation for date functionalities.
│   │
│   ├── Account.cpp - Base class implementation for all account types.
│   ├── Adult.cpp - Implementation for the Adult customer type.
│   ├── Bank.cpp - Implementation of main bank operations.
│   ├── CheckingAccount.cpp - Implementation of checking account functionalities.
│   ├── Customer.cpp - Base class implementation for all customer types.
│   ├── main.cpp - Main application that interacts with the user.
│   ├── SavingsAccount.cpp - Implementation of savings account functionalities.
│   ├── Senior.cpp - Implementation for the Senior customer type.
│   ├── Student.cpp - Implementation for the Student customer type.
│   └── Transaction.cpp - Implementation for recording and handling transactions.
│
├── .gitignore - Files and folders to be ignored in the repository.
├── command.txt - Commands to run the C++ scripts.
├── main - The main executable for the application.
├── Makefile - Contains the build rules for the project.
└── README.md - YOU ARE HERE!
```

## How to Run

1. Use the provided Makefile to compile the project using the command `make`.
2. Execute the compiled `main` file using `./main`.

## Documentation

Internal documentation is provided in each source file using standard comment headers and inline comments.

## Version Control

The development process has been tracked using Git. All changes and development stages can be viewed on the GitHub repository. (Note: Ensure to update the repository link if different from the Assignment 2 repository)

[Github Repository Link](<https://github.com/satilog/cs700-assignment-3.git>)

## Testing

The solution has been tested with various scenarios, including different account types, deposit, withdrawal, and interest calculations to ensure the robustness and accuracy of the program.

## About

This assignment was aimed at simulating a banking system by defining various classes representing different entities like accounts, transactions, and customers. A hierarchical class structure was used to efficiently manage different types of accounts and customers. The program offers functionalities like deposit, withdrawal, and interest calculations for different account types. Additionally, it provides a user-friendly command-line interface for smooth interactions.
