#include <iostream>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2, s1, s2;

public:
    void input() {
        cout << "[Input Layang-Layang]\n";
        cout << "Masukkan Diagonal 1: "; cin >> d1;
        cout << "Masukkan Diagonal 2: "; cin >> d2;
