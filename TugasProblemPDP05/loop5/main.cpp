#include <iostream>

using namespace std;

int main()
{
    cout << "Tugas Modul PDP-05" << endl;
    // Soal No. 5
    cout << "\nSoal No. 5\n" << endl;
    cout << "Program ini Akan Berhenti jika Anda Menginputkan Angka -99\n" << endl;
    int d;
    for(int i = 0;; i++){
        cout << "Masukkan Nilai Anda : ";
        cin >> d;
        if(d == -99){
            break;
        }
    }
    cout << "\nKeluar Karena Break" << endl;
    return 0;
}
