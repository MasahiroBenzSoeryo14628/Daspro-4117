#include <iostream>

using namespace std;

int main()
{
    cout << "Tugas DasPro Pertemuan 9" << endl;
    cout << "\nMasahiro Benz Soeryo \nA11.2022.14628 \n4117" << endl;

    cout << "\nAngka Kelipatan 5 \n" << endl;

    int a;
    a = 0;
    do {
        if (a % 5 == 0) {
            cout << a << endl;
        }
        a++;
    } while (a <= 40);

    return 0;
}
