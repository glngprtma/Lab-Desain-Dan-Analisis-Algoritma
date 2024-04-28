#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Book {
    string title;
    int rackNumber;
};

int binarySearch(vector<Book>& books, string& title) {
    int left = 0;
    int right = books.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (books[mid].title == title) {
            return books[mid].rackNumber;
        }
        else if (books[mid].title < title) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<Book> library = {
        {"Algoritma dan Pemrograman", 101},
        {"Basis Data", 102},
        {"Jaringan Komputer", 103},
        {"Struktur Data", 104},
        {"Pemrograman Berorientasi Objek", 105}
    };

    string searchTitle;
    cout << "Masukkan judul buku yang ingin dicari: ";
    getline(cin, searchTitle);

    int rackNumber = binarySearch(library, searchTitle);

    if (rackNumber != -1) {
        cout << "Buku dengan judul \"" << searchTitle << "\" berada di rak nomor " << rackNumber << "." << endl;
    } else {
        cout << "Buku dengan judul \"" << searchTitle << "\" tidak ditemukan." << endl;
    }

    return 0;
}
