#include <iostream>
using namespace std;

int main()
{
    int skor;

    cout << "Masukkan skor mahasiswa (0-100): ";
    cin >> skor;

    if (skor >= 90 && skor <= 100)
    {
        if (skor == 100)
        {
            cout << "Skor Sempurna!" << endl;
        }
        cout << "Nilai: A" << endl;
    }
    else if (skor >= 80)
    {
        cout << "Nilai: B" << endl;
    }
    else if (skor >= 70)
    {
        cout << "Nilai: C" << endl;
    }
    else if (skor >= 60)
    {
        cout << "Nilai: D" << endl;
    }
    else if (skor >= 0 && skor < 60)
    {
        cout << "Sayang Sekali Nilai yang kamu inputkan tidak masuk pada kriteria" << endl;
    }
    else
    {
        cout << "Sayang Sekali Nilai yang kamu inputkan tidak masuk pada kriteria" << endl;
    }

    return 0;
}