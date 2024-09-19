#include <iostream>
#include <string.h>

using namespace std;



string inputKalimat(){
   string kalimat;  

   cout << "Masukan kalimat ( lebih dari 3 kata) : ";
   getline(cin, kalimat);

   return kalimat;
}

char inputKarakter(){
    char karakter;

    cout << "Masukan karakter yang ingin dicari : ";
    cin >> karakter;

    return karakter;
}

int hitungJumlah (const string kalimat, char karakter){
    int jumlah = 0;
    for (char c : kalimat){
        if (tolower(c) == tolower(karakter)){
            jumlah++;
        }
    }
    return jumlah;
}

int hitungKata (const string kalimat){
    int jumlahSpasi = 0;
    for (char c : kalimat){
        if (c == ' '){
            jumlahSpasi++;
        }
    }
    return jumlahSpasi + 1;
}

string konversi(const string kalimat) {
    string hasil = kalimat;
    for (char c : hasil) {
        c = tolower(c);
    }
    return hasil;
}




int main(){
    
    string kalimat = inputKalimat();
    int jumlahKata = hitungKata(kalimat);
    if (jumlahKata < 3){
        cout << "Kalimat kurang dari 3 kata.";
        return 0;
    }
    char karakter = inputKarakter();
    int jumlahKarakter = hitungJumlah(kalimat, karakter);

    cout << "Jumlah kemunculan karakter '" << karakter << "' pada kalimat adalah : " << jumlahKarakter << endl;
    
    return 0;

}
