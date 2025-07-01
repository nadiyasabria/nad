#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int nilai) {
        data = nilai;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Tambah data ke akhir linked list
    void tambahAkhir(int nilai) {
        Node* baru = new Node(nilai);
        if (head == NULL) {
            head = baru;
        } else {
            Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = baru;
        }
    }

    // Tampilkan semua data
    void tampilkan() {
        Node* temp = head;
        cout << "Data dalam linked list: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Hitung nilai tertinggi, terendah, dan rata-rata
    void analisisData() {
        if (head == NULL) {
            cout << "Linked list kosong!" << endl;
            return;
        }

        int max = head->data;
        int min = head->data;
        int total = 0;
        int count = 0;
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data > max) max = temp->data;
            if (temp->data < min) min = temp->data;
            total += temp->data;
            count++;
            temp = temp->next;
        }

        float rata2 = (float)total / count;

        cout << "Nilai tertinggi: " << max << endl;
        cout << "Nilai terendah : " << min << endl;
        cout << "Nilai rata-rata: " << rata2 << endl;
    }
};

int main() {
    LinkedList data;

    // Tambahkan beberapa data tidak terurut
    data.tambahAkhir(70);
    data.tambahAkhir(50);
    data.tambahAkhir(90);
    data.tambahAkhir(30);
    data.tambahAkhir(100);
    data.tambahAkhir(60);

    data.tampilkan();
    data.analisisData();

    return 0;
}

