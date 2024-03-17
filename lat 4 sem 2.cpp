#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> arr;
    string temp;
    int i = 1;

    cout << "Pengimputan Buku\nKetik 'Exit' Jika Ingin Keluar Dari Penginputan\n";
    while (temp != "Exit") {
        cout << "Masukkan Nama Buku Ke-" << i << ": ";
        getline(cin, temp);
        if (temp != "Exit") {
            arr.push_back(temp);
            i++;
        }
    }

    sort(arr.begin(), arr.end());
    
    cout << "\nHasil Pengurutan Secara Menaik:\n";
    for (const string& x : arr) {
        cout << x << "\n";
    }

    return 0;
}
