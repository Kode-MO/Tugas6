#include <iostream>
using namespace std;

long fungsirekursif(int f) //fungsi rekursif
{
    if (f == 0)
        return 1;
    else 
        return f * fungsirekursif(f - 1);
}
 
int main()
{
    int x;
    cout<<"Masukan Angka yang akan difaktorialkan : "; 
    cin>>x;

    cout << x <<"! = " << fungsirekursif(x) <<endl; // memanggil fungsi
    return 0;
 
}