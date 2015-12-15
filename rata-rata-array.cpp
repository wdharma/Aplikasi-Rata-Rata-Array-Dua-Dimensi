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
        // System meminta user utk memasukan panjang dan lebar dari array
        // Panjang (p) adalah bagian yang kesamping
        // Lebar (l) adalah bagian yang kebawah
        cout<<"Masukkan panjang: ";
        cin>>p;
        cout<<"Masukkan lebar: ";
        cin>>l;
        // Mendefinisikan panjang dan lebar array sesuai yang diinput user
        int angka[l][p];
        // Mengisi nilai array default dengan nol (0)
        for(i=0; i<l; i++) {
            total = 0;
            for(j=0; j<p; j++) {
                angka[i][j] = 0;
            }
        }
        isinilai='y';
        // Konfirmasi dari user untuk mengisi nilai
        cout<<"Anda ingin mengisi nilai array? (Y/N)"  << endl;
        cin>>isinilai;
        // Lakukan ini selama variabel isinilai adalah y
        while(isinilai=='y'){
            //  System meminta user utk memasukan posisi x (lebar)
            cout<<"Masukkan posisi x (0-" << p-1 << ") : ";
            cin>>x;
            //  System meminta user utk memasukan posisi y (panjang)
            cout<<"Masukkan posisi y (0-" << l-1 << ") : ";
            cin>>y;
            //  User memasukan nilai sesuai posisi yang diminta
            cout<<"Masukkan nilai di posisi " << x << "," << y << " : ";
            cin>>z;
            // Memberi nilai pada array sesuai posisi yang ditentukan
            angka[x][y] = z;
            // Konfirmasi isi nilai
            cout<<"Anda ingin mengisi nilai array? (Y/N)"  << endl;
            cin>>isinilai;
        }
        // FOR pada bagian ini utk menghitung dan menampilkan nilai rata-rata
        for(i=0; i<l; i++) {
            total = 0;
            for(j=0; j<p; j++) {
                // Mencari total
                // Total adalah total ditambah nilai array sesuai posisi yang sedang mendapat giliran looping
                total = total+angka[i][j];
            }
            cout << "----------------------------------" << endl;
            //  System meminta user utk memasukan posisi x (lebar)
            cout << "|| Rata-rata baris ke-" << i << ": " << (double) total / p  << endl;
        }
        cout << "----------------------------------" << endl;
        cout<<"Anda ingin melanjutkan? (Y/N)"  << endl;
        cin>>pil;
        cout << "----------------------------------" << endl;
    }
    while(pil=='Y' || pil=='y');
    return 0;
}
