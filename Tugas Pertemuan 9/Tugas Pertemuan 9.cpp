#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout<<"Nama :Ephesians Prismaranatha \nNIM:A11.2022.14632"<<endl;

    cout<<"Materi Pertemuan 9"<<endl;
    int x;
    cout<<"Masukkan Bilangan Pertama Anda:";
    cin >> x;
    cout<< "Bilangan Pertama Anda adalah"<<x<<endl;

    if (x % 2 == 0) {
        cout<<"Bilangan Anda Genap"<<endl;
    }
    else {
        cout<<"Bilangan Anda Ganjil"<<endl;
    }

    switch (x) {
        case 1 :
            cout<<"Satu"<<endl;
            break;
        case 2 :
            cout<<"Dua"<<endl;
            break;
        case 3 :
            cout<<"Tiga"<<endl;
            break;
        case 4 :
            cout<<"Empat"<<endl;
            break;
        case 5 :
            cout<<"Lima"<<endl;
            break;
        default :
            cout<<"Undefined"<<endl;
            break;
    }
    cout<< "Masukkan Bilangan Kedua Anda:"<<endl;
    cin>>x;
    for (x = 0; x <= 10; x++) {
        cout<<"Itu adalah Bilangan Kedua Anda"<<endl;
    }
    x = 0;
    cout<<"Urutan bilangan dari yang terkecil sampai yang terbesar antara 0 dan 10 adalah";
    while (x <= 10) {
        cout << x;
        x++;
    }
    cout<<endl;

    x = 10;
    cout<<"Urutan Bilangan dari yang terbesar sampai yang terkecil kurang dari sama dengan 10 adalah";
    while (x >= 0) {
        cout << x;
        x--;
    }
    cout<<endl;
    cout<<endl;

    x = 0;
    cout<<"Bilangan kelipatan 3 kurang dari sama dengan 30 adalah "<<endl;
    do {
        if (x % 3 == 0)
        cout << x << endl;
        x++;
    }
    while (x <= 30);
    cout<<endl;
    cout<<endl;

    cout<<"Sebutkan Bilangan kelipatan 5 kurang dari sama dengan 50!"<<endl;
    int a = 0;
    do {
        if (a % 5 == 0 )
        cout<< a <<endl;
        a++;
    }
    while (a <= 50);
    cout<<endl;
    return 0;
}
