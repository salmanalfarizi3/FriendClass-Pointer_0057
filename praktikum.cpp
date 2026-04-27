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
        cout << "Masukkan Sisi Miring 1: "; cin >> s1;
        cout << "Masukkan Sisi Miring 2: "; cin >> s2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    void output() {
        cout << "Luas Layang-Layang: " << hitungLuas() << endl;
    }

    friend class BelahKetupat;
};

