#include <iostream>
using namespace std;

int s(int n);

int main()
{
    int n, y = 0, x = 2;
    cout << "Masukkan N = "; cin >> n; /* deret pertama akan dimulai dari 2 dan deret selanjutnya berkelipatan 2 
                                            Jika diketik N = 5 maka deret S akan dimulai dari 2 hingga 5 kali dengan berkelipatan 2*/
    cout << "deret S = ";
    for (x; x<=2*n; x+=2)
    {
        if (x<2*n) // Ini untuk Menampilkan urutan Deretan
            cout << x << " + ";
            else
            {
                cout << x;
                y = y+x;
            }
            
    }
    cout << "\nJumlah deret tersebut : " << s(n); // Memanggil Fungsi
    
} 

int s(int n) // Fungsi untuk menghitung bilangan Deretan yang tambil
{   
    if (n == 1)
    return (2);
    else
    {   
        return (2*n + s(n-1));
    }
}
