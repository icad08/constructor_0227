#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    static int nim;

    public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim (int pNim) { nim = pNim}
    static int getNim() {return nim; }

    mahasiswa (string pnama){
        nama=pnama;
        setID();
    }
};
int mahasiswa::nim = 0;
void mahasiswa::setID(){
    id = ++nim;
}
    void mahasiswa::printAll();{
        cout << "Id = " << id << endl;
        cout << "nama = " << nama << endl;
        cout << endl;
    }
    
int main(){
    mahasiswa mhs1 ("ilam mellow");
    mahasiswa mhs2("dikauki");

    mahasiswa::setNim(227);
    mahasiswa mhs3("dhikacuki");
    mahasiswa mhs4 ("1qbal vario");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object =" << mahasiswa::getNim() << endl; 
}

