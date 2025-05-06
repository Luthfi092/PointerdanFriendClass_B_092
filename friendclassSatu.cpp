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
