#include<iostream>

using namespace std;

/*tugas menghitung suhu fahrenheit ke celcius*/

double celc (double);
float celc (float);
int celc (int);

double celc (double f1){
    return ((f1 - 32.0)*5/9);
}
float celc (float f2){
    return ((f2 - 32.0)*5/9);
}
int celc (int f3){
    return ((f3 - 32.0)*5/9);
}


int main(){
    double f1;
    float f2;
    int f3;

    cout << " +----------------------------------------------+ " << endl;
    cout << " | NAMA  : M.SUBHAKTI A MAULANA                 | " << endl;
    cout << " | KELAS : 1D                                   | " << endl;
    cout << " | PRODI : INFORMATIKA                          | " << endl;
    cout << " | TUGAS : 6 PRAKTIKUM ALPRO                    | " << endl;
    cout << " +----------------------------------------------+ " << endl;
    cout << endl;
 
    cout << " silahkan masukkan angka fahrenheit yang kamu mau (1): ";
    cin >> f1;
    cout << " Hasil menghitung konversi fahrenheit ke celc = " << celc (f1) << endl;
    cout << endl;

    cout << " silahkan masukkan angka fahrenheit yang kamu mau (2): ";
    cin >> f2;
    cout << " Hasil menghitung konversi fahrenheit ke celc = " << celc (f2) << endl;
    cout << endl;

    cout << " silahkan masukkan angka fahrenheit yang kamu mau (3): ";
    cin >> f3;
    cout << " Hasil menghitung konversi fahrenheit ke celc = " << celc (f3) << endl;
    cout << endl;

    return 0;
}