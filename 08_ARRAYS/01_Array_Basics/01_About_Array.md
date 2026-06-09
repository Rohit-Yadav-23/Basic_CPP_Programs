# Array

### 🔹 What is an Array?

An **Array** is a **linear data structure** that stores elements of the **same data type** in **contiguous memory locations**.

> Key idea: **Index-based access (fast and direct)**

👉 Example:

```text
arr = [10, 20, 30, 40]
```

---

### 🔹 How Array Works

Each element is stored at a **continuous memory address**, and you access them using an **index**.

```text 
Index:   0   1   2   3
Value:  10  20  30  40
```

---

### 🔹 Basic Operations

1. **Access (O(1))**

   * Direct access using index → `arr[i]`

2. **Traversal (O(n))**

   * Visit each element

3. **Insertion (O(n))**

   * Shift elements to insert

4. **Deletion (O(n))**

   * Shift elements after deletion

5. **Update (O(1))**

   * Change value at index

---

### 🔹 Types of Arrays

#### 1. One-Dimensional (1D)

```text
[10, 20, 30]
```

#### 2. Two-Dimensional (2D)

```text
[ [1,2,3],
  [4,5,6] ]
```

#### 3. Multi-Dimensional

* 3D, 4D arrays, etc.

---

### 🔹 Time Complexity

| Operation | Time |
| --------- | ---- |
| Access    | O(1) |
| Traversal | O(n) |
| Insertion | O(n) |
| Deletion  | O(n) |

---

### 🔹 Advantages

✔ Fast access using index  
✔ Simple and easy to use  
✔ Efficient memory usage (no extra pointers)  

---

### 🔹 Disadvantages

❌ Fixed size (in static array)  
❌ Insertion/deletion is costly  
❌ Requires contiguous memory  

---

### 🔹 Applications

* Storing data collections
* Matrix operations
* Searching & sorting algorithms
* Implementing other data structures (stack, queue)

---

### 🔹 Important Points

* Index starts from **0**
* All elements must be of **same type**
* Best when you need **fast access**

---