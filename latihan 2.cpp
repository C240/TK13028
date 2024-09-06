#include <iostream>
#include <string>
using namespace std;

int main () {
int siswa, nilai,
    tidak_lulus = 0,
    perbaikan = 0,
    lulus = 0;

    cout << "Masukkan jumlah siswa : ";
    cin >> siswa;
    for ( int a = 1; a <= siswa; a++ ) {
    cout << "Masukkan nilai akhir siswa ke " << a << " : ";
    cin >> nilai;

    if ( nilai >= 70 ) {
        lulus++;
        
    } else if ( nilai > 50 && nilai < 70) {
        perbaikan++;
    
    } else if ( nilai <= 50 ) {
        tidak_lulus++;

    }

 }
    cout << "Jumlah Siswa Lulus           : " << lulus << endl;
    cout << "Jumlah Siswa Butuh Perbaikan : " << perbaikan << endl;
    cout << "Jumlah Siswa Tidak Lulus     : " << tidak_lulus << endl;
}
