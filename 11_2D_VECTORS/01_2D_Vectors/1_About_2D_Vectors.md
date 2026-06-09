#   2D Vectors

A **2D vector** in C++ is a vector that stores other vectors inside it.
It is used to represent data in the form of **rows and columns**, just like a matrix or 2D array.

>  A 2D vector is essentially a vector of vectors, where each inner vector represents a row of the matrix.
---

# Syntax of 2D Vector

```cpp
vector<vector<data_type>> vector_name;
```

Example:

```cpp
vector<vector<int>> arr;
```

This means:

* Outer vector → stores rows
* Inner vectors → store columns

---

# Example of a 2D Vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << arr[1][2];

    return 0;
}
```

Output:

```cpp
6
```

Explanation:

* `arr[1]` → second row `{4,5,6}`
* `arr[1][2]` → third element of second row → `6`

---

# Structure of 2D Vector

For this vector:

```cpp
vector<vector<int>> arr = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
```

It looks like:

```text
Row 0 → 1 2 3
Row 1 → 4 5 6
Row 2 → 7 8 9
```

---

# Creating Empty 2D Vector

```cpp
vector<vector<int>> arr;
```

Initially it contains no rows.

---

# Creating Fixed Size 2D Vector

## Syntax

```cpp
vector<vector<int>> arr(rows, vector<int>(cols));
```

Example:

```cpp
vector<vector<int>> arr(3, vector<int>(4));
```

Creates:

```text
3 rows
4 columns
```

All elements initialized with `0`.

Matrix:

```text
0 0 0 0
0 0 0 0
0 0 0 0
```

---

# Initialize with Specific Value

```cpp
vector<vector<int>> arr(3, vector<int>(4, 5));
```

Output:

```text
5 5 5 5
5 5 5 5
5 5 5 5
```

---

# Input in 2D Vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows = 3;
    int cols = 3;

    vector<vector<int>> arr(rows, vector<int>(cols));

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
```

---

# Taking Dynamic Size at Runtime

One major advantage over arrays:

```cpp
int rows, cols;
cin >> rows >> cols;

vector<vector<int>> arr(rows, vector<int>(cols));
```

Size decided during runtime.

---

# Important Functions

## 1. `size()`

### Number of rows

```cpp
arr.size()
```

### Number of columns

```cpp
arr[0].size()
```

Example:

```cpp
cout << arr.size();      // rows
cout << arr[0].size();   // cols
```

---

# Traversing 2D Vector

## Using Nested Loops

```cpp
for(int i = 0; i < arr.size(); i++)
{
    for(int j = 0; j < arr[i].size(); j++)
    {
        cout << arr[i][j] << " ";
    }

    cout << endl;
}
```

---

# Using Range-Based Loop

```cpp
for(auto row : arr)
{
    for(auto element : row)
    {
        cout << element << " ";
    }

    cout << endl;
}
```

---

# Jagged 2D Vector

Unlike arrays, each row can have different sizes.

Example:

```cpp
vector<vector<int>> arr = {
    {1,2},
    {3,4,5},
    {6,7,8,9}
};
```

This is called a **jagged vector**.

Output structure:

```text
1 2
3 4 5
6 7 8 9
```

This is not possible easily with normal 2D arrays.

---

# Adding Rows Dynamically

## `push_back()`

```cpp
vector<vector<int>> arr;

arr.push_back({1,2,3});
arr.push_back({4,5,6});
```

Now:

```text
1 2 3
4 5 6
```

---

# Adding Elements in Particular Row

```cpp
arr[0].push_back(100);
```

Now first row becomes:

```text
1 2 3 100
```

---

# Memory Working of 2D Vector

A 2D vector is actually:

```text
vector
   ↓
vector
   ↓
elements
```

Each row is stored separately in memory.

So unlike arrays:

* Memory is not necessarily contiguous
* Rows can resize independently

---

# Difference Between 2D Array and 2D Vector

| Feature          | 2D Array   | 2D Vector     |
| ---------------- | ---------- | ------------- |
| Size             | Fixed      | Dynamic       |
| Runtime size     | Difficult  | Easy          |
| Memory           | Contiguous | Separate rows |
| Resize possible  | No         | Yes           |
| STL functions    | No         | Yes           |
| Jagged structure | No         | Yes           |

---

# When to Use 2D Vector

Use 2D vectors when:

* Matrix size is dynamic
* Number of rows/columns changes
* Need STL functions
* Competitive programming
* Graphs/grids problems

---


# Time Complexity

For a matrix of size `rows × cols`:

| Operation         | Complexity     |
| ----------------- | -------------- |
| Access            | O(1)           |
| Traversal         | O(rows × cols) |
| push_back row     | O(1) average   |
| push_back element | O(1) average   |

---

# Important Points

* 2D vector is a vector of vectors
* Supports dynamic memory
* Rows can have different sizes
* Access using `arr[i][j]`
* Use nested loops for traversal
* Better than arrays for flexible sizes
