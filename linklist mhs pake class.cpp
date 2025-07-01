#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
public:
    string nim;
    string nama;
    int mid;
    int akhir;
    int nilaiAkhir;
    char nilaiHuruf;
    Mahasiswa* next;

    // Konstruktor
    Mahasiswa(string nim, string nama, int mid, int akhir, int nilaiAkhir, char nilaiHuruf) {
        this->nim = nim;
        this->nama = nama;
        this->mid = mid;
        this->akhir = akhir;
        this->nilaiAkhir = nilaiAkhir;
        this->nilaiHuruf = nilaiHuruf;
        this->next = NULL;
    }
};

class LinkedList {
private:
    Mahasiswa* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Tambah node di akhir
    void tambahAkhir(string nim, string nama, int mid, int akhir, int nilaiAkhir, char nilaiHuruf) {
        Mahasiswa* baru = new Mahasiswa(nim, nama, mid, akhir, nilaiAkhir, nilaiHuruf);
        if (head == NULL) {
            head = baru;
        } else {
            Mahasiswa* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = baru;
        }
    }

    // Tampilkan data
    void tampilkan() {
        Mahasiswa* temp = head;
        int no = 1;
        cout << "===============================================================\n";
        cout << "No\tNIM\t\tNama\t\t\tMid\tAkhir\tAkhir\tHuruf\n";
        cout << "  \t\t\t\t\t\tUjian\tUjian\tNilai\tHuruf\n";
        cout << "===============================================================\n";
        while (temp != NULL) {
            cout << no << "\t" << temp->nim << "\t" << temp->nama;
            if (temp->nama.length() < 16) cout << "\t";
            cout << "\t" << temp->mid << "\t" << temp->akhir << "\t" << temp->nilaiAkhir << "\t" << temp->nilaiHuruf << endl;
            temp = temp->next;
            no++;
        }
        cout << "===============================================================\n";
    }
};

int main() {
    LinkedList daftar;

    // Tambahkan data sesuai tabel
    daftar.tambahAkhir("990510001", "Khoirul Anam", 80, 95, 90, 'A');
    daftar.tambahAkhir("990510002", "Siti Zulaiha", 45, 30, 35, 'D');
    daftar.tambahAkhir("990510003", "Nur Rohmah", 50, 50, 50, 'C');
    daftar.tambahAkhir("990510004", "Agus Muhammad", 90, 60, 70, 'B');
    daftar.tambahAkhir("990510005", "Nur Iskandar", 40, 10, 20, 'E');

    // Tampilkan data
    daftar.tampilkan();

    return 0;
}

