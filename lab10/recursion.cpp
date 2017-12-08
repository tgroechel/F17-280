#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;


int print_stuff(int num){
	cout << num << endl;
	if(num <= 0){
		return 1;
	}
	int hold = print_stuff(num - 1);
	cout << hold << hold2 << endl;
	return hold + 1;
}

int main() {

	cout << print_stuff(3) << endl;

}
