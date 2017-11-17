#include <iostream>
#include <string>

using namespace std;

class A {
    int size;
    int * arr;

    void copy_arr(const int * source, int size_source) {
        size = size_source;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {

        }
    }

public:
    static int i;

    A() : size(3), arr(new int[size]) {
        for (int i = 0; i < size; ++i) {
            arr[i] = i;
        }
    }

    A(const A & rhs) {
        copy_arr(rhs.arr, rhs.size);
    }

    A& operator=(const A & rhs) {
        if (this != &rhs) {
            delete[] arr;
            copy_arr(rhs.arr, rhs.size);
        }
        return *this;
    }

    ~A() {
        delete[] arr;
    }

};

int A::i = 0;

int main(int argc, char ** argv) {
    A a1;
    A a2(a1);

    a1 = a2;
    a2 = a2;

    a1.i++;
    a2.i++;
    cout << a1.i << endl;


    return 0;
}