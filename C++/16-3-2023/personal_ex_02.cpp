#include <iostream>

using namespace std;

class IDGenerator{
  private:
    int* idPtr;
  public:
    IDGenerator()
      :idPtr(new int(0)) //here we are telling it to 
      //set the value of the pointer to 0
      //before doing the default initialization
      //that way we save time as it doesn't initialize it
      //with no value
      {
        //and without then having us
        // need to change the value in here..
      }

    int* giveID(){
      (*idPtr)++; // == *idPtr=*idPtr+1
      return idPtr;
    }

    ~IDGenerator(){
      delete idPtr;
      cout << "Deleting pointer object..";
    }
};


class ObjectWitRankID{
  private:
    int id;
  public:
    ObjectWitRankID(int* num){
      id=*num;
    };
    void returnId(){
      cout << id << endl;
    };
};

int main(){

  IDGenerator creationRankID; 
  //We can create different IDs
  //for different Entry types
  //e.g. databases: Movie entry, user entry etc.
  ObjectWitRankID objectOne(creationRankID.giveID());
  ObjectWitRankID objectTwo(creationRankID.giveID());

  objectTwo.returnId();


  return 0;
};