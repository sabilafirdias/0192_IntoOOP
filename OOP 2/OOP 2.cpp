// OOP 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class bangunDatar {
    private:
        float panjang, lebar;
    public:
        float luas;

        void input() {
            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
            cout << "Masukkan Lebarnya = ";
            cin >> lebar;
        }

        float hitungLuas() {
            return panjang * lebar;
        }
};

int main()
{
    
}

