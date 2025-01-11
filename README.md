# Division by Zero Bug in C++

This repository demonstrates a common runtime error in C++: division by zero. The `bug.cpp` file contains the erroneous code, which attempts to divide an integer by zero.  The `bugSolution.cpp` file provides a corrected version with error handling.

## Bug Description

The C++ code attempts to divide the integer variable `x` by the integer variable `y`, where `y` is initialized to 0.  This results in a division by zero exception, causing the program to terminate abnormally. 

## Solution

The solution involves adding a check to prevent the division by zero.  If `y` is zero, an appropriate error message is displayed, and the program exits gracefully. Alternatively, a default value could be used in the event of division by zero.