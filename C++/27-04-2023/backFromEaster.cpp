#include <iostream>
#include <vector>

using namespace std;

class Animal{
    protected:
        int age;
    public:
        Animal(int);
        void showAge();
};

class Cat:public Animal{
    private:
        string name;
        vector<string> miceCaught;
    public:
        Cat(string,int);
        void showName();
        void meow();
        void catchMouse(string);
        void miceCaughtDisplay();
};

int main(){
    Cat Yukki("Yukki",2);
    Yukki.showAge();
    Yukki.showName();
    Yukki.meow();
    Yukki.catchMouse("John");
    Yukki.catchMouse("Leonardo");
    cout << "Yukki caught:" << endl;
    Yukki.miceCaughtDisplay();
    return 0;
}

Animal::Animal(int age){
    this->age=age;
}

void Animal::showAge(){
    cout << this->age << endl;
}

Cat::Cat(string name,int age):Animal(age){
    this->name=name;
}

void Cat::showName(){
    cout<<this->name<<endl;
};

void Cat::meow(){
    cout<<"Meow"<<endl;
};

void Cat::catchMouse(string mouseName){
   miceCaught.push_back(mouseName);  
};

void Cat::miceCaughtDisplay(){
    for (int i=0;i!=miceCaught.size();i++){
        cout << miceCaught[i] << endl;
    }
};
