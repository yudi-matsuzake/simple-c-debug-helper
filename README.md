Simple C++ Debug Helper
=======================

**MACRO FUNCTION TO_STRING (X)**


To do something like that:
```C++
DEBUG("i = " << i);
```

**MACRO FUNCTION DEBUG(X)**


call debug(string func, string msg) function, where:

func - name function

msg  - debug message

This MACRO calls the debug() with the macro __PRETTY_FUNCTION__ that returns the name of the function.
