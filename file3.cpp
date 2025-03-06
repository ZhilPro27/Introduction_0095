#include <iostream>
using namespace std;

float Panjang, Lebar;
void inputData() {
    cout << "Masukkan panjangnya = ";
    //accept nPanjang
    cin >> Panjang;
    //display 'Masukkan lebarnya = '
    cout << "Masukkan lebarnya = ";
    //accept nLebar
    cin >> Lebar;
}
float hitungLuas() {
    //compute nLuas = nPanjang * nLebar
    return Panjang * Lebar;
}
void outputData() {
    //display 'Luas persegi panjang = ' + nLuas
    //cout << "Luas persegi panjang = " << Luas;
}

void outputData2() {
    //display 'Luas persegi panjang = ' + nLuas
    cout << "Luas persegi panjang = " << hitungLuas();
}

int main()
{//begin 
    inputData();
    outputData2();
}//end