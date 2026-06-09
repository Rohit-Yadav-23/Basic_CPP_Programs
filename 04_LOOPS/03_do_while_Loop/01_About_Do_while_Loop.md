#   do-while loop

A **do-while loop** in C++ is used to repeat a block of code again and again **until the condition becomes false**.

It is called an **exit-controlled loop** because the condition is checked **after** executing the loop body.

This means the loop body executes **at least one time**, even if the condition is false.

---

# 🔹 Syntax

```cpp 
do {
    // code
}
while(condition);
```

---

# 🔹 Working of Do-While Loop

1. Loop body executes first
2. Condition is checked
3. If condition is true → loop repeats
4. If condition is false → loop stops

---

# 🔹 Flow of Do-While Loop

```text 
Start
   ↓
Execute Code
   ↓
Check Condition
   ↓
True → Repeat
False → Stop
```

---


# 🔹 Important Difference from While Loop

### While Loop

Condition checked first.

```cpp
while(i <= 5)
```

---

### Do-While Loop

Condition checked later.

```cpp 
do {
   // code
} while(i <= 5);
```

---

# 🔹 Infinite Do-While Loop

```cpp 
do {
    cout << "Hello";
}
while(true);
```

This loop runs forever.

---

# 🔹 Important Points

### Semicolon is Necessary

Notice the semicolon after `while(condition)`.

```cpp 
while(condition);
```

Without it, program gives error.

---

# 🔹 Difference Between While and Do-While

| while loop              | do-while loop           |
| ----------------------- | ----------------------- |
| Condition checked first | Condition checked later |
| May execute 0 times     | Executes at least once  |
| Entry controlled        | Exit controlled         |

---

# 🔹 Formula to Remember

```cpp 
initialization;

do {
    statements;
    update;
}
while(condition);
```
