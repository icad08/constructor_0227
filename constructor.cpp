#include <iostream>
using namespace std;

class mahasiswa{
    public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printAll();

    mahasiswa (string pnama){
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 227;

void mahasiswa ::setID(){
    id = ++nim;
}
void mahasiswa ::printAll(){
    cout << "ID = " << id << endl;
    cout << "NAMA = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("faqih dunk");
    mahasiswa mhs2 ("junior ip13");
    mahasiswa mhs3 ("hapis samba");
    mahasiswa mhs4 ("panji tab samsung");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}