#   Functions

In programming, a **function** is a block of code that performs a specific task.

Instead of writing the same code again and again, we put that code inside a function and call it whenever needed.

## Simple Definition

A function:

* takes some input (optional),
* performs some work,
* returns an output (optional).

You can think of it like a small machine in a program.

---

## Example in C++

```cpp
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 3);

    cout << result;

    return 0;
}
```

### Output

```cpp
8
```

---

# Understanding the Parts

## 1. Function Declaration

```cpp
int add(int a, int b)
```

This means:

* `int` → function returns an integer value
* `add` → function name
* `(int a, int b)` → parameters (inputs)

---

## 2. Function Body

```cpp
{
    return a + b;
}
```

This is the actual work performed by the function.

---

## 3. Function Call

```cpp
add(5, 3)
```

Here:

* `5` and `3` are arguments,
* the function executes,
* result becomes `8`.

---

# Why Functions are Used

Functions help to:

* Reduce code repetition
* Make programs easier to read
* Make debugging easier
* Divide large programs into smaller parts
* Reuse code multiple times

---

# Types of Functions

## 1. Function with return value and parameters

```cpp
int sum(int a, int b)
```

---

## 2. Function without return value

```cpp
void printHello()
{
    cout << "Hello";
}
```

`void` means the function does not return anything.

---

## 3. Function without parameters

```cpp
void greet()
{
    cout << "Good Morning";
}
```

---

## 4. Function with both parameters and return value

```cpp
int square(int x)
{
    return x * x;
}
```

---

# Real-life Analogy

Think of a function like a calculator button:

* You give input,
* it performs a task,
* it gives output.

Example:

* Input → `2 + 3`
* Process → addition
* Output → `5`

---

# General Syntax of a Function in C++

```cpp
return_type function_name(parameters)
{
    // code
}
```

Example:

```cpp
int multiply(int a, int b)
{
    return a * b;
}
```

---

# Important Terms

| Term          | Meaning                        |
| ------------- | ------------------------------ |
| Function Name | Name of the function           |
| Parameters    | Variables received by function |
| Arguments     | Actual values passed           |
| Return Type   | Type of value returned         |
| Function Call | Invoking the function          |

---

# Main Function

Every C++ program starts execution from:

```cpp
int main()
```

`main()` is also a function. It is the entry point of the program.
