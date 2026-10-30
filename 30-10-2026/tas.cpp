#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> tas = {"Pedang Kayu", "Perisai Besi"};
    cout << "Tas: ";
    tas.insert(tas.begin(), "Potion Darah");
    tas.insert(tas.begin() + 2, "Busur Panah");
    for (string t : tas) {
        cout << t << " ";
    }
    cout << endl;
    tas.pop_back();
    cout << "hasil akhir: ";
    for (string t : tas) {
        cout << t << " ";
    }
    cout << endl;
}