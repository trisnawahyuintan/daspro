#include <iostream>
using namespace std;

int main() {
    int jml;

    cout << "Masukkan tinggi segitiga: ";
    cin >> jml;

    // Membuat persegi dengan tanda "-"
    for (int i = 1; i <= 2 * jml + 1; i++) {
        for (int j = 1; j <= 2 * jml + 1; j++) {
            // Menampilkan karakter "-" pada batas persegi
            if (i == 1 || i == 2 * jml + 1 || j == 1 || j == 2 * jml + 1) {
                cout << "-";
            } else {
                // Menampilkan segitiga di dalam persegi
                if (j <= jml + 1 - i || j >= jml + 1 + i) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
