#include <iostream>

using namespace std;

int main()
{
    cout << "Tugas DasPro Pertemuan 11" << endl;
    cout << "\nMasahiro Benz Soeryo \nA11.2022.14628 \n4117" << endl;

    cout << "\nDeret Fibonacci bilangan terbesar kurang dari 100 \n" << endl;

    int a = 1;
    int b = 1;
    int c = 0;

    cout << "Deret Fibonacci: " << a << ", " << b << ", ";

    c = a + b;

    while(c < 100){
        cout << c << ", ";
        a = b;
        b = c;
        c = a + b;
    }

    cout << "\n";

    return 0;
}
