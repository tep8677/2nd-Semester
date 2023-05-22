#include <iostream>


class Shape{
	private:
		std::string name;
	public:
		virtual int getArea(){
			return 0;
		}
		
		virtual ~Shape(){}
};

class Rectangle:public Shape{
	private:
		int height;
		int width;
		
	public:
		Rectangle(int height,int width){
			this->height=height;
			this->width=width;
		}
		int getArea(){
			return height*width;
		}
	
};


int main(){
	
	Shape* square1= new Rectangle(5,4);
	std::cout << square1->getArea() << std::endl; 
	
	delete square1;
	
	return 0;
	
}
