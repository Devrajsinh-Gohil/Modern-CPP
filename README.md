# Modern-CPP

## Lambda Functions in cpp
- a nameless snippet function

- format`[capture clause](parameters){body}`

```c++
    vector<int> v{ 1,3,13,24,14,7};
    int d = 10;
    auto something = [d](int x){cout<<x+d<<endl;};
    for_each(v.begin(),v.end(),something);
    return 0;
```

OR

```c++
    vector<int> v{ 1,3,13,24,14,7};
    int d = 10;
    for_each(v.begin(),v.end(),[d](int x){cout<<x+d<<endl;});
    return 0;
```

- both will give same output.
---

## Data-types

### Dynamic typing in cpp

- we can create a dynamic varible to store various data types.

using `void*`

```c++
    int i = 1;
    float f = 3.14f;
    string s = "string";

    void* voidptr;
    voidptr = &i;
    cout << "int val: " <<  *(static_cast<int*>(voidptr)) << endl;

    voidptr = &f;
    cout << "float val: " <<  *(static_cast<float*>(voidptr)) << endl;

    voidptr = &s;
    cout << "string val: " <<  *(static_cast<string*>(voidptr)) << endl;
```

using `any` C++17

- class which represents a generalized type-safe container for single values of any type.

- add header file `#include<any>` 

```c++
    any anyval;

    anyval = 42;
    cout << "int value: " << any_cast<int>(anyval) << endl;

    anyval = 3.14;
    cout << "float value: " << any_cast<float>(anyval) << endl;

    anyval = "string";
    cout << "string value: " << any_cast<string>(anyval) << endl;
```

---

### Run-Time Type Identification (RTTI)

Run-Time Type Identification (RTTI) is a feature in C++ that allows you to obtain the type information of an object during program execution. This can be useful when using dynamic typing, where the type of an object can change at runtime.

There are two main mechanisms for RTTI in C++:

- `typeid` operator
- `dynamic_cast` operator