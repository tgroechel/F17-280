#include <iostream>
#include <vector>

using namespace std;

void print_vec(int * v) {
    for (int * ptr_i = v; ptr_i < v + 3; ++ptr_i) {
    	cout << *ptr_i << " ";
    }
    cout << endl;
}

void mess_func(int * ptr_v) {
    ptr_v[2] = 7;
}

int main() {

    // vector<int> dogcat = {1, 4, -3};
    // print_vec(dogcat);

    // vector<int> * ptr_v1 = &dogcat;

    // mess_func(ptr_v1);
    // print_vec(dogcat);

    int arr1 [3] = {1, 4, -3};
    cout << *                   arr1 << endl;
    mess_func(arr1);
    //print_vec(arr1);

    int *                  potato = arr1 + 9;
    potato++;

    cout << potato - arr1 << endl;









    return 0;
}
