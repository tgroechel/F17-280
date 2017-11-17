#include <iostream>
#include <string>

using namespace std;

class A{
	int * arr;

public:
	A() : arr(new int[3]){
		for(int i = 0; i < 4; ++i){
			arr[i] = i;
		}
	}
};

int main(int argc, char ** argv) {
	A a1;
	cout << &a1 << endl;

    return 0;
}