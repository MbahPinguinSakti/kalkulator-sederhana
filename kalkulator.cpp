#include <iostream>
using namespace std;

int main () {

    char operasi;
    double angka1, angka2;

    cout << "masukan operasi (+,-,/,*): ";
    cin >> operasi;

    cout << "masukan angka pertama: ";
    cin >> angka1;

    cout << "masukan angka kedua: ";
    cin >> angka2;


    switch (operasi) {
        case '+': // untuk perjumlahan
            cout << angka1 << "+" << angka2 << "=" << angka1 + angka2; // code logikanya
            break;

        
        case '-': // untuk pengurangan
            cout << angka1 << "-" << angka2 << "=" << angka1 - angka2; // logika untuk pengurangan
            break;


        case '*': //code untuk perkalian
           cout << angka1 << "*" << angka2 << "=" << angka1 * angka2; // logika untuk perkalian
            break;

        case '/': // code untuk pembagian
            if (angka2 !=0)
                cout << angka1 << "/" << angka2 << "=" << angka1 / angka2; //logika pembagian
                else
                    cout << "error! pembagian dengan 0 tidak di izinkan";
            break;

        default:
            cout  << "error operator tidak valid";
                break;

    }



    return 0;

            
}