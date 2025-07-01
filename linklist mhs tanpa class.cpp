#include <iostream>
#include <string>
using namespace std;

// Struktur node untuk mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    int mid;
    int akhir;
    int nilaiAkhir;
    char nilaiHuruf;
    Mahasiswa* next;
};

// Fungsi untuk membuat node baru
Mahasiswa* buatNode(string nim, string nama, int mid, int akhir, int nilaiAkhir, char nilaiHuruf) {
    Mahasiswa* baru = new Mahasiswa;
    baru->nim = nim;
    baru->nama = nama;
    baru->mid = mid;
    baru->akhir = akhir;
    baru->nilaiAkhir = nilaiAkhir;
    baru->nilaiHuruf = nilaiHuruf;
    baru->next = NULL;
    return baru;
}

// Fungsi untuk menambahkan node di akhir
void tambahAkhir(Mahasiswa*& head, Mahasiswa* nodeBaru) {
    if (head == NULL) {
        head = nodeBaru;
    } else {
        Mahasiswa* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nodeBaru;
    }
}

// Fungsi untuk menampilkan semua data
void tampilkanData(Mahasiswa* head) {
    int no = 1;
    cout << "===============================================================\n";
    cout << "No\tNIM\t\tNama\t\t\tMid\tAkhir\tAkhir\tHuruf\n";
    cout << "  \t\t\t\t\t\tUjian\tUjian\tNilai\tHuruf\n";
    cout << "===============================================================\n";
    Mahasiswa* current = head;
    while (current != NULL) {
        cout << no << "\t" << current->nim << "\t" << current->nama;
        if (current->nama.length() < 16) cout << "\t";
        cout << "\t" << current->mid << "\t" << current->akhir << "\t" << current->nilaiAkhir << "\t" << current->nilaiHuruf << endl;
        current = current->next;
        no++;
    }
    cout << "===============================================================\n";
}

int main() {
    Mahasiswa* head = NULL;

    // Menambahkan data dari tabel
    tambahAkhir(head, buatNode("990510001", "Khoirul Anam", 80, 95, 90, 'A'));
    tambahAkhir(head, buatNode("990510002", "Siti Zulaiha", 45, 30, 35, 'D'));
    tambahAkhir(head, buatNode("990510003", "Nur Rohmah", 50, 50, 50, 'C'));
    tambahAkhir(head, buatNode("990510004", "Agus Muhammad", 90, 60, 70, 'B'));
    tambahAkhir(head, buatNode("990510005", "Nur Iskandar", 40, 10, 20, 'E'));

    // Menampilkan data
    tampilkanData(head);

    return 0;
}

