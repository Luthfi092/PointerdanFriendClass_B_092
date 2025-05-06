#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    string nama;

public:
    friend void setNama(mahasiswa &a, string);

};

void setNama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
  
}


int main()
{
    mahasiswa joko;
    setNama(joko, "kairi Kumar");
    return 0;
}











#include <iostream>
using namespace std;

class pelajar;
class manusia
{
    public:
        void showNilaiPelajar(pelajar &x);
      

};

class pelajar
{
private :
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaiPelajar(pelajar &x);
};

    void manusia::showNilaiPelajar(pelajar &x)
    {
        cout << x.nilai;

    }
int main ()
{
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajar(pbudi);
    return 0;
}