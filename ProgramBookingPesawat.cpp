#include <iostream>

using namespace std;

const int ROWS = 6;
const int COLS = 15;
char kursiAwal [COLS][ROWS] = {
{'X','X','*','*','*','*'}, // Baris 1
{'*','*','*','X','X','*'}, // Baris 2
{'*','*','X','X','*','*'}, // Baris 3
{'*','*','X','X','*','*'}, // Baris 4
{'*','*','*','*','*','*'}, // Baris 5
{'*','*','*','X','X','X'}, // Baris 6
{'*','*','X','*','*','*'}, // Baris 7
{'*','*','X','*','*','*'}, // Baris 8
{'X','X','*','*','*','X'}, // Baris 9
{'*','*','*','*','X','X'}, // Baris 10
{'*','*','X','X','*','*'}, // Baris 11
{'*','*','*','*','*','*'}, // Baris 12
{'*','*','*','*','X','X'}, // Baris 13
{'*','*','*','*','X','*'}, // Baris 14
{'X','X','X','*','X','*'}  // Baris 15
};


void displayKursi(){
    cout << "\n\nBooking kursi pesawat:\n" <<
            "X : sudah terisi\n" <<
            "* : belum terisi\n\n";
    cout << "         A   B   C   D   E   F\n";
for (int i = 0; i < COLS; i++){
    cout << "Baris" << i+1;
    if( i < 9 ){
        cout << " ";
    } cout << "|";
    for (int j = 0; j < ROWS; j++){
        cout << " " << kursiAwal[i][j] << " |";
        if ( j == 5){
            cout << endl;
            }
        }
    }   cout << endl;
}

  void bookSeat(int jenisKelas, int baris, char kolom) {
    int kolomKonversi;

    switch (kolom)
    {
    case 'A':
        kolomKonversi = 0;
        break;
    
    case 'B':
        kolomKonversi = 1;
        break;

    case 'C':
        kolomKonversi = 2;
        break;

    case 'D':
        kolomKonversi = 3;
        break;

    case 'E':
        kolomKonversi = 4;
        break;

    case 'F':
        kolomKonversi = 5;
        break;
    
    default:
        cout << "Kolom yang dimasukan tidak valid, masukan A-F." << endl;
        break;
    }

    if (kursiAwal[baris - 1][kolomKonversi] == '*') {
        kursiAwal[baris - 1][kolomKonversi] = 'X';
        cout << "Kursi telah berhasil dipesan!\n";
    } else {
        cout << "Kursi tidak bisa dipesan. Pilih kursi lain.\n";
    }
}


  bool validasiBaris(int jenisKelas, int baris){
    if (jenisKelas == 1 && baris <= 2) return true;
    if (jenisKelas == 2 && baris >= 3 && baris <= 5) return true;
    if (jenisKelas == 3 && baris >= 6 && baris <= 15) return true;
    return false;
    }

    int main(){
        int jenisKelas, baris;
        char kolom, lanjut;
        do {
            displayKursi();

            cout << "Masukan jenis kelas\n"
                    "Baris 1 - 2 = Utama\n"
                    "Baris 3 - 5 = Bisnis\n"
                    "Baris 6 - 15 = Ekonomi\n"
                    "(Utama = 1, Bisnis = 2, Ekonomi = 3) : ";
            cin >> jenisKelas;
            
            cout << "Masukan nomor baris 1 - 15 : ";
            cin >> baris;
            
            cout << "Masukan Kolom A - F : ";
            cin >> kolom;

            if(validasiBaris(jenisKelas, baris)){
                bookSeat(jenisKelas, baris, kolom);
            } else {
                cout << "Kelas yang dipilih tidak sesuai.\n";
            }

            cout << "Apakah ingin memesan kursi lainnya (y/n) : ";
            cin >> lanjut;
        } while (lanjut == 'Y' || lanjut == 'y');
        
        cout << "Program selesai";
    }
