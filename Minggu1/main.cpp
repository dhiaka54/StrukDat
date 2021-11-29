#include <iostream>

using namespace std;

int main()
{
    //deklarasi tipe data variabel
    string nama,ttl,mafa,mifa,hobby,cita2,target;

    //proses input dan menyimpan data ke variabel
     cout << "======================== Program Perkenalan ========================" << endl;

    cout <<"Tuliskan nama: ";
    getline(cin,nama);

    cout <<"Tuliskan TTL: ";
    getline(cin,ttl);

    cout <<"Tuliskan makanan favorit: ";
    getline(cin,mafa);

    cout <<"Tuliskan minuman favorit: ";
    getline(cin,mifa);

    cout <<"Tuliskan hobby: ";
    getline(cin,hobby);

    cout <<"Tuliskan cita-cita: ";
    getline(cin,cita2);

    cout <<"Tuliskan target kuliah di UDINUS: ";
    getline(cin,target);

    //proses Output
    cout << "====================== Assalamu'alaikum wr wb ======================" << endl;
    cout << "Hallo Perkenalkan nama saya " << nama << "berikut ini data diri saya" << endl;
    cout << "Nama                       : " << nama << endl;
    cout << "TTL                        : " << ttl << endl;
    cout << "Makanan favorit            : " << mafa << endl;
    cout << "Minuman favorit            : " << mifa << endl;
    cout << "Hobby                      : " << hobby << endl;
    cout << "Cita - Cita                : " << cita2 << endl;
    cout << "Target kuliah di UDINUS    : " << target << endl;
    cout << "Salam kenal Pak Syaifur dan Salam kenal teman - teman" << endl;
    cout << "====================== Wassalamu'alaikum wr wb =====================" << endl;

    cout << "#Program ini dibuat oleh " << nama << endl;

    return 0;
}
