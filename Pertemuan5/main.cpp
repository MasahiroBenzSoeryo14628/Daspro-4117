#include <iostream>

using namespace std;

int main()
{
    cout << "Program Perhitungan Luas Lingkaran" << endl;
    cout << "\nMasahiro Benz Soeryo \nA11.2022.14628 \n4117 \n" << endl;

    float r;
    float pi;

    pi = 3.14;

    cout << "Masukkan Jari-jari Lingkaran: ";
    cin >> r;
    cout << "L = pi x r^2 \nL = " << pi * r * r << endl;
    cout << "Luas Lingkaran adalah = " << pi * r * r << endl;

    return 0;
}
