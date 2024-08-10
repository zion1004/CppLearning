# References
Learn about references in c++. 

> note : think of reference as just like an alias.

### stuff to know about
since reference is, you know, a reference, when you declare it, you need to assign at that time what it references

re-referencing to somewhere else afterwards also doesn't work

```cpp
int i = 10;
int& iref = i;

iref = 12; // i would change to 12 since its a reference

// ============================

int i = 10;
int j = 25;
int& ref = i;
ref = j; // re-assigning a reference does not work in changing where it refers to...
/*
  when we declared ref, we said that it is a reference to i
  ref = j <- this code would not be changing ref to refer to j
  the line above is like this equivalent
  i = j;
  since ref refers to i
*/
```
