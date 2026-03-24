# Practice Test – Game Programming with C++

**Time:** 1 hour  
**Format:** Multiple choice  
**Total points:** 40  
**Questions:** 20  

---

## Instructions
- Each question has 4 alternatives.
- Some questions have **one correct answer**, others have **two correct answers**.
- Mark the alternative(s) you think are correct.

---

## Scoring
- Questions with 1 correct answer: **2 points**
- Questions with 2 correct answers: **1 point per correct alternative (max 2 points)**

---

## Questions

### 1. What is the best description of a runtime error?
A. An error found while compiling the source code  
B. An error that happens only in Unreal Engine  
C. An error that happens while the program is running  
D. An error in file naming only  

**Your answer:** C.

--- 

### 2. Which TWO stages are part of building a C++ program into an executable?
A. Compilation  
B. Linking  
C. Texturing  
D. Animation  

**Your answer:** A & B.

---

### 3. A program compiles and runs, but score calculation is wrong. What kind of error is this most likely to be?
A. Logic error  
B. Syntax error  
C. Linker error  
D. Header error  

**Your answer:** A.

---

### 4. Why do we use `#include <string>` when using `std::string`?
A. Because the compiler must be told where that declaration lives  
B. Because std::string is built into all C++ code automatically, but only sometimes  
C. Because it makes the code run faster  
D. Because it turns strings into pointers  

**Your answer:** A.

---

### 5. Which formula correctly converts (x, y) into a 1D index for a grid with width `width`?
A. index = x * width + y  
B. index = y * width + x  
C. index = x + y + width  
D. index = y / width + x  

**Your answer:** B.

---

### 6. Which TWO statements about `std::vector` are correct in this course context?
A. It is useful for storing grid cells in contiguous memory  
B. It cannot store characters  
C. It is often indexed using the computed 1D position  
D. It always prevents out-of-bounds mistakes automatically  

**Your answer:** A & C.

---

### 7. In a simple game loop, which order is usually the best high-level structure?
A. Render → Input → Update  
B. Input → Update → Render  
C. Build → Compile → Run  
D. Update → Input → Delete  

**Your answer:** B

---

### 8. Why is input → update → render a useful structure?
A. It separates responsibilities and makes logic easier to follow  
B. It removes the need for debugging  
C. It guarantees perfect performance  
D. It means the game no longer needs state  

**Your answer:**  A

---

### 9. Which TWO situations are good uses of `switch`?
A. A menu with options 1, 2, 3, 4  
B. A long chain of discrete choices from the same variable  
C. Comparing two vectors for equality  
D. Performing floating-point collision math  

**Your answer:**  A & B.

---

### 10. What does it mean that `std::vector` stores elements contiguously?
A. The values are stored next to each other in memory  
B. The values are sorted automatically  
C. The values cannot be changed  
D. The values are always on the stack  

**Your answer:**  A

---

### 11. Which statement about references is correct?
A. A reference must always be reassigned later  
B. A reference can act as another name for an existing object  
C. A reference is always nullable  
D. A reference is the same thing as dynamic allocation  

**Your answer:**  B

---

### 12. Why do we often pass a large object as `const T&`?
A. To force ownership transfer  
B. To avoid copying and prevent modification  
C. To make it polymorphic  
D. To make it global  

**Your answer:**  B

---

### 13. Which TWO statements about pointers are correct?
A. A pointer can hold the address of an object  
B. nullptr means the pointer currently points to nothing valid  
C. Dereferencing a null pointer is safe if done only once  
D. Pointers make references unnecessary in all cases  

**Your answer:**  A & B

---

### 14. What is RAII mainly about?
A. Rendering all objects individually  
B. Tying resource management to object lifetime  
C. Replacing all functions with classes  
D. Using only raw arrays  

**Your answer:**  B. But, what actually *is* the lifetime/lifecycle of an object?
**Edit:** It seems you can boil it down to: Creation (birth), modifications (life) and deletion (death).
For example, the lifetime of a locally created object is birthed at declaration, lives inside the defined scope (such as a function body), and dies as the scope ends. It would seem that lifecycles are in large tied to scopes. However, what would happen if we declared a local variable and passed it as a reference to a non-member function which utilizes it in a scope that lives longer than the scope in which the variable was originally declared? Is the variable garuanteed to live for the duration of the caller's scope, or is the reference left dangling?

**Second edit:** Apparently, or maybe obvious to many, the above mentioned local variable would be considered dead as the function exits it's scope, and reference would be considered dangling. Passing references do not extend lifetimes, however there seems to be an exception to this. It would seem that you can extend the lifetime of a temporary, such as `std::string("hello")`, by binding it to a const reference, like so: `const std::string& ref = std::string("hello");`. The temporary is here bound to the lifetime of variable ref.

---

### 15. Which ONE statement best describes why `std::unique_ptr` is useful?
A. It expresses shared ownership between many unrelated systems  
B. It expresses single ownership and helps automatic cleanup  
C. It removes the need for destructors in all C++ code  
D. It stores objects directly inside the stack frame of another function  

**Your answer:**  B

---

### 16. In the Snake entity-system work, what is the main purpose of a World or EntityManager?
A. To own entities and update/render them through a shared interface  
B. To replace all gameplay rules with Grid code  
C. To move all code into one giant class  
D. To avoid using polymorphism  

**Your answer:**  A.

---

### 17. Which TWO statements match the intended Snake architecture?
A. Game can handle high-level flow such as menu/help/playing/outro  
B. World can own entities such as snake and food  
C. Grid should usually contain all score logic and menu logic  
D. Every system should directly modify everything else freely  

**Your answer:**  A & B.

---

### 18. What does a state machine help with in a small game?
A. It helps organize different modes like menu, help, and playing  
B. It removes the need for functions  
C. It replaces collision handling automatically  
D. It prevents all runtime errors  

**Your answer:**  A.

---

### 19. Which TWO responsibilities are commonly separated in a modern game engine or game program structure?
A. Input handling  
B. Gameplay/update logic  
C. Random variable naming  
D. Rendering/presentation  

**Your answer:**  B & D.

---

### 20. Unreal Engine question: which ONE statement is most accurate for a beginner?
A. Unreal gameplay code often uses engine framework classes with different roles, and some C++ functionality may be exposed to Blueprint  
B. Unreal has no object roles or gameplay framework structure  
C. Unreal gameplay programming is unrelated to update loops and events  
D. Unreal C++ is only for graphics programming  

**Your answer:**  A.

---
