Program 1
Aim:
Write a C++ program to swap the values of two variables using a user-defined function.

Theory:
Swapping is a basic programming task where two variables exchange their values. There are different ways to swap values:
Using a temporary variable: Store the value of the first variable in a temporary variable, assign the second variable’s value to the first, and then assign the temporary variable’s value to the second.
Pass by value vs Pass by reference:
When variables are passed by value to a function, the function receives copies, so changes inside the function do not affect the original variables.
When variables are passed by reference, the function operates directly on the original variables, so changes are reflected outside the function.
In C++, to swap two variables successfully inside a function, you must pass them by reference (using &).

Algorithm:
- Start.
- Declare two integer variables a and b.
- Input or initialize the values of a and b.
- Call the swap function passing a and b by reference.
- Inside the swap function:
- Create a temporary variable temp.
- Assign the value of a to temp.
- Assign the value of b to a.
- Assign the value of temp to b.
- Return from the swap function.
- Print the swapped values of a and b.
- End.

Program 2

Aim:
Write a C++ program to increase the salary by 5000 using a function with pass-by-reference.

Theory:
In C++, passing arguments to functions can be done by value or reference.
Pass by value: The function works with a copy of the variable. Changes inside the function do not affect the original variable.
Pass by reference: The function works with the original variable. Any changes inside the function affect the original variable.
In this program, the salary variable is passed by reference (int &S), so when the function adds 5000 to S, the original salary variable in main() is updated directly.

Algorithm:
- Start.
- Declare an integer variable sal and initialize it to 27000.
- Define a function increment that takes an integer reference parameter S.
- Inside increment function:
- Add 5000 to S.
- Print "Salary incremented".
- Call the increment function from main with sal as argument.
- Print the updated value of sal.
- End.

Program 3

Aim:
Write a C++ program to swap the values of two variables using a function with call by reference.

Theory
Swapping is the process of exchanging the values of two variables. In C++, function arguments can be passed in two main ways:
Call by Value: The function works on copies of the arguments, so changes inside the function do not affect the original variables.
Call by Reference: The function works directly with the original variables, so changes inside the function affect the actual variables passed.To swap two variables inside a function so that the changes reflect outside the function, call by reference must be used. This is done by passing parameters as references (int &x), which allows the function to modify the original variables.

Algorithm:
- Start.
- Declare two integer variables a and b.
- Initialize a and b with values.
- Define a function swap that takes two integer reference parameters x and y.
- Inside the swap function:
- Create a temporary variable temp.
- Assign the value of x to temp.
- Assign the value of y to x.
- Assign the value of temp to y.
- Call the swap function with a and b as arguments.
- Print the swapped values of a and b.
- End.

