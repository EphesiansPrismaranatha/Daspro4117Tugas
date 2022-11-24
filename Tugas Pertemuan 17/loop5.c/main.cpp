#include <iostream>

using namespace std;

int main()
{
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
    return 0;
}
