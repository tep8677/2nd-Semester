#include <iostream>

using namespace std;

int main(){
	
	int i=0;
	//while
	while (i<10){
		cout<<i<<endl;
		++i;
	}
	//last out => 9
	
	
	//do while
	
	//i==10
	
	do{
		cout<<i;
		i++;
	}while(i!=11);
	
	//==> outputs 10 and quits
	
	return 0;
}
