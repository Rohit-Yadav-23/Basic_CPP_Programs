#   new Keyword

The `new` keyword in C++ is used for **dynamic memory allocation**.

It allocates memory during **runtime** from a memory area called the **heap** and returns the address of that memory.

---

# Basic Syntax

```cpp
pointer = new data_type;
```

---

# Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    ptr = new int;

    *ptr = 50;

    cout << *ptr;
}
```

### Output

```cpp
50
```

---

# What Happens Internally

```cpp
ptr = new int;
```

Steps:

1. Memory for an integer is created in heap memory
2. Address of that memory is returned
3. That address is stored in `ptr`

---

# Memory Diagram

```text
Heap Memory
+------+
|  50  |
+------+
    ^
    |
   ptr
```

---

# Why Use `new`?

Normal variables use **stack memory**.

Dynamic memory using `new` is useful when:

* size is decided at runtime
* memory should survive until manually deleted
* large memory is needed
* dynamic data structures are created

Examples:

* linked list
* trees
* graphs
* dynamic arrays

---

# Dynamic Integer Example

```cpp
int *p = new int;

*p = 100;

cout << *p;
```

---

# Dynamic Float Example

```cpp
float *f = new float;

*f = 3.14;
```

---

# Dynamic Character Example

```cpp
char *ch = new char;

*ch = 'A';
```

---

# Dynamic Array Allocation

---

## Syntax

```cpp
pointer = new data_type[size];
```

---

## Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int *arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
```

### Output

```cpp
1 2 3 4 5
```

---

# Runtime Size Allocation

Very important advantage.

```cpp
int n;

cin >> n;

int *arr = new int[n];
```

Array size decided during runtime.

---

# Deallocating Memory Using `delete`

Memory created using `new` should be released using `delete`.

Otherwise memory leak occurs.

---

# Syntax

## For single variable

```cpp
delete ptr;
```

---

## For array

```cpp
delete[] arr;
```

---

# Example

```cpp
int *p = new int;

delete p;
```

---

# Example with Array

```cpp
int *arr = new int[5];

delete[] arr;
```

---

# Memory Leak

If dynamically allocated memory is not deleted, memory remains occupied.

---

## Bad Example

```cpp
int *p = new int;
```

No `delete`.

This causes:

❌ Memory Leak

---

# Good Example

```cpp
int *p = new int;

delete p;
```

---

# `new` with Objects

`new` can also create objects dynamically.

---

## Example

```cpp
#include <iostream>
using namespace std;

class Student
{
public:
    int age;

    void show()
    {
        cout << age;
    }
};

int main()
{
    Student *s = new Student;

    s->age = 20;

    s->show();

    delete s;
}
```

### Output

```cpp
20
```

---

# `->` Operator

When object is created dynamically:

```cpp
Student *s = new Student;
```

Access members using:

```cpp
s->age
```

instead of:

```cpp
s.age
```

---

# Constructor with `new`

When object is created using `new`, constructor is automatically called.

---

## Example

```cpp
class Test
{
public:
    Test()
    {
        cout << "Constructor called";
    }
};

int main()
{
    Test *t = new Test;

    delete t;
}
```

---

# Destructor with `delete`

When `delete` is used:

* destructor automatically runs
* memory is freed

---

# Difference Between Stack and Heap

| Stack Memory | Heap Memory       |
| ------------ | ----------------- |
| Automatic    | Manual            |
| Fast         | Slightly slower   |
| Fixed scope  | Flexible lifetime |
| Auto deleted | Must use `delete` |
| Small memory | Large memory      |

---

# `new` vs Normal Variable

---

## Normal Variable

```cpp
int x = 10;
```

Memory automatically managed.

---

## Dynamic Variable

```cpp
int *p = new int;

*p = 10;
```

Memory manually managed.

---

# `new` Returns Address

```cpp
int *p = new int;
```

Equivalent idea:

```text
Allocate memory
Return address
Store address in p
```

---

# What If Allocation Fails?

`new` throws exception:

```cpp
bad_alloc
```

---

# `nothrow` Version

```cpp
int *p = new(nothrow) int;
```

Returns `NULL` instead of exception.

---

# Dynamic 2D Array Using `new`

```cpp
int rows = 3;
int cols = 4;

int **arr = new int*[rows];

for(int i = 0; i < rows; i++)
{
    arr[i] = new int[cols];
}
```

---

# Releasing 2D Array

```cpp
for(int i = 0; i < rows; i++)
{
    delete[] arr[i];
}

delete[] arr;
```

---

# Important Interview Points

---

## `new` Allocates Memory From

✅ Heap memory

---

## `new` Returns

✅ Address of allocated memory

---

## `delete` Frees Memory

✅ Yes

---

## Difference Between `malloc()` and `new`

| `new`                       | `malloc()`                |
| --------------------------- | ------------------------- |
| C++ keyword                 | C function                |
| Calls constructor           | Does not call constructor |
| Type-safe                   | Not type-safe             |
| Returns proper pointer type | Returns `void*`           |
| Uses `delete`               | Uses `free()`             |

---

# Example Comparison

---

## Using `new`

```cpp
int *p = new int;
```

---

## Using `malloc`

```cpp
int *p = (int*) malloc(sizeof(int));
```

---

# Summary

`new` keyword:

* dynamically allocates memory
* allocates memory in heap
* returns address
* used with pointers
* works for variables, arrays, and objects
* should be paired with `delete`

Main forms:

```cpp
new int
new int[5]
new ClassName
```

Memory release:

```cpp
delete ptr;
delete[] arr;
```
