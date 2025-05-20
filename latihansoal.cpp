// Buatlah program c++ dengan class Barng yang memiliki atribut : namaBarang,
// KodeBarag
// program memiliki constructor berparameter
// untuk mengisi nilai namaBarang dan kodeBarang.
// serta memiliki fungsi untuk menampilkan informasi Barang.

#include <iostream>
#include <string>
using namespace std;

class Barang {
    private:
        string namaBarang;
        string kodeBarang;

     public:
    
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;

        void tampilkanInfo() {
            cout << "Nama Barang : " << namaBarang << endl;
            cout << "Kode Barang : " << kodeBarang << endl;
        }
    
    }

    
}; 


