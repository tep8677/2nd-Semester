#include <iostream>

using namespace std;

template <class xType>
xType sum(xType a,xType b){
	return a+b;
};

template <class xType>
xType sub(xType a,xType b){
	return a-b;
};

template <class xType>
xType mul(xType a,xType b){
	return a*b;
};

template <class xType>
xType div(xType a,xType b){
	return a/b;
};

template <class xType>
void show(xType a){
	cout << a << endl;
}

template <class xType> ///2
void show(xType a,xType b){
	cout << a << " and " << b << endl;
}

template <class xType,class yType> ///3
void show(xType a,yType b){
	cout << a << " and " << b << endl;
}
