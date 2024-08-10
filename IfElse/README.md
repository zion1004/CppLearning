# Conditions and Branches
Learn how conditions and branching works in c++ and its corresponding syntax

```cpp
bool b1; 
bool b2;

//pretend some calculation and programming stuff happened and some things were done to b1 and b2
/* 
  code that did some stuff to b1 and b2...  
*/

if (b1) {
	// do something if condition is true...
}
else if (b2){
  // do something else if the condition above is false and condition for this branch is true
}
else {
  // do if all checks false
}
```

### Notes

 if (condition) is standalone
 
 else if can only be used after an if statement else if cannot be on its own
 
 else can only exist as the last chain of the ifelse statements
```cpp
// you cannot have an else in between if and else if chain
if (condition){
  // if the condition is true then code inside here will be executed
} else {
  // is not allowed for obvious reasons...
} else if {
  
}

if (condition) {
  // if the condition is true then code inside here will be executed
} else if (anotherCondition){
  // code here will be executed if condition is false and anotherCondition is true
  // else if can only exist after an if statement
  // you can chain multiple else if if necessary
} else {
  // will run if all conditions in the if-else chain is false
  // else block should be the last and can only have one of it
  // you can have only one else in a if-else chain  
}
