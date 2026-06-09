# Formal Parameters

**Formal parameters** are the variables written in the function definition that receive values from the actual arguments.

They act like placeholders for the incoming data.

---

# Example

```cpp 
#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << a + b;
}

int main()
{
    add(5, 3);

    return 0;
}
```

---

# Understanding the Example

Function definition:

```cpp 
void add(int a, int b)
```

Here:

* `a` and `b` are **formal parameters**

Function call:

```cpp 
add(5, 3);
```

Here:

* `5` and `3` are **actual arguments**

---

# How They Work

When the function is called:

```cpp 
add(5, 3);
```

the values are copied like this:

```cpp 
a = 5
b = 3
```

Then the function executes.

---

# Difference Between Formal Parameters and Actual Arguments

| Formal Parameters                | Actual Arguments               |
| -------------------------------- | ------------------------------ |
| Variables in function definition | Real values passed to function |
| Receive values                   | Send values                    |
| Exist inside function            | Exist in function call         |
| Example: `int a`                 | Example: `5`                   |

---

# Important Points

## 1. Formal parameters are local to the function

They can only be used inside the function.

---

## 2. They receive data from actual arguments

Example:

```cpp 
square(4);
```

Here:

* `4` goes into the formal parameter.

---

## 3. Number and type should usually match

```cpp 
void add(int a, int b)
```

Call should be:

```cpp 
add(2, 3);
```

---

# Real-life Analogy

Think of formal arguments as empty containers:

```cpp 
void add(int a, int b)
```

* `a` and `b` are empty boxes.

When calling:

```cpp 
add(5, 3);
```

* values `5` and `3` are placed into those boxes.
