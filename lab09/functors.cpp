#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Is_Potato {
    string s;
public:
    Is_Potato(string s_in) : s(s_in) {}
    bool operator() (string am_I_potato){
    	return am_I_potato == s;
    }
};

int main() {
	Is_Potato predd("potato");
	std::vector<string> v(4, "potato");
	v[2] = "no potato";

	for(auto it = v.begin(); it != v.end(); ++it){
		if(!predd(*it)){
			cout << *it << endl;
		}
	}
}
