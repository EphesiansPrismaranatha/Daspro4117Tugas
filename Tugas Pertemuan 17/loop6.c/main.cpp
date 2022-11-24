#include <iostream>

using namespace std;

int main()
{
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
    cout << "Nilai terkecil " << min << endl;
    cout << "Nilai Terbesar " << max << endl;

    return 0;
}
