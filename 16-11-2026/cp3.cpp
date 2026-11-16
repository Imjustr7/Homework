#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data = {-3, 5, 0, -12, 8, 15, -1, 22};

    // 1. Cari apakah nilai 0 ada di dalam array
    auto it = find(data.begin(), data.end(), 0);

    if (it != data.end()) {
        int posisi = distance(data.begin(), it);
        cout << "Nilai 0 ada di dalam data, posisi index: " << posisi << endl;
    } else {
        cout << "Nilai 0 tidak ada di dalam data." << endl;
    }

    // 2. Filter hanya angka yang positif (> 0)
    vector<int> hasilFilter;
    copy_if(data.begin(), data.end(), back_inserter(hasilFilter),
            [](int x) { return x > 0; });

    cout << "Hasil filter (> 0): ";
    for (int x : hasilFilter) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}