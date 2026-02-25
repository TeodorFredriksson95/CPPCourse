# CPPCourse

# Reflection Questions

## 1. What is the difference between compilation errors and runtime errors?  
Give one example of each.

**Answer:**  
- Compilation errors occur during compile-time, ie, when the compiler tries to create .obj files and link dependencies. The following would cause a compilation error:
`int x = "not a number"`, since we are trying to implicitly convert a string to an integer, which is not a valid type conversion *(in this specific example)*. Another very "easy" error could be one caused simply by trying to compile a program that features a syntactical error.
- I would define runtime errors as such that something "unexpected" has happened that causes an error after a program has been built and is currently running. I find it interesting that learncpp.com gives an example of a runtime error as being the console window unexpectedly closing very quickly after the program has finished it's lifecycle, as in my mind, that is not actually a runtime "error", but a mismatch between the intention of the author of the software and the actual logic that is being run.

A runtime error could be, for example, a function body that handles input from the user. The input is designed to handle one of two things: either convert the string into a valid number, or exit the program if a specific `char` has been entered. In order to determine which route the function should take, we need to handle a scenario where the input is either an integer or char type. Neglecting to do checks for either scenario, would likely result in a mismatch between expected and supplied types, which would cause a runtime error. If this scenario is not handled gracefully, it may very well result in a runtime crash.

---

## 2. What does it mean for behavior to be "undefined"?  
Why is that worse than a normal bug?

**Answer:**  
An undefined behavior is a behavior in code that acts in a manner we did not expect. For example, neglecting to initialize an integer variable with a value means the pointer for that variable will point to a memory address containing what is commonly called a `garbage value`. This value could be anything, but since it is unrealistic that we know what this value is, it means that this value may actually conform to the use case for which we intend to use the variable, but with a completely different value than what we might expect.

This kind of bug can prove more difficult than, say, a compilation error, as it may pass certain phases of code execution, but carrying with it data we have not accounted for, which in turn might spawn other really odd bugs, making the task of root cause analysis that much more difficult.

---

## 3. What is a forward declaration used for?  

**Answer:**  
To tell the compiler about the existance of the implementation of a function.

---

## 4. If you store a 2D grid in 1D memory, how do you compute the index?

**Answer:**  
There is a formula for this: `index = r * cols + c;`
- row = ____________________  
- column = ____________________  
- width = ____________________
