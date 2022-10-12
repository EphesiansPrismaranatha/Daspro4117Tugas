#include <iostream>

using namespace std;

int main()
{
    cout << "Masukkan Jurusan Anda ";
    int a;
    cin >> a;
    cout<< "Jurusan Anda adalah ";
    if(a == 1){
        cout << "Teknik Informatika";
    } else if (a == 2) {
        cout << "Sistem Informasi";
    } else if ( a == 3){
        cout << "Bahasa Inggris";
    }else{
        cout << "tidak diketahui";
    };


    //soal 1
    int b;
    cout << "\nMasukkan bilangan genap antara 25-50.Jika benar maka bilangan sesuai ";
    cin >> b;
    if (b % 2 == 0 && b>= 25 && b<= 50){
        cout << "bilangan sesuai";
    }else{
        cout << "bilangan tidak sesuai";
    }

    //soal 2
    int c;
    cout << "\nbilangan ganjil antara lebih dari 13 atau kurang dari 5 ";
    cin >> c;
    if ( (c % 2 ==1) && (c>= 13 || c<= 5)){
        cout << "bilangan sesuai";
    }else {
        cout << "bilangan tidak sesuai";
    }

    //soal 3
    int d;
    cout << "\nbilangan bulat antara 25-50 atau bilangan ganjil antara 3-15 ";
    cin >> d;
    if ((d >= 25 && d <= 50) || (d % 2 == 1 && d>=3 && d<=15)){
        cout << "bilangan sesuai";
    }else {
        cout << "bilangan tidak sesuai";
    }


    return 0;
}
