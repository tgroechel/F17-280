#include <iostream>
#include <string>
#include <vector>

using namespace std;


int sum(vector<int>& nums) {
    int sum;
    for (int i = 0; i < 5; ++i){
    	sum += nums[i];
    	nums[i] = i;
    }
    return sum;
}

int main(int argc, char ** argv) {
	vector<int> v = {4, 5, 8};
	cout << sum(v) << endl;
    return 0;
}
