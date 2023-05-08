#include <iostream>

using namespace std;

class A{
    public:
        void print();
};
class B{
    public:
        void print();
};
class C:public A, public B{
    public:
        void print();
};

int main(){
    // A A;
    // B B;
    C C;
    C.print();
    C.A::print();
    C.B::print();
    return 0;
}

void A::print(){
    cout << " I am A! " << endl;
};
void B::print(){
    cout << " I am B! " << endl;
};
void C::print(){
    cout << " I am C! " << endl;
};