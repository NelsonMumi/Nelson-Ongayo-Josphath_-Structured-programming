A **normal variable** stores an actual value in memory, while a **pointer** stores the memory address of another variable.

### Normal Variable
- Stores the actual data value
- Accesses memory directly
- Values are read and modified directly

## Pointer

A **pointer** is a variable that stores the **memory address of another variable**.  
Instead of holding a data value directly, a pointer allows indirect access to the data stored in memory.

##Variable declaration & definition
**Variable declaration & definition** Declares a variable and stores a value.

##Pointer declaration & definition
**Pointer declaration & definition**Declares a pointer and assigns it the address of x.

##Dereferencing a pointer
**Dereferencing a pointer**accessing or modifying the value stored at the memory address held by the pointer. int x = 10; int *p = &x;
##Modifying a value
**Modifying a value** int x = 10; int *p = &x;

*p = 50; printf("%d", x);

##Cases Where Pointers Are Preferred
Cases Where **Pointers** Are Preferred Over Normal Variables 
Passing large data to functions efficiently Dynamic memory allocation Modifying actual variables inside functions

##Risks of using pointers
Risks of Using Pointers Compared to Variables Harder to read and maintain Security risks-Buffer overflows and illegal memory access Memory leaks-Failure to free allocated memo.

##scenarios when call by value is prefered
Scenarios when Call by Value Is Preferred When original data must not change When working with small data types For security and reliability

##scenarios when call by reference is prefered
Scenarios when Call by Reference Is Preferred When function must modify actual data When passing arrays, structures, or large data When returning multiple values from a function





