#include <iostream>

using namespace std;

class coolObject{
	public:
		int x;
		int y;
		coolObject(){};
		coolObject(int a,int b):x(a),y(b){};
		coolObject operator+ (const coolObject&);//returns a Class, takes as a parameter a class

};

coolObject coolObject::operator+(const coolObject& paramObj){
	
	coolObject tempObject;
	
	tempObject.y=x+paramObj.x;
	tempObject.y=y+paramObj.y;
	return tempObject;
};

int main(){
	coolObject pairA(5,3);
	coolObject pairB(2,7);
	coolObject newPair=pairA+pairB;
	cout << newPair.x << "," << newPair.y << endl;
	
	return 0;	
}
