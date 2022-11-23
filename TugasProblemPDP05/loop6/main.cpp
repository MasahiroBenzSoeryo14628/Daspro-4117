#include <iostream>

using namespace std;

int main()
{
    cout << "Tugas Modul PDP-05" << endl;
    // Soal No. 6
    cout << "\nSoal No. 6\n" << endl;
    int f, maxx, minn;
    for(int i = 0;; i++){
        cin >> f;
        if(f > maxx){
            maxx = f;
        }
        if(f < minn && f != -99){
            minn = f;
        }
        if(f == -99){
            cout << "Max = " << maxx << endl;
            cout << "Min = " << minn << endl;
            break;
        }
    }
    return 0;
}
