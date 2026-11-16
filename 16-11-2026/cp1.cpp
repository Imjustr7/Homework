#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int data[] = {60, 85, 40, 90, 75, 50, 95};
    int n = sizeof(data) / sizeof(data[0]);

    // 1. Cari apakah 85 ada dan tampilkan index-nya
    auto it = find(data, data + n, 85);

    if (it != (data + n)) {
        int posisi = distance(data, it);
        cout << "Nilai 85 ada di dalam data, posisi index: " << posisi << endl;
    } else {
        cout << "Nilai 85 tidak ada di dalam data." << endl;
    }

    // 2. Ambil nilai yang termasuk kategori lulus (>= 75)
    vector<int> lulus;
    for (int i = 0; i < n; i++) {
        if (data[i] >= 75) {
            lulus.push_back(data[i]);
        }
    }

    cout << "Nilai yang termasuk kategori lulus: ";
    for (int x : lulus) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}