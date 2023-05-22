#include <iostream>

using namespace std;

template <class uknownType>
uknownType mult(uknownType a, uknownType b){
	return a*b;
};

int main(){
	
	cout << mult<int>(5,4)<<endl;
	
	cout << mult<float>(2.5,4)<<endl;
	return 0;
	
}
