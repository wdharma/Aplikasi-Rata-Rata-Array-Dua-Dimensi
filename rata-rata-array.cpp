#include<iostream>
using namespace std;
int main() {
    char isinilai,pil;
    int total=0;
    int i,j,p,l,x,y,z;
    cout << "=========================" << endl;
    cout << "APLIKASI RATA-RATA DGN ARRAY " << endl;
    cout << "=========================" << endl;
    cout << "Nama   : I Wayan Dharmana"  << endl;
    cout << "NIM    : 150030432"  << endl;
    cout << "Kelas  : BB153"  << endl;
    cout << "=========================" << endl;
    do{
        // System meminta user untuk memasukan nilai p (panjang)
        cout<<"Masukkan panjang: ";
        cin>>p;
        // System meminta user untuk memasukan nilai l (lebar)
        cout<<"Masukkan lebar: ";
        cin>>l;
        // Mendefinisikan panjang dan lebar array berdasarkan input user
        int angka[p][l];
        for(i=0; i<p; i++) {
            total = 0;
            for(j=0; j<l; j++) {
                angka[i][j] = 0;
            }
        }
        isinilai='y';
        cout<<"Anda ingin mengisi nilai array? (Y/N)"  << endl;
        cin>>isinilai;
        while(isinilai=='y'){
            cout<<"Masukkan posisi x (0-" << p-1 << ") : ";
            cin>>x;
            cout<<"Masukkan posisi y (0-" << l-1 << ") : ";
            cin>>y;
            cout<<"Masukkan nilai di posisi " << x << "," << y << " : ";
            cin>>z;
            angka[x][y] = z;
            cout<<"Anda ingin mengisi nilai array? (Y/N)"  << endl;
            cin>>isinilai;
        }
        for(i=0; i<p; i++) {
            total = 0;
            for(j=0; j<l; j++) {
                total = total+angka[i][j];
            }
            cout << "----------------------------------" << endl;
            cout << "|| Rata-rata baris ke-" << i << ": " << (double) total / l  << endl;
        }
        cout << "----------------------------------" << endl;
        cout<<"Anda ingin melanjutkan? (Y/N)"  << endl;
        cin>>pil;
        cout << "----------------------------------" << endl;
    }
    while(pil=='Y' || pil=='y');
    return 0;
}
