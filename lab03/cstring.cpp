#include <iostream>
#include <string>

using namespace std;

int main(){

	char arr [8] = {'a', 'p','\0', 't', 'a','t','o', '\0'};
	cout << arr << endl;
	cout << *arr << endl;
	cout << &arr[0] << endl;
	cout << arr + 3 << endl;

	const char * const lmao = "here2";
	//lmao += 3;
	cout << lmao << endl;

	string cheese = "here";
	cout << cheese[3] << endl;

	const char * lol = cheese.c_str();
	cout << lol << endl;


	return 0;
}
