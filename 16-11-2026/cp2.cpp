#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};

    // 1. Cari apakah "Keyboard" ada di dalam daftar
    auto it = find(produk.begin(), produk.end(), "Keyboard");

    if (it != produk.end()) {
        cout << "\"Keyboard\" ada wok." << endl;
    } else {
        cout << "\"Keyboard\" abess." << endl;
    }

    // 2. Filter nama produk yang panjangnya > 5 karakter
    vector<string> hasilFilter;
    for (const string& item : produk) {
        if (item.length() > 5) {
            hasilFilter.push_back(item);
        }
    }

    cout << "Nama produk yang panjangnya lebih dari 5 karakter:" << endl;
    for (const string& item : hasilFilter) {
        cout << item << endl;
    }

    return 0;
}