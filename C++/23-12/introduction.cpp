#include <iostream>


int main () {
  using namespace std; //we tell our program to use identifiers from std 

  int x=20,y=40,sum=x+y;
  const float pi = 3.14;
  
  string greet = "hello";
  
  cout << x << '+' << y << '=' << sum << endl;


  printf ("%d + %d = %d",x,y,sum); // C code works but it's better to use new C++ ways of doing things.
  
  //returning
  return 0;
}

int main2 () {
  int x=20,y=80,sum=x+y;

  std::cout << x << '+' << y << '=' << sum << std::endl;
  
  return 0;
}