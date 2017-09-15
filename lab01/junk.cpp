#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(7);

    for (unsigned int i = 0; i < v1.size(); i++) {
        cout << v1[i] << endl;
    }

    v1.clear();

    vector< vector<int> > potato;
    potato.push_back({2, 3, 4});
    potato.push_back({1,2});

    for (unsigned int i = 0; i < potato.size(); i++) {
        for (unsigned int j = 0; j < potato[i].size(); j++) {
            cout << potato.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}
