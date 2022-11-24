#include <iostream>

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
    cout << "j=" << j <<endl; }
    return 0;
}
