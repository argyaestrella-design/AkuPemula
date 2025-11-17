#include<iostream>
#include<cmath>
using namespace std;

int main () 
{
    const double PI = 3.14159;

    double diameter_lingkaran = 10.0;
    double panjang_persegi = 5.0;
    double lebar_persegi = 1.5;
    double alas_segitiga = 4.0;
    double tinggi_segitiga = 2.5;

    double radius = diameter_lingkaran / 2.0;
    double luas_lingkaran = PI * radius * radius;

    double luas_persegi = panjang_persegi * lebar_persegi;

    double luas_segitiga = 0.5 * alas_segitiga * tinggi_segitiga;

    cout<<"PERHITUNGAN LUAS BANGUN DATAR" << endl;
    cout<<"Luas Lingkaran (diameter " << diameter_lingkaran << " cm): "<<luas_lingkaran << "cm^2" << endl;
    cout<<"Luas Persegi Panjang (" << panjang_persegi << " x " << lebar_persegi << "cm): " << luas_persegi << "cm^2" << endl;
    cout<<"Luas Segitiga (alas " << alas_segitiga << ", tinggi " << tinggi_segitiga << "cm): " << luas_segitiga << "cm^2" << endl;
    return 0;
}