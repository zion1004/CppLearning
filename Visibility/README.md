# Visibility

Learnt about the private, protected, and public keywords and their uses... (In the context of Classes).

### Private
Only visible/accessible within its own class (except when friend)
### Protected
Like private but Classes that inherit said class can also access protected variables/functions
### Public
Can be accessed anywhere

```cpp
#include <iostream>
#define print(x) std::cout << x << std::endl;

class Entity {
public:
  int publicInt = 1;
protected:
  int protectedInt = 2;
private:
  int privateInt = 3;
};

class Player : public Entity {
public:
  void PublicInt(){
    print(publicInt); //works 
  }
  void ProtectedInt(){
    print(protectedInt); // also works
  }
  void PrivateInt(){
    print(privateInt); // doesn't work
  }
};

int main(){
  Entity e;
  e.publicInt = 12; // works
  e.protectedInt = 12; //doesn't work
  e.privateInt = 12; // also doesn't work

  Player p;
  p.PublicInt();
  p.ProtectedInt();
  p.PrivateInt();
}
