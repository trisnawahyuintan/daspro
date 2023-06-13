#include <fstream>
#include <iostream>
using namespace std;

int main(){
    string baris;

    //membuka file dalam mode menulis
    ofstream tulisfile;
    //menunjuk ke sebuah nama file
    tulisfile.open("contohfile.txt");

    cout<<">=menulis file ,untuk keluar ketik huruf q"<<endl;

    //unlimited loop untuk menulis
    while(true){
        cout<<"-";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin,baris);
        //loop akan berhenti jika anda memasukkan karakter q
        if(baris == "q")break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        tulisfile<<baris<<endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    tulisfile.close();

    //membuka file dalam mode baca
    ifstream bacafile;
    //menunjuk ke sebuah file
    bacafile.open("contohfile.txt");

    cout<<endl<<">=membuka dan membaca file "<<endl;
    //jika file ada maka
    if (bacafile.is_open())
    {
        //melakukan perulangan setiap baris
        while (getline (bacafile,baris))
        {
            //dan tampilkan disini
            cout<<baris<<'\n';

        }
        //tutup file setelah selesai
        bacafile.close();

    }
   else cout<<"tidak dapat membuka file";

   system("pause");
   return 0;
    
}