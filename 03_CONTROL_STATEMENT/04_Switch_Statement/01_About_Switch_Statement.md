# Switch Statement

A **switch statement** in C++ is used when you want to check one variable against multiple possible values.

It is an alternative to writing many `if-else if` conditions.

---

## 🔹 Syntax

```cpp 
switch(expression) {

    case value1:
        // code
        break;

    case value2:
        // code
        break;

    case value3:
        // code
        break;

    default:
        // code if no case matches
}
```

---

## 🔹 Important Points

* `expression` is checked only once.
* `case` values must be constant values.
* `break` stops execution of the switch.
* `default` runs if no case matches.

---



## 🔹 Advantages

* Cleaner than long `if-else if`
* Faster readability
* Good for menu-driven programs

---

## 🔹 Limitations

* Works mainly with:

  * `int`
  * `char`

  * Cannot check ranges like:

  ```cpp
  marks > 90
  ```

---

## 🔹 Difference Between `if-else` and `switch`

| if-else               | switch                          |
| --------------------- | ------------------------------- |
| Can check conditions  | Checks exact values             |
| Can use ranges        | Cannot use ranges               |
| More flexible         | More readable for fixed options |
| Slower for many cases | Cleaner for menus/options       |
