#include <iostream>

using namespace std;

class objectA{
    private:
        string name;
        int age;
    public:
        objectA(){
            name="George";
            age=15;
        };
        //we use frined since operator<< takes by default one argument?
        friend ostream& operator<<(ostream& os, const objectA& dir){
          os << dir.name << endl << dir.age << endl;
          return os;
        };

        void setAttr(string n,int a){
            name=n;
            age=a;
        };
};

int main(){

    objectA George;
    cout<<George;

    return 0;
};
