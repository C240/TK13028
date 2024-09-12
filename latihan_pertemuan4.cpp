#include <iostream>
using namespace std;

bool akun() {
    string password, name;
    cout<<"Masukkan Username : ";
    cin>>name;

    cout<<"Masukkan Password : ";
    cin>>password;

    if ( name == "admin" && password == "admin") {
        cout<<"Selamat Datang "<<name<<endl;
        return true;
    } else {
        cout<<"Username atau Password salah"<<endl;
        return false;
            }
    }

void pilihan () {
    char menu;
    int hasil, angka1, angka2, angka3, i;
    cout<<"Pilih (1)Faktorial, (2)Penambahan, (3)Rata-rata "<<endl;
    cout<<"Pilih Menu : ";
    cin>>menu;

    switch (menu) {
        case '1' :
        cout<<"Masukkan nilai faktorial yang ingin di hitung : ";
        cin>>angka1;

        hasil = 1;
        for( i=1; i<=angka1; i++ ) {
            hasil = hasil * i;
        }
        cout<<angka1<<"! = "<<hasil<<endl;
        break;

        case '2' :
        cout<<"Masukkan 2 nilai yang ingin di tambahkan : "<<endl;
        cout<<"input nilai 1 : ";
        cin>>angka1;
        cout<<"input nilai 2 : ";
        cin>>angka2;

        hasil = angka1 + angka2;

        cout<<angka1<<" + "<<angka2<<" = "<<hasil<<endl;
        break;

        case '3' :
        cout<<"Masukkan 3 nilai yang dicari rata-rata nya : "<<endl;
         cout<<"input nilai 1 : ";
        cin>>angka1;
         cout<<"input nilai 2 : ";
        cin>>angka2;
         cout<<"input nilai 3 : ";
        cin>>angka3;

        hasil = ((angka1+angka2+angka3)/3);

        cout<<"Rata-rata nilai "<<angka1<<", "<<angka2<<", "<<angka3<<" adalah : "<<hasil<<endl;
        break;

        default :
        cout<<"Maaf, Format nilai tidak sesuai"<<endl;
        
    }
        cout<<"Terimakasih telah menggunakan aplikasi"<<endl;

    
}

int main() {
    char menu;
    bool login = akun();

   if(login) {
        pilihan();
   }
}