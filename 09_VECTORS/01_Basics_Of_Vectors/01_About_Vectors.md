# Vector in C++

A **vector** in C++ is a dynamic array provided by the STL (Standard Template Library).
It can automatically increase or decrease its size during program execution.

Header file:

```cpp 
#include <vector>
```

---

## 🔹 Why Do We Use Vectors?

Normal arrays have fixed size.

```cpp 
int arr[5];
```

Here size is fixed to 5.

But in many situations, we do not know how many elements will be needed.
Vectors solve this problem because they can resize dynamically.

---

## 🔹 Syntax

```cpp 
vector<data_type> vector_name;
```

Example:

```cpp 
vector<int> v;
```

This creates an empty integer vector.

---

## 🔹 How Vector Works Internally

Vector stores elements in:

* contiguous memory locations
* just like arrays

But unlike arrays:

* vector automatically allocates larger memory when needed.

---

### Empty Vector

```cpp 
vector<int> v;
```

---

### Fixed Size Vector

```cpp 
vector<int> v(5);
```

Creates:

```cpp 
0 0 0 0 0
```

---

### Fixed Size with Initial Value

```cpp 
vector<int> v(5, 100);
```

Creates:

```cpp 
100 100 100 100 100
```

---

### Using Initializer List

```cpp 
vector<int> v = {1,2,3,4,5};
```

---

## 🔹 Traversing a Vector

---

### Using For Loop

```cpp 
for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

---

### Using Range-Based Loop

```cpp 
for(int x : v) {
    cout << x << " ";
}
```

---

### Using Iterator

```cpp 
for(auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

---

## 🔹 Important Functions

| Function      | Meaning             |
| ------------- | ------------------- |
| `push_back()` | Insert at end       |
| `pop_back()`  | Remove last         |
| `size()`      | Number of elements  |
| `clear()`     | Remove all elements |
| `empty()`     | Checks empty or not |
| `front()`     | First element       |
| `back()`      | Last element        |

---

## 🔹 Example of `front()` and `back()`

```cpp 
vector<int> v = {10,20,30};

cout << v.front() << endl;
cout << v.back();
```

Output:

```cpp 
10
30
```

---

## 🔹 Capacity vs Size

This is an important concept.

---

### Size

Number of actual elements.

```cpp 
v.size();
```

---

### Capacity

Amount of memory allocated.

```cpp 
v.capacity();
```

Capacity is usually greater than or equal to size.

---

## 🔹 Dynamic Resizing

When vector becomes full:

1. New larger memory is created
2. Old elements copied
3. Old memory deleted

Usually capacity doubles.

Example:

```cpp 
1 → 2 → 4 → 8 → 16
```

---

## 🔹 Advantages of Vector

✅ Dynamic size  
✅ Easy insertion/removal  
✅ STL support  
✅ Safer than arrays  
✅ Contiguous memory  

---

## 🔹 Disadvantages

❌ Slightly slower than arrays  
❌ Extra memory usage during resizing  

---

## 🔹 Array vs Vector

| Feature       | Array  | Vector           |
| ------------- | ------ | ---------------- |
| Size          | Fixed  | Dynamic          |
| Memory        | Static | Dynamic          |
| STL Functions | No     | Yes              |
| Easy Resize   | No     | Yes              |

---

## 🔹 Most Important Point

A vector is basically:

> "An automatically resizable array."

It combines:

* array-like fast access
* dynamic memory flexibility

---


#   Vectors are mainly a **run-time** data structure.

Here’s why:

---

## 🔹 Arrays vs Vectors

### Array

```cpp
int arr[5];
```

* Size `5` is fixed at **compile time**
* Memory size is decided before program runs

So arrays are generally considered compile-time sized structures.

---

## 🔹 Vector

```cpp
vector<int> v;
```

For vectors:

* size can change while program is running
* memory allocation happens dynamically
* elements can be added/removed during execution

So vectors work mainly at **run time**.

---

# 🔹 Example

```cpp
int n;
cin >> n;

vector<int> v(n);
```

Here:

* user enters size during execution
* compiler does NOT know the size beforehand

This is run-time behavior.

---

# 🔹 Internally

Vectors use:

* **dynamic memory allocation**
* heap memory
* automatic resizing during execution

All these are run-time operations.

---

# 🔹 Important Point

The **vector class itself** is available at compile time because it is a template:

```cpp
vector<int>
```

But:

* the actual storage management
* resizing
* memory allocation

happens at run time.

---

# 🔹 Simple Summary

| Feature         | Array        | Vector   |
| --------------- | ------------ | -------- |
| Size decided    | Compile time | Run time |
| Memory          | Static       | Dynamic  |
| Resize possible | No           | Yes      |

---

So the final answer is:

> **Vectors are dynamic containers whose memory management happens at run time.**
