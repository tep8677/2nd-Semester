#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class Coordinates{
	public:
		int x;
		int y;
		
		Coordinates(int x,int y): x(x),y(y){}
		
		Coordinates(const Coordinates& objRef){
			this->x=objRef.x;
			this->y=objRef.y;
			}
		
		Coordinates operator+(const Coordinates& objectReference){
			Coordinates tempObj(0,0);
			
			tempObj.x=this->x+objectReference.x;
			tempObj.y=this->y+objectReference.y;
			
			return tempObj;
		}
	
};


int main(){
	
	Coordinates Greece(40,20);
	Coordinates England(33,45);
	
	Coordinates Calculate( Greece+England );
	
	cout << Calculate.x << "," << Calculate.y << endl;
	
	return 0;	
}
