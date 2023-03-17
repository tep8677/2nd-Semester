#include <iostream>
#include <string>
using namespace std;

class newObject {

  private:
    float myNum1;
    float myNum2;
    string myString;
    float mo;

  public:

  //In case we don't use a constructor
  //we are setting the default values
    newObject(){
      myNum1=5;
      myNum2=6;
      myString= "Kostas";
    }

    //Using the constructor to give values
    newObject(int x, int z, string y){
      myNum1=x;
      myNum2=z;
      myString=y;
    }


    ///In case we use the constructor
    //and insert as a parameter an object
    newObject(const newObject &s){
      //const ensure that we don't modify the object
      //being copied

      //&s : & means 'as' //We make a REFERENCE
      //We don't pass the value.
      ///If we passed the value we would make another copy
      //=> inefficient
      //In short the constructor gets a parameter of type
      //newObject and we use it as s, by reference.
      myNum1=s.myNum1;
      myNum2=s.myNum2;
      mo=s.mo;
      myString=s.myString;
    }

    
    
    ///Notice the difference here
    //We write 2 identifiers
    //instead of 1
    //This is a method that 
    //has a return type of newObject
    newObject mesosoros(){
      mo=(myNum1+myNum2)/2;
      return *this; //returns the whole object

    }

  void Display(){
  cout<<mo<<endl<<myString<<endl;
  }
};

int main() {
 newObject k;
 newObject z(k.mesosoros());
 z.Display();
 return 0;
}