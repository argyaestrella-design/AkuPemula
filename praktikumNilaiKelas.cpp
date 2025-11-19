#include <iostream>
using namespace std;

int main() {
    double nilai;

    cout << "=== Program Penentuan Nilai Mutu ===\n\n";
    cout << "Masukkan nilai angka : ";
    cin >> nilai;

    cout << "\nHasil :\n";

    if (nilai >= 89 && nilai <= 100) {
        cout << "Nilai mutu : A" << endl;
    } 
    else if (nilai >= 80 && nilai <= 89) {
        cout << "Nilai mutu : B" << endl;
    } 
    else if (nilai >= 70 && nilai <= 79) {
        cout << "Nilai mutu : C" << endl;
    } 
    else if (nilai >= 60 && nilai <= 69) {
        cout << "Nilai mutu : D" << endl;
    } 
    else if (nilai >= 0 && nilai <= 60) {
        cout << "Nilai mutu : E" << endl;
    } 

    return 0;
}