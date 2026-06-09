# Double Pointer in C++

A **double pointer** is a pointer that stores the address of another pointer.

It is also called:

* pointer to pointer.

---

# Basic Idea

Normal pointer:

```cpp
int *ptr;
```

* stores address of an integer variable.

Double pointer:

```cpp
int **dptr;
```

* stores address of a pointer variable.

---

# Memory Structure

```cpp
int x = 10;
```

Suppose:

* `x` is stored at address `1000`

Now:

```cpp
int *ptr = &x;
```

Suppose:

* `ptr` is stored at address `2000`
* value inside `ptr` = `1000`

Now:

```cpp
int **dptr = &ptr;
```

Suppose:

* `dptr` is stored at address `3000`
* value inside `dptr` = `2000`

---

# Diagram

```cpp
dptr  --->  ptr  --->  x
             |
             v
           1000
```

Or:

```cpp
dptr -> ptr -> x -> 10
```

---

# Syntax

## Single Pointer

```cpp
int *ptr;
```

---

## Double Pointer

```cpp
int **dptr;
```

---

# Levels of Indirection

| Variable | Meaning                                            |
| -------- | -------------------------------------------------- |
| `x`      | normal variable                                    |
| `*ptr`   | value at address stored in ptr                     |
| `**dptr` | value at address stored in pointer pointed by dptr |

---

# Accessing Values

```cpp
x
*ptr
**dptr
```

All can give the same value.

---


# Why Double Pointers are Used

Main uses:

* Dynamic memory allocation
* 2D arrays
* Changing pointer values inside functions
* Linked data structures
* Command line arguments

---


# Important Difference

| Single Pointer             | Double Pointer            |
| -------------------------- | ------------------------- |
| Stores address of variable | Stores address of pointer |
| `int *ptr`                 | `int **dptr`              |
| One dereference needed     | Two dereferences needed   |

---

# Real-life Analogy

Think of:

* `x` → actual house
* `ptr` → paper containing house address
* `dptr` → paper containing address of that paper

So:

```cpp
dptr -> ptr -> x
```
