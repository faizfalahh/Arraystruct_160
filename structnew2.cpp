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
    orang mhs;
    cout << "nama : " ;
    cin >> mhs.nama;
    cout << "alamat desa : " ;
    cin >> mhs.alamat.desa;
    cout << "alamat kota : " ;
    cin >> mhs.alamat.kota;
    cout << "umur : " ;
    cin >> mhs.umur;
    cout << endl;
}