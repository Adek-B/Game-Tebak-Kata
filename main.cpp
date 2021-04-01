#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    string Kata;
    string AcakKata;
    string Jawaban;
    int i;
    int randIdx1, randIdx2;
    char tmpRand;
    Kata = "SEMARANG";
    char ulang = 'Y', pilih;
    AcakKata = Kata;
    for(i=0;i<Kata.size();i++){
        randIdx1 = rand() % Kata.size() + 0;
        randIdx2 = rand() % Kata.size() + 0;
        tmpRand = AcakKata[randIdx1];
        AcakKata[randIdx1] = AcakKata[randIdx2];
        AcakKata[randIdx2] = tmpRand;
    }
    while(ulang == 'Y'){
        cout << "Coba Susun Kata Dibawah Ini Menjadi Sebuah Nama Kota Yang Ada Di Jawa Tengah = " << endl;
        cout << "Kata = " << AcakKata << endl << endl;
        cout << "Jawabanmu = ";
        cin >> Jawaban;

        if(Jawaban == Kata){
            cout << "Selamat Jawabanmu Benar" << endl;
            cout << "Jawabannya Adalah = " << Kata << endl;
            ulang = 'N';
        }else{
            cout << "Jawabanmu Masih Salah " << endl;
            cout << "Mau Coba Lagi Y/N : ";
            cin >> pilih;

            if(pilih == 'N'){
                cout << "Jawabannya Adalah = "<< Kata << endl;
                ulang = 'N';
            }
        }
    }
    return 0;
}
