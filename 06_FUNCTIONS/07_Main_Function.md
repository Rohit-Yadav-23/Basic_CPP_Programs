#   main() Function

The `main()` function is the **starting point** of a C++ program.

When a program runs, execution always begins from `main()`.

---

# Simple Definition

`main()` is a special function where the program starts executing.

Without `main()`, a C++ program cannot run.

---

# Basic Syntax

```cpp 
int main()
{
    
}
```

---

# Example Program

```cpp 
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World";

    return 0;
}
```

### Output

```cpp 
Hello World
```

---

# How Execution Works

When you run the program:

1. Compiler creates executable file
2. Operating system starts the program
3. Execution enters `main()`
4. Statements inside `main()` run one by one
5. Program ends

---

# Meaning of `int main()`

```cpp 
int main()
```

* `int` → `main()` returns an integer value
* `main` → special function name

Usually:

```cpp 
return 0;
```

means:

* program executed successfully.

---

# Why `main()` is Necessary

The computer needs to know:

* where the program should begin.

`main()` provides that entry point.

Without it, the compiler gives an error.

---

# Different Forms of main()

## 1. Simple Form

```cpp 
int main()
{
    return 0;
}
```

---

## 2. With Command Line Arguments

```cpp 
int main(int argc, char* argv[])
{
    
}
```

Used to receive values from command line.

* `argc` → number of arguments
* `argv` → array of arguments

---

# Important Notes

* There can be many functions in a program,
* but there is only one `main()` function.
* Execution always starts from `main()`.
* Other functions are usually called from `main()`.

---

# Example with Another Function

```cpp 
#include <iostream>
using namespace std;

void greet()
{
    cout << "Welcome\n";
}

int main()
{
    greet();

    cout << "Inside main function";

    return 0;
}
```

### Output

```cpp 
Welcome
Inside main function
```

Here:

* Program starts from `main()`
* `main()` calls `greet()`

---

# Real-life Analogy

Think of `main()` as the **main gate** of a house.

No matter how many rooms exist inside:

* you always enter through the main gate first.
