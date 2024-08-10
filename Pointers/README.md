# Pointers
Learn about pointers in c++. Coming from a C background, so far it looks and behaves identically... so far

> note : Pointer is just an address.

```cpp
void* ptr = nullptr; //void pointer
int* iptr = nullptr; //integer pointer
// etc etc...

int i = 123; // your regular integer
iptr = &i; // & gets the address in memory of the variable i and assigns it to iptr
*iptr = 369; // *iptr is taking the address and "going" to it
// so by doing (*iptr = 369) we assign 369 to i since iptr is pointing to i

}
```
