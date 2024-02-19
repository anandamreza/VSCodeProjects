#include <iostream>

// Program ini menentukan apakah suatu bilangan merupakan subset genap, yakni 
// hasil dari penjumlahan 2 bilangan genap.

int main() {
    int num;

    std::cout << "Num : ";
    std::cin >> num;

    if(num % 2 == 0){
        std::cout << "Ya";
    } else {
        std::cout << "Tidak";
    }

}