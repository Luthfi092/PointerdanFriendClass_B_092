#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: // akses modifier
    int panjang, lebar;

    public:

    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;
    }

    int luasPp(int a, int b)
    {
        return a * b;
    }

    Lingkaran ol;

};

class Lingkaran
{
    public:
    int jarijari;

    void input()
    {
    cout << "Masukkan jari-jari: ";
    cin >> jarijari; 
    }

    int luasLingkaran(int r)
    {
        return 3.14 * r * r;
    }
};


int main()
{
    PersegiPanjang objekPP; // membuat objek 
    Lingkaran ol;

    cout << "Masukan Panjang : ";
    cin >> objekPP.panjang;
    cout << "Masukan Lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas Persegi Panjang : " << 
    objekPP.luasPp(objekPP.panjang, objekPP.lebar) << endl;

}







#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = "<<nim<<endl;
    }
};

int main (){
    mahasiswa mhs{1}; //Object mhs
    mhs.showNim(); //Member Access Operator

    mahasiswa &refMhs = mhs; //Pointer Reference refMhs
    refMhs.nim = 2; //Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer dereference pMhs
    pMhs->nim = 3; // Arrow Operator
    pMhs->showNim();
    return 0;
}