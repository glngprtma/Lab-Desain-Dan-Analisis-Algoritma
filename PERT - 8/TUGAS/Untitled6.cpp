#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Fungsi untuk menampilkan menu
void displayMenu() {
    cout << "=== Menu Antrian Loket Tiket ===" << endl;
    cout << "1. Tambah orang ke antrian" << endl;
    cout << "2. Layani orang dari antrian" << endl;
    cout << "3. Tampilkan antrian" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih opsi: ";
}

// Fungsi untuk menampilkan antrian
void displayQueue(queue<string> q) {
    cout << "Antrian saat ini: ";
    if (q.empty()) {
        cout << "Kosong" << endl;
    } else {
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
}

int main() {
    queue<string> ticketQueue;
    int choice;
    string name;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama: ";
                cin >> name;
                ticketQueue.push(name);
                cout << name << " telah ditambahkan ke antrian." << endl;
                break;
            case 2:
                if (!ticketQueue.empty()) {
                    cout << ticketQueue.front() << " sedang dilayani." << endl;
                    ticketQueue.pop();
                } else {
                    cout << "Antrian kosong, tidak ada yang dapat dilayani." << endl;
                }
                break;
            case 3:
                displayQueue(ticketQueue);
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                return 0;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    }

    return 0;
}

