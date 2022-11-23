#include <iostream>

using namespace std;

int main()
{
    cout << "Tugas Modul PDP-05" << endl;
    // Soal No. 4
    cout << "\nSoal No. 4\n" << endl;
    float jumlah, rata;
    int c;
    for(c = 1; c <= 20; c++){
        jumlah = jumlah + c;
        rata = jumlah / c;
        cout << c << endl;
    }
    cout << endl;
    cout << "Jumlah    = " << jumlah << endl;
    cout << "Rata-rata = " << rata << endl;
    return 0;
}
