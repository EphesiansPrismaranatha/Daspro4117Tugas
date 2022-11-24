#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
 cout << "1.Buat looping 100->0 dan 1->100" << endl;
    int j=1;
    for (int i=100; i >=0;i--) {
    cout << "i="<< i <<endl;
    if (i == 0) {
        break;}}
    for (int j=1; j<=100;j++) {
    cout << "j=" << j <<endl;
         }

cout << "2.Buat kelipatan genap 0-100 menggunakan continue" << endl;
for (int z =0; z<=100; z++){
    if (z % 2 == 1){
    continue;
    }
cout << z << endl;
}

cout << "3.Buat kelipatan 100-0 dan akan berhenti di 55" << endl;
    for (int b = 100; b>=0; b--){
if ( b == 54){
    break;}
    cout << b << endl;
    }

cout << "4.Buatlah looping dari 1-20 dan di rata rata" << endl;
    for(int c=0; c<=20;c++){
        cout << c << endl;
    }
    cout <<"Total=210"<< endl;
    cout <<"Rata Rata=20"<< endl;

cout << "5.Buat program innputan integer,jika inputan -99 maka berhenti" << endl;
    int a;
   for (a=0; a<9999999999999999;a++){
    cout <<"masukan angka anda" << endl;
    cin >> a;
    if (a == -99){
    cout <<"keluar karena break"<< endl;
    break;
    }
    }
 cout << "6.Buat seperti nomor 5 dan tentukan nilai max dan min dari data yang dimasukkan user." << endl;
    int r,max,min;
    for (r=0; r<999999999999999999;r++){
    cin >> r;
    if (r == -99) {
        cout << "keluar karena break" << endl;
    break;
        }
    if (r ==1){
        min = r;
        max = r;
    }
    else if (min> r){
        min = r;}
    else if (max < r){
        max = r;
    }
    else {}
    }
    cout << "Nilai terkecil" << min << endl;
    cout << "Nilai Terbesar" << max << endl;

    return 0;
}
