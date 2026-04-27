#include <iostream>
#include <cmath>
using namespace std;

// Deklarasi awal supaya class LayangLayang tahu BelahKetupat itu ada
class BelahKetupat;

class LayangLayang {
private:
    double d1, d2, sisiGajah, sisiSemut; // d1, d2 untuk luas. sisiGajah, sisiSemut untuk keliling

public:
    void inputData() {
        cout << "--- Input Layang-Layang ---" << endl;
        cout << "Masukkan d1: "; cin >> d1;
        cout << "Masukkan d2: "; cin >> d2;
        cout << "Masukkan sisi panjang: "; cin >> sisiGajah;
        cout << "Masukkan sisi pendek: "; cin >> sisiSemut;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    // Friend function untuk menghitung keliling (bisa diakses class lain)
    friend double hitungKelilingLL(LayangLayang l);
};

class BelahKetupat {
private:
    double d1, d2, sisi;

public:
    void inputData() {
        cout << "\n--- Input Belah Ketupat ---" << endl;
        cout << "Masukkan d1: "; cin >> d1;
        cout << "Masukkan d2: "; cin >> d2;
        cout << "Masukkan sisi: "; cin >> sisi;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    double hitungKeliling() {
        return 4 * sisi;
    }
};

// Isi dari friend function
double hitungKelilingLL(LayangLayang l) {
    return 2 * (l.sisiGajah + l.sisiSemut);
}

int main() {
    LayangLayang ll;
    BelahKetupat bk;

    ll.inputData();
    bk.inputData();

    cout << "\n=== HASIL ===" << endl;
    cout << "Luas Layang-Layang: " << ll.hitungLuas() << endl;
    cout << "Keliling Layang-Layang (via Friend): " << hitungKelilingLL(ll) << endl;
    
    cout << "Luas Belah Ketupat: " << bk.hitungLuas() << endl;
    cout << "Keliling Belah Ketupat: " << bk.hitungKeliling() << endl;

    return 0;
}