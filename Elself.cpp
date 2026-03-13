#include <iostream>
using namespace std;

float Rata_rata(float a, float b)   //Bertugas menerima dua nilai angka (nilBI dan nilMTK) dan menghitung rata-rata dari kedua nilai tersebut.
{
    return (a+b)/2;
}

string Status_lulus(float r) //Bertugas menerima hasil nilai rata-rata (r) dan menentukan apakah nilai tersebut memenuhi kriteria kelulusan atau tidak.
{
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

