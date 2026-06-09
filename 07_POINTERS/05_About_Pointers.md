# Pointers in C++

A **pointer** is a variable that stores the **memory address** of another variable.

Instead of storing a normal value like `10` or `'A'`, a pointer stores the **location** where that value exists in memory.

---

# Why Do We Use Pointers?

Pointers are used to:

* Access memory directly
* Pass large data efficiently
* Create dynamic memory
* Work with arrays and strings
* Implement data structures like linked list, tree, graph
* Support runtime polymorphism in OOP

---

# Understanding the Symbols

## 1. `&` (Address Operator)

Used to get the address of a variable.

```cpp
&a
```

means:

> “Address of variable `a`”

---

## 2. `*` (Dereference Operator)

Used to access the value stored at an address.

```cpp
*p
```

means:

> “Value stored at the address inside pointer `p`”

---

# Step-by-Step Understanding

```cpp
int a = 10;
```

Suppose `a` is stored at memory location `1000`.

| Variable | Value | Address |
| -------- | ----- | ------- |
| a        | 10    | 1000    |

---

```cpp
int *p = &a;
```

Now pointer `p` stores address `1000`.

| Variable | Value |
| -------- | ----- |
| p        | 1000  |

---

```cpp
*p
```

This goes to address `1000` and reads the value there.

Output:

```cpp
10
```

---

# Pointer Declaration

## Syntax

```cpp
datatype *pointer_name;
```

Example:

```cpp
int *p;
float *q;
char *r;
```

---

# Important Concept

## Pointer Type Depends on Data Type

```cpp
int *p;
```

means:

`p` can store address of an integer variable. It will not work correctly if we try to store address of a float or char variable.

---

# Pointer and Arrays

Array name itself acts like a pointer.

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};

    cout << arr << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;

    return 0;
}
```

---

# Explanation

Suppose array starts at address `2000`.

| Address | Value |
| ------- | ----- |
| 2000    | 10    |
| 2004    | 20    |
| 2008    | 30    |

---

## `arr`

Stores base address:

```cpp
2000
```

---

## `*arr`

Value at address `2000`

```cpp
10
```

---

## `*(arr + 1)`

Moves to next integer location.

```cpp
20
```

---

# Pointer Arithmetic

Pointers can move through memory.

```cpp
p + 1
```

means:

Move to next memory location according to data type size.

---

## Example

```cpp
int a = 10;
```

If `a` is at `1000` and integer size is 4 bytes:

```cpp
p + 1
```

becomes:

```cpp
1004
```

---

# NULL Pointer

A pointer that points to nothing.

```cpp
int *p = NULL;
```

or

```cpp
int *p = nullptr;
```

(`nullptr` is modern C++)

---

# Wild Pointer

Uninitialized pointer.

```cpp
int *p;
```

Dangerous because it contains garbage address.

---

# Dangling Pointer

Pointer pointing to deleted or invalid memory.

Example:

```cpp
int *p = new int(10);

delete p;
```

Now `p` becomes dangling.

---

# Difference Between Normal Variable and Pointer

| Normal Variable | Pointer          |
| --------------- | ---------------- |
| Stores value    | Stores address   |
| `int a = 5`     | `int *p = &a`    |
| Access directly | Access using `*` |

---

# Important Terms

| Term                 | Meaning               |
| -------------------- | --------------------- |
| Address Operator     | `&`                   |
| Dereference Operator | `*`                   |
| Null Pointer         | Points to nothing     |
| Wild Pointer         | Uninitialized pointer |
| Dangling Pointer     | Invalid pointer       |
| Pointer Arithmetic   | Moving through memory |

---

# Advantages of Pointers

* Efficient memory usage
* Faster array handling
* Dynamic memory allocation
* Used in advanced data structures
* Supports polymorphism and recursion

---

# Disadvantages

* Can cause memory leaks
* Harder to debug
* Dangling pointers can crash program
* Unsafe if misused

---

# Simple Real-Life Analogy

Think of memory like houses in a city.

* Variable value = person living inside house
* Address = house number
* Pointer = paper containing house number

So pointer does not store the person, it stores the house address.
