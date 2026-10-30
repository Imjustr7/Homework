#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    
    vector<string> orang = {"Budi", "Siti"};
    cout << "Orang: ";
    orang.insert(orang.begin(), "Roni");
    orang.push_back("Dewi");
    for (string o : orang) {
        cout << o << " ";
    }
    cout << endl;
    orang.erase(orang.begin());
    cout << "hasil akhir: ";
    for (string o : orang) {
        cout << o << " ";
    }
    cout << endl;

}