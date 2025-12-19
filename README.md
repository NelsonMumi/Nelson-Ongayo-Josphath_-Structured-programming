A normal variable stores an actual value, while a pointer stores the memory address of another variable.

Normal Variable

Stores: Actual data value

Access: Direct

Modification: By assigning a new value

int num = 10;

Pointer

Stores: Memory address of a variable

Access: Indirect (through dereferencing)

Modification: By accessing the value at the stored address

int *ptr = &num;


Here, ptr stores the address of num, not the value 10.

2. Memory Access and Value Modification

A variable accesses memory directly

A pointer accesses memory indirectly via its stored address

*ptr = 20;


The above statement modifies the value of num using the pointer.

3. Variable Declaration and Definition vs Pointer Declaration and Definition
Variable Declaration & Definition
int x = 5;


Declares a variable

Allocates memory

Stores a value

Pointer Declaration & Definition
int *p;
p = &x;


Declares a pointer

Stores the address of x

4. Role of the & and * Operators
Address-of Operator (&)

Used to obtain the memory address of a variable.

&p   // gives address of p

Dereference Operator (*)

Used to access or modify the value stored at the address.

*p   // accesses value at address p

5. Dereferencing a Pointer

Dereferencing means accessing the value stored at the memory location a pointer points to.

Example
int x = 10;
int *p = &x;

printf("%d", *p); // Outputs 10

Modifying Value Using Dereferencing
*p = 30;


This changes the value of x to 30.

6. Scenarios Where Pointers Are Preferred Over Variables

Pointers are preferred when:

a) Modifying Variables Inside Functions

Pointers allow changes to reflect outside the function.

void update(int *x) {
    *x = 50;
}

b) Efficient Memory Usage

Passing large data structures by pointer avoids copying data.

void process(int *arr);

7. Limitations and Risks of Using Pointers

Null pointer dereferencing

Dangling pointers

Memory leaks

Harder debugging

Risk of accessing invalid memory

Compared to normal variables, pointers require careful handling.

8. Call by Value vs Call by Reference
Call by Value

A copy of the variable is passed

Original value remains unchanged

void increment(int x) {
    x++;
}

Call by Reference

Address of the variable is passed

Original value can be modified

void increment(int *x) {
    (*x)++;
}

9. Practical Scenarios
a) When Call by Value Is Preferred

When original data must remain unchanged

Example: Mathematical calculations

b) When Call by Reference Is Preferred

When modifying original values is required

Example: Swapping variables, updating counters
