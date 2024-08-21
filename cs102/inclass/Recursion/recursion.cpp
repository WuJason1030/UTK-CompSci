/*
Recursion: Solving a problem in terms of itself.

In code, this manifests by having a function call itself.
A function that has this quality is a "recursive function."

All recursive algorithms must have the following:

-Base Case (i.e., when to stop)
-Work towards solution
-Recursive Call (i.e., call ourselves)

They don't necessarily need to be in this order. Having the recursive call at the
end is "tail recursion" and can be directly translated into a loop.

Below is an example of calculating the factorial of an integer.
For example, five factorial = 5! = 5 * 4 * 3 * 2 * 1 = 120. */

#include<iostream>
using namespace std;

int factorial(int n);

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}

/* A recursive function */
int factorial(int n) {
    if(n > 1) {
        /* the work towards the solution is "n *" and the recursive call is "factorial(n - 1)" */
        return n * factorial(n - 1); // The factorial is called inside its own function, it repeats itself until base case.
    }
    else {
        /* our base case */
        return 1;
    }
}

/*

Most of the time, seeing the recursive solution is easy to comprehend, but facing a problem
and coming up with the recursive solution yourself is a difficult task.

One reason this is the case is because we can't type out a linear, step-by-step outline that is
easily viewable as steps in code. For visual and spactial learners, this poses a challenge.
In the factorial code, for example, we have a single line of "work" and the recursive call together.
The complete written multiplication is never seen on the screen for us.
Because of this, I highly recommend using an IDE that supports a watch window and breakpoints,
so you can step through all the recursive calls and see the linear steps of the program
animate on the screen before you in real time.

Remember that each time you make a recursive call, you get a new copy of all your local variables,
just as we would any time we call a regular function.

------------------------------------

This is barely the tip of the iceberg when it comes to recursion practice.
It’s a subject that many experienced programmers find threatening,
so the earlier the exposure the more comfortable you will hopefully be in later classes.

------------------------------------
Recursion in Nature

https://en.wikipedia.org/wiki/Koch_snowflake

Start with a equilateral triangle and split each line segment of the triangle into thirds.
Let's call the segment length x and the 1/3 of segment length y.
Take the middle third of each line segment, and replace it with an equalateral triangle
with each side the size of y.
If we continue this process over and over, the shape we create is a snowflake.

This is called a Koch snowflake.
*/
