#include <iostream>
using namespace std;

int main()
{
    int jml;

    cout << "Masukkan tinggi segitiga: ";
    cin >> jml;

    // Membuat segitiga sama sisi
    for (int i = 1; i <= jml; i++)
    {
        // Menambahkan spasi sebelum karakter pada setiap baris
        // for (int k = 1; k <= jml - i; k++)
        // {
        //     cout << "-";
        // }
        // Menampilkan karakter '*' pada setiap baris
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if(j<=jml-1)
            cout<<" ";
            else
            cout << "*";
        }
        for (int k = 1; k <= jml - i; k++)
        {
            cout << "-";
        }

        cout << endl;
    }

    system("pause");
    return 0;
}