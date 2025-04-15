#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string namaPelanggan, jenisBensin;
    float totalLiter, totalHarga, hargaPerLiter;

    cout << "Masukkan nama pelanggan: ";
    getline(cin, namaPelanggan);
    cout << "Masukkan jenis bensin (pertalite/pertamax): ";
    getline(cin, jenisBensin);
    cout << "Masukkan total liter: ";
    cin >> totalLiter;

    if (jenisBensin == "pertalite") {
        hargaPerLiter = 7000;
    } else if (jenisBensin == "pertamax") {
        hargaPerLiter = 9000;
    } else {
       return 1;
    }

    totalHarga = totalLiter * hargaPerLiter;

    cout << fixed << setprecision(2);
    cout << "\n======= STRUK PEMBELIAN =======" << endl;
    cout << "Nama Pelanggan  : " << namaPelanggan << endl;
    cout << "Jenis Bensin   : " << jenisBensin << endl;
    cout << "Nama Pelanggan   : " << totalLiter << " liter" << endl;
    cout << "Total Harga    : Rp " << totalHarga << endl;
    cout << "================================" << endl;

    return 0;
}
