#   Actual Parameters (Arguments)

**Actual arguments** are the real values that are passed to a function when the function is called.

They are also called simply **arguments**.

---

# Formal Parameters vs Actual Arguments

In the function definition:

```cpp 
void add(int a, int b)
```

* `a` and `b` are called **formal parameters**

In the function call:

```cpp
add(5, 3);
```

* `5` and `3` are called **actual arguments**

---

# Simple Difference

| Formal Parameters                | Actual Arguments                        |
| -------------------------------- | --------------------------------------- |
| Variables in function definition | Real values passed during function call |
| Receive data                     | Send data                               |
| Example: `int a, int b`          | Example: `5, 3`                         |

---

# Important Point

Actual arguments can be:

* constants
* variables
* expressions

Example:

```cpp 
int x = 10;

sum(x, 5, x + 2);
```

Here:

* `x`
* `5`
* `x + 2`

all are actual arguments.
