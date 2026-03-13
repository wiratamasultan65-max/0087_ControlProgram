#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int x;

    srand(time(0)); //Mengatur seed angka acak berdasarkan waktu saat ini
    x = rand() % 10; // Menghasilkan angka acak bulat antara 0 dan 9

    if (x == 5) //Menambahkan Logika untuk memeriksa apakah x sama dengan 5
    {           // Maka kita akan mengoreksi nilai x dengan menambahkan 1
                //Sehingga nilai x tidak lagi 5, tetapi menjadi 6
        x = x + 1;
        cout << "nilai x sudah dikoreksi menjadi : " << x << endl;
    }

    cout << "Bilangan yang diberikan = " << x;
}