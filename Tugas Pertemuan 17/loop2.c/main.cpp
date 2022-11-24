#include <iostream>

using namespace std;

int main()
{
    cout << "2.Buat kelipatan genap 0-100 menggunakan continue" << endl;
for (int z =0; z<=100; z++){
    if (z % 2 == 1){
    continue;
    }
cout << z << endl;
}
    return 0;
}
