#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3, 14 * r * r;
}

float segitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float nilai[10];
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;
    while (menu == true)
    {
        cout << "\n\n==========";
        cout << "\n M E N U";
        cout << "\n============";
        cout << "\n 1. Luas persegi panjang";
        cout << "\n 2. Luas lingkaran";
        cout << "\n 3. Luas segitiga";
        cout << "\n 4. Array";
        cout << "\n 5. Keluar";
        cout << "\n pilihan (1/2/3/4/5) : ";
        cin >> pilihan;


        switch (pilihan)
        {
        case 1:
            cout << "masukan panjang =";
            cin >> panjang;
            cout << "Masukan Lebarnya";
            cin >> lebar;
            cout << "\n luas persegi panjang = " << persegipanjang(panjang, lebar);
            break;
        case 2:
            cout << "masukan jari-jari =";
            cin >> jejari;
            cout << "\n luas Lingkaran = " << lingkaran(jejari);
            break;
        case 3:
            cout << "Masukan Alas";
            cin >> alas;
            cout << "Masukan Tinggi";
            cin >> tinggi;
            cout << "\n Luas segitiga = " << segitiga(alas, tinggi);
            break;
        case 4:
            cout << "Mengisi Array\n";
            for (int i = 0; i < 10; i++) {
                cout << "nilai ke-" << (i + i) << "; ";
                cin >> nilai[i];
            }
            cout << "membaca isi Array\n";
            for (int i = 0; 10; i++) {
                cout << "\nNilai ke-" << (i + i) << "; " << nilai[i];
            }
             break;
        case 5:
            menu = false;
        default:
            cout << "Pilihan Salah !!";
            break;
            
        }
    }
}




