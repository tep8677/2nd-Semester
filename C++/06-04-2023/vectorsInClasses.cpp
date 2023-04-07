#include <iostream>
#include <vector>

using namespace std;

class NumberStore{
	private:
		vector<int> numVect;
		int* tempNum=new int;
	public:
		void numVectPush(int num){
			numVect.push_back(num);
		};
		int numGet(int i)const {
			return numVect.at(i);
		};
		void setNumbers(){
			for(int i=0;i<5;i++){
			
				cout << endl;
				cout << "Enter a number:" ;
				cin >> *tempNum;
				numVectPush(*tempNum);
				cout << i+1 <<": Your number is:" << *tempNum << endl;
			}
		};
		~NumberStore(){
			delete tempNum;
		};
};

int main(){
	
	
	
	cout << "Hello World!" << endl;
	cout << "It's a new day!" << endl;
	
	cout << "Enter q to stop" << endl;
	
	NumberStore NumberBaseA;

	NumberBaseA.setNumbers();
	
	cout << endl;
	
	int index;
	cout << "Which number of the first input do you want to add:";
	cin >> index;

	int sum;
	if(index<=5 && index>0){
		sum=NumberBaseA.numGet(index-1);
	};
	
	NumberStore NumberBaseB;
	NumberBaseB.setNumbers();
	
	cout << "Which number of the second input do you want to add:";
	cin >> index;
	
	if(index<=5 && index>0){
		sum=sum+NumberBaseB.numGet(index-1);
	};
	
	cout << "Their sum is: " << sum << endl;
	
	
	return 0;
}
