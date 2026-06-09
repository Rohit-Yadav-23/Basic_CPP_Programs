# Strings

### 🔹 What is a String?

A **String** is a **sequence of characters** stored together. Strings are CHARACTER ARRAYS.

> Characters can be letters, digits, symbols, or spaces.

👉 Examples:

* `"hello"`
* `"rohit123"`
* `"data structures"`

>   NULL CHARACTER means \0    whose ASCII VALUE is 0

---

### 🔹 How Strings are Stored

Internally, a string is stored as an **array of characters**.

```text
"h   e   l   l   o"
 0   1   2   3   4
```

In C/C++:

* Ends with a special character: **`\0` (null character)**

```text
hello\0
```

---

### 🔹 Basic Operations on Strings

1. **Access**

   * Get character using index → `s[0]`

2. **Concatenation**

   * Join two strings

3. **Length**

   * Find number of characters

4. **Substring**

   * Extract part of string

5. **Comparison**

   * Compare two strings

6. **Traversal**

   * Visit each character

---

### 🔹 String in C++

#### ✅ Using `string` (Recommended)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hello";

    cout << s.length() << endl;   // 5
    cout << s[0] << endl;         // h

    s += " world";                // concatenation
    cout << s << endl;            // hello world

    cout << s.substr(0, 5);       // hello
}
```
---

### 🔹 Time Complexity

| Operation     | Time |
| ------------- | ---- |
| Access        | O(1) |
| Traversal     | O(n) |
| Concatenation | O(n) |
| Comparison    | O(n) |

---

### 🔹 Types of Strings

* **Immutable String** (like in Java, Python)
* **Mutable String** (like C++ string can be modified)

---

### 🔹 Applications of Strings

* Text processing
* Pattern matching (e.g., searching words)
* Compilers (parsing code)
* DNA sequence analysis
* Chat systems / messaging apps

---

### 🔹 Important Points

* String = **array of characters**
* In C → ends with `\0`
* In C++ → handled by `string` class (easier & safer)

---

### 🔹 Example

```text
String: "DATA"

Index:   0   1   2   3
         D   A   T   A
```

---

### 🔹 Comparison with Other Data Structures

| Structure   | Stores              |
| ----------- | ------------------- |
| Array       | Any data type       |
| String      | Characters only     |
| Linked List | Nodes with pointers |

---
