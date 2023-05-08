#include <iostream>
#include "myTemplate01.h"

using namespace std;



int main(){
	float x=sum<float>(3.2,9.54);
	show<int>(x);
	float y=mul<float>(3.1212,3);
	show<int>(x,y); ///2
	show<float,int>(x,y); ///3
};
