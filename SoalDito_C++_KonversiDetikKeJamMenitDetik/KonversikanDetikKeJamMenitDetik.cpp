#include <iostream>

// Program ini mengonversikan detik ke jam, menit, detik : 

int main() {
    int jam, menit, detik;

    std::cout << "detik : ";
    std::cin >> detik;

    menit = detik / 60;
    detik = detik % 60; // cari detik yg gabisa dikonversikan ke menit.
    jam = menit / 60;
    menit = menit % 60; // cari menit yg gabisa dikonversikan ke jam.

    std::cout << jam << " jam " << menit << " menit " << detik << " detik.";

    return 0;
}