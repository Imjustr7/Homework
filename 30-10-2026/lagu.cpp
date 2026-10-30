#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> lagu = {"Bruno Mars", "Ed Sheeran"};
    cout << "Lagu: ";
    lagu.insert(lagu.begin() + 1, "Katy Perry");
    lagu.push_back("One direction");
    for (string l : lagu) {
        cout << l << " ";
    }
    cout << endl;
    lagu.erase(lagu.begin());
    cout << "hasil akhir: ";
    for (string l : lagu) {
        cout << l << " ";
    }
    cout << endl;
}