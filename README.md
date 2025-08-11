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
