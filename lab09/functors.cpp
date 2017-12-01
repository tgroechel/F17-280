#include <iostream>
using namespace std;

double * add(int a, int b){
	return new double(a+b);
}

double * sub(int a, int b){
	return new double(a-b);
}


int main(){
	double * (*varname)(int, int);
	varname = &add;
	double * first = varname(2, 2);

	varname = &sub;
	double * second = varname(2, 2);

	cout << *first << endl;
	cout << *second << endl;
}
