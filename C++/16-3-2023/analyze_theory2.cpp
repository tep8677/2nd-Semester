#include <iostream>

using namespace std;

class newObject{
    private:
        int mikos;
        int platos;
        int emvadon;
    public:
        //Default constructor
        newObject(){
            mikos=5;
            platos=6;
        };
        
        //Manual constructor
        newObject(int x,int y){
            mikos=x;
            platos=y;
        };
        
        //Calculation method
        
        newObject Calculate(){
            emvadon=mikos*platos;
            return *this;
        };
        //we return the whole object as we will use it
        //as an object parameter inside the following constructor
        
        newObject(const newObject &referenceToObject){
            mikos=referenceToObject.mikos;
            platos=referenceToObject.platos;
            //we get them values set
            emvadon=mikos*platos;
        };
        void PrintObject(){
            cout<<"mikos: "<<mikos<<" emvadon:" <<emvadon <<endl;
        }
    
};

int main(){
    newObject defaultObject;
    newObject Square(5,5);
    
    Square.PrintObject(); //we get emvadon == 0 as it is null.
    
    newObject CalculatedSquare(Square.Calculate());
    //Square.Calculate() returns the Square Object after the calculation is done.
    //We could do Square.Calculate(); first
    //and then CalculatedSquare(Square);
    //and we would get the same result..
    //
    //But that's 1 step more efficient
    //and we also get to learn about more ways to do things..
    
    Square.PrintObject();//Square now has been calculated..
    CalculatedSquare.PrintObject();
    
    
    return 0;
};