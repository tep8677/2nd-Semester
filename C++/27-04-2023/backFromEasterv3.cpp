#include <iostream>

using namespace std;

namespace Pizza{
    class A{
        public:
        void print();
    };
};
namespace Ketchup{
    class A{
        public:
        void print();
    };
};


int main(){
    Pizza::A isA;
    Ketchup::A isB;
    isA.print();
    isB.print();
    return 0;
}

void Pizza::A::print(){
    cout << " I am A! " << endl;
};
void Ketchup::A::print(){
    cout << " I am B! " << endl;
};
