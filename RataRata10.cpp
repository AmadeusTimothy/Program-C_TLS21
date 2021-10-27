#include <iostream>
using namespace std;

int main(){
    double Siswa, Total=0, RataRata, n;
    cout << "Masukan nilai 10 siswa\n";
    for(double Siswa = 1; Siswa < 11; Siswa+1){
        cout << "Siswa " << Siswa ++ << " : ";
        cin >> n;
        Total += n;
    }
    RataRata = Total/10;
    cout << "Rata-Rata 10 Siswa : " << RataRata;
}