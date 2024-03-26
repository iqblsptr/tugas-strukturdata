#include <iostream>
using namespace std;

int main()
{
    float lebar, tinggi, area, keliling;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;
    cout << "Masukkan tinggi persegi panjang: ";
    cin >> tinggi;

    area = lebar * tinggi;
    keliling = 2 * (lebar + tinggi);

    cout << "Luas persegi panjang adalah: " << area << endl;
    cout << "Keliling persegi panjang adalah: " << keliling << endl;

    return 0;
}