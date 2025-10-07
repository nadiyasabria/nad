#include <iostream>
using namespace std;

class Bilangan {
private:
    int angka; 

public:
    
    Bilangan(int a = 0) {
        angka = a;
    }

    
    void input() {
        cout << "Masukkan bilangan (maksimal 5 digit): ";
        cin >> angka;
    }

   
    void tampilAsli() {
        cout << "Bilangan asli   : " << angka << endl;
    }

   
    void balikIteratif() {
        int temp = angka;
        int hasil = 0;

        while (temp != 0) {
            int sisa = temp % 10;    
            hasil = hasil * 10 + sisa; 
            temp /= 10;               
        }

        cout << "Hasil terbalik (Iteratif): " << hasil << endl;
    }

    
    int balikRekursif(int n, int hasil = 0) {
        if (n == 0)
            return hasil; 
        return balikRekursif(n / 10, hasil * 10 + (n % 10));
    }

    void tampilRekursif() {
        cout << "Hasil terbalik (Rekursif): " << balikRekursif(angka) << endl;
    }
};

int main() {
    Bilangan bil;     
    bil.input();      
    bil.tampilAsli(); 
    bil.balikIteratif(); 
    bil.tampilRekursif(); 

    return 0;
}

