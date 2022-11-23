#include <iostream>

using namespace std;

int main()
{
    cout << "Tugas Modul PDP-05" << endl;
    // Soal No. 2
    cout << "\nSoal No. 2\n" << endl;
    int a;
    for(a = 1; a <= 100; a++){
        if(a % 2 == 1){
            continue;
        }
        cout << "Nilai genap adalah " << a << endl;
    }
    return 0;
}
