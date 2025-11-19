#include <iostream>
using namespace std;

int main()
{
    double harga, diskon, JumlahDiskon, hargaSetelahDiskon;
 cout << "Masukkan :" << endl;
 cout << "harga barang (Rp) = ";
 cin >> harga;
 
 cout << "Diskon barang (%) = ";
 cin >> diskon;

 JumlahDiskon = harga * (diskon/100);

cout << "\n hasil : " << endl;
cout << "JUmlah Diskon      = RP "  << JumlahDiskon << endl;

 return 0;
}