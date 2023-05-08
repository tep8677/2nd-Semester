#include <iostream>

using namespace std;

class coolObject{
	public:
		int x;
		int y;
		coolObject(){};
		coolObject(int a,int b):x(a),y(b){};
		coolObject operator+ (const coolObject&);//returns a Class, takes as a parameter a class
		coolObject operator- (const coolObject&);
		coolObject operator* (const coolObject&);
		coolObject add(const coolObject&);
};

coolObject coolObject::operator+(const coolObject& paramObj){
	
	coolObject tempObject;
	
	tempObject.y=x+paramObj.x;
	tempObject.y=y+paramObj.y;
	return tempObject;
};

coolObject coolObject::operator-(const coolObject& paramObj){
	
	coolObject tempObject;
	tempObject.x=x-paramObj.x;
	tempObject.y=y-paramObj.y;
	return tempObject;
};

coolObject coolObject::operator*(const coolObject& paramObj){
		
	coolObject tempObject; //x=UNDEFINED,y=UNDEFINED;
	tempObject.x=x*paramObj.x; //x of the object that calls the function - x of the param
	tempObject.y=x*paramObj.y;
	return tempObject;
};

coolObject coolObject::add(const coolObject& paramObj){
	
	coolObject tempObject;
	tempObject.x=x+paramObj.x;
	tempObject.y=y+paramObj.y;
	return tempObject;
};


int main(){
	coolObject pairA(5,3);
	coolObject pairB(2,7);
	coolObject newPair=pairA+pairB;
	cout << newPair.x << "," << newPair.y << endl;
	coolObject subPair=pairA-pairB;
	cout << subPair.x << "," << subPair.y << endl;
	
	coolObject mulPair=pairA*pairB;
	cout << mulPair.x << "," << mulPair.y << endl;
	
	coolObject addSimple=pairA.add(pairB);
	cout << addSimple.x << "," << addSimple.y << endl;
	
	return 0;	
}
