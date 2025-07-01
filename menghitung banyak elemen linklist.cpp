#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menghitung jumlah node
int hitungElemen(Node* head) {
    int count = 0;
    Node* current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

// Fungsi untuk menambahkan node di awal
void tambahDepan(Node*& head, int dataBaru) {
    Node* nodeBaru = new Node;
    nodeBaru->data = dataBaru;
    nodeBaru->next = head;
    head = nodeBaru;
}

int main() {
    Node* head = NULL;

    // Menambahkan beberapa elemen
    tambahDepan(head, 10);
    tambahDepan(head, 20);
    tambahDepan(head, 30);

    // Hitung elemen
    int jumlah = hitungElemen(head);
    cout << "Jumlah elemen dalam linked list: " << jumlah << endl;

    return 0;
}

