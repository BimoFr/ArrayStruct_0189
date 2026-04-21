#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string NIM;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Mahasiswa ke-" << (i + 1) << ":" << endl;
        cout << "Nomor Mahasiswa: ";
        getline(cin, mhs[i].NIM);
        cout << "Nama Mahasiswa: ";
        getline(cin, mhs[i].nama);
        cout << "Alamat Mahasiswa: " << endl;
        cout << "\t Nama Desa: ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota: ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa: ";
        cin >> mhs[i].umur;
    }

    cout << endl;
    cout << "\n NIM : " << mhs.NIM;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : ";
    cout << "\nDesa : " << mhs.alamat.desa;
    cout << "\nKota : " << mhs.alamat.kota;
    cout << "\n Umur : " << mhs.umur;

    return 0;
}
