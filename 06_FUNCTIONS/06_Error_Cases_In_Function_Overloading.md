#   Error Cases In Function Overloading

### Case 1: NAME of FUNCTION, NUMBER of PARAMETERS and RETURN TYPE are "SAME".

```cpp
void add(int a, int b)
{
    cout << a + b << endl;
}

void add(int a, int b)
{
    cout << a + b << endl;
}

int main()
{
    add(5, 8);
    add(50, 60);

    return 0;
}
```

- As, the NAME of the FUNCTION is "SAME" ie "add", and it's NUMBER of PARAMETERS are also "SAME", but the RETURN TYPE of the both the function is DIFFERENT.  
- So, this will give ERROR  --> as both functions Have SAME NUMBER of PARAMETERS. This is "NOT ALLOWED" in C++.


### Case 2: NAME of FUNCTION and NUMBER of PARAMETERS both are "SAME", but the RETURN TYPE is DIFFERENT.

```cpp
void add(int a, int b)
{
    cout << a + b << endl;
}

int add(int a, int b)
{
    cout << a << endl;
    return a;
}

int main()
{
    add(5, 8);
    add(50, 60);

    return 0;
}
```

- Here, the NAME of the FUNCTION is "SAME" ie "add", and it's NUMBER of PARAMETERS are also "SAME", but the RETURN TYPE of the both the function is DIFFERENT.
- So, this will give ERROR  --> as both functions Have SAME NUMBER of PARAMETERS. This is "NOT ALLOWED" in C++.


> Function Overloading simply means SAME FUNCTION NAME with DIFFERENT NUMBER of PARAMETERS or DIFFERENT TYPES of PARAMETERS.