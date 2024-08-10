# Control Flow
Learn about the control flow (continue, break, and return) and how they work in c++.

```cpp
void someFunction(){
  for (int i = 0; i < 10; i++){
    // some code A...
    if(i > 5){
      continue;
    }
    // some code B...
    // the continue keyword will stop the loop from proceeding and go to its next iteration
    // thus in this example once i is greater than 5, it will stop executing code below the if statement
    // but if there is still code above the if statement those will run as normal
  }

  for (int i = 0; i < 10; i++){
    // some code A...
    if(i > 5){
      break;
    }
    // some code B...
    // the break keyword will exit the current loop
    // thus in this example once i is greater than 5, it will break out of the current scope
    // so in a nested scope the parent scope will still proceed
    // but this scope will be broken out
  }

    for (int i = 0; i < 10; i++){
    // some code A...
    if(i > 5){
      return;
    }
    // some code B...
    // the return keyword will exit the current function
    // thus in this example once i is greater than 5, it will just return back to where the function was called
    // regardless of how many nested layers there are return will just exit out of the function entirely
  }
}
```
