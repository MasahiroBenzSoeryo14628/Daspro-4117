#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x = 2000;

    cout << "Hello World! " << x << endl;

    /* comment */

    string nama;
    cout << "\nTuliskan Nama: ";
    cin >> nama;
    cout << "Hi " << nama;
    cout << " Selamat Datang!" << endl;

    int u = 18;
    float t = 174.5;
    char b = 'L';
    string c = "XL";

    cout << "\nUmur: " << u;
    cout << "\nTinggi: " << t;
    cout << "\nUkuran baju: " << b;
    cout << "\nUkuran celana: " << c;

    return 0;
}
