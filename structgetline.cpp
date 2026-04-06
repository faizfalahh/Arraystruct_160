#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    orang mhs[3];

    for (int i = 0; i <= 2; i++)
    {
        cout << "nama : " ;
        getline(cin, mhs[i].nama);
        cout << "alamat desa : " ;
        getline(cin, mhs[i].alamat.desa);
        cout << "alamat kota : " ;
        getline(cin, mhs[i].alamat.kota);
        cout << "umur : " ;
        cin >> mhs[i].umur;
        cout << endl;
        cin.ignore();
    }

    for (int i =0; i <= 2; i++)
    {
        // tampilkan
        cout << "data penduduk : " << endl;
        cout << "nama : " << mhs[i].nama << endl;

    }

}