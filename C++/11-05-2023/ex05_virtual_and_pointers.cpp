
#include <iostream>

using namespace std;

class Shape{
	public:
		virtual float area(){ 
			//if this is not virtual
			//it won't be redefined
			//
			return 0;
		};
		
		virtual ~Shape(){
			
		};
};

class Rectangle:public Shape{
	private:
		int height;
		int width;
	public:
		Rectangle(int,int);
		float area();
};

class Circle:public Shape{
	private:
		int radius;
	public:
		Circle(int);
		float area();
};

int main(){


	//Circle shape1(6);
	
	Shape* shape1 = new Circle(7);
	Shape* shape2 = new Rectangle(5,4);
	
	cout << shape1->area() << endl;
	cout << shape2->area() << endl;
	
	
	delete shape1;
	delete shape2;
	
	return 0;
};



Rectangle::Rectangle(int height,int width){
		this->height=height;
		this->width=width;
}



float Rectangle::area(){
	return height*width;
	
}

Circle::Circle(int radius){
	this->radius=radius;
}


float Circle::area(){
	return radius*radius*3.14;
}


