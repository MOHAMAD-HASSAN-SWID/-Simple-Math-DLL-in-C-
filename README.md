# -Simple-Math-DLL-in-C-
🧩 Simple Math DLL in C++
This is a basic example of a Windows DLL (Dynamic Link Library) written in C++. It provides three exported functions for basic arithmetic operations: addition, subtraction, and multiplication.

🔧 Exported Functions
cpp
Copy
Edit
int Add(int a, int b);
int Subtract(int a, int b);
int Multiply(int a, int b);
These functions are exposed using extern "C" for C-style linking.

📁 Project Structure
dllmain.cpp – Entry point for the DLL

MathOperations.h/cpp – Definitions and implementations of math functions

pch.h / pch.cpp – Precompiled header files for faster compilation

⚙️ How to Build
Open the project in Visual Studio (configured as a DLL project).

Build the solution.

The resulting .dll can be used in C++, C#, or other languages that support calling native libraries.
