#include <iostream>
using namespace std;


void bar();
void removeSpaces(string&);
void optionBar();

void bar(){
    cout << "=======================" << endl;
}

void optionBar(){
    cout << "-----------------------" << endl;
}

void replaceChars(string& input,char charToReplace,char replaceWith){

    for(int i=0;i<input.length();i++){
       if(input[i]==charToReplace){
            input[i]=replaceWith;
       };
    };
};
