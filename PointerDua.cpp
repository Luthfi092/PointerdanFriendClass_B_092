#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }
};

int main ()
{
    mahasiswa *mhs = new mahasiswa {1}; // pointer Object mhs
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}










#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang 
{
private:
    string nama;
public:
     void setNama(string pNama);
      friend class siswa; 
};

class siswa 
{
private:
    int id;
public:
    void setId(int pId);
    void displayAll(orang &a); 
};

void siswa::displayAll(orang &a) 
{
    cout << id << endl << a.nama ;
}
void orang::setNama(string pNama) 
{
    nama = pNama;
}
void siswa::setId(int pId) 
{
    id = pId;
}

