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
    }

 
    void tampilkanInfo() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main() {
    
    Barang barang1("Hp kang dedi", "Barakmiliter01");
    Barang barang2("Laptop kang dedi", "GG23");

    
    barang1.tampilkanInfo();
    barang2.tampilkanInfo();

    return 0;
}


