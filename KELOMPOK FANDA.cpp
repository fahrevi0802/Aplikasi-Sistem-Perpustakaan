#include<iostream>
#include<conio.h>
#include<cstring>
#include<windows.h>
#include<stdlib.h>
#include<sstream>
using namespace std;
//=====================================================================================
typedef struct
{
    int dd, mm, yy;
    int dd2, mm2, yy2;
    int dd3, mm3, yy3;
} Tanggal;
    int kode,tgl,ini,bulan,denda,pil,i,a,t,ttl, r,h1,h2,h3,x,p=50000, s=4000, v=3000;
    char ulang , buku,nom[50],nama[50];
    string dftr,kmb;
    string user, pass;
    void garis();
    void menu();
    void data ();
    void pnjm ();
    void buku1();
    void buku2();
    void buku3();
    void buku4();
    void buku5();
//=====================================================================================
main()
{
    system("color C0");
    garis ();
    cout<<endl<<endl;
    cout<<("\tSelamat Datang Di Perpustakan FANDA");
    cout<<endl<<endl;
    garis ();
    cout<<endl;
    cout<<"         Silahkan Login Terlebih Dahulu"<<endl;
    {i=1;
    do
    {
        cout<<endl;
        cout<<"Username     : ";
        cin>>user;
        cout<<"Password     : ";
        cin>>pass;
        cout<<endl;

            if ( user == "fanda" && pass == "12345")
            {
                garis ();
                cout<<"\n           Pilihan Menu \n"<<endl;
                garis();
                menu();
                return 0;
            } else
            {
                cout<<"\n   Maaf Username Atau Password Anda Salah"<<endl;
    i=i+1;
            }
    }
    while (i<=3);
    cout<<"     Silahkan Hubungi Pihak Terkait";
    }
    cout<<"a";
}
//==================================================================
void garis ()
{
    cout<<"========================================="<<endl;
}
//====================================================================
void menu ()
{
    system("cls");
    menu :
    Tanggal tgl;
    int total_hari1, total_hari2, total;
    cout<<"========================================="<<endl;
    cout<<"|                MENU UTAMA             |"<<endl;
    cout<<"|               PERPUSTAKAAN            |"<<endl;
    cout<<"|                   FANDA               |"<<endl;
    cout<<"========================================="<<endl;
    cout<<"|              1. Daftar Buku           |"<<endl;
    cout<<"|             2. Peminjaman Buku        |"<<endl;
    cout<<"|            3. Pengembalian Buku       |"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<endl;
    cout<<" Silahkan Masukkan Pilihan Anda :";
    cin>>pil;
    cout<<endl;
    garis();
    cout<<endl;
    system("cls");
    switch ( pil )
    {
        case 1 :
                cout<<"========================================="<<endl;
                cout<<"|     Daftar Buku Perpusatakan Fanda    |"<<endl;
                cout<<"========================================="<<endl;
                cout<<"|  Kode Buku  |         Nama Buku       |"<<endl;
                cout<<"========================================="<<endl;
                cout<<"|      1      |     Statistika Dasar    |"<<endl;
                cout<<"|      2      |       Fisika Dasar 1    |"<<endl;
                cout<<"|      3      |    Matematika Diskrit   |"<<endl;
                cout<<"|      4      |     Logika matematika   |"<<endl;
                cout<<"|      5      |         Pemograman      |"<<endl;
                cout<<"========================================="<<endl;
                cout<<endl;
                goto menu;
            break;
        case 2 :
            mulai :
            cout<<endl;
            cout<<"========================================="<<endl;
            cout<<"|    Peminjaman Buku Perpustakan Fanda  |"<<endl;
            cout<<"========================================="<<endl;
            cout<<" NIM             :";cin>>nom;
            cout<<endl;
            cout<<" Nama            : ";cin>>nama;
            cout<<endl;
            cout<<" Kode buku       : ";cin>>a;
            cout<<endl;
            switch (a)
                        {
                            case 1 :
                                garis();
                                buku1();
                                garis();
                                cout<<" Berapa Jumlah Buku Yang Ingin Dipinjam : ";cin>>t;
                                cout<<endl;
                                if (t>3)
                                    {
                                        cout<<"Batas Maksimal Peminjaman 3 Buku";
                                    }
                                cout<<"Apakah Anda Ingin Kembali Ke Menu?(Y/T)";
                                cin>>ulang;
                                while ((ulang=='y') || (ulang=='Y'))
                                {
                                    goto menu;
                                }
                                cout<<"Terima Kasih Sudah Menggunakan Aplikasi Ini"<<endl;

                                break;
                            case 2 :
                                garis();
                                cout<<endl;
                                garis();
                                buku2();
                                cout<<"Berapa Jumlah Buku Yang Ingin Dipinjam :";cin>>t;
                                cout<<endl;
                                if (t>3)
                                    {
                                        cout<<"Batas Maksimal Peminjaman 3 Buku";
                                    }
                                cout<<"Apakah Anda Ingin Kembali Ke Menu?(Y/T)";
                                cin>>ulang;
                                while ((ulang=='y') || (ulang=='Y'))
                                {
                                    goto menu;
                                }
                                cout<<"Terima Kasih Sudah Menggunakan Aplikasi Ini"<<endl;

                                break;
                            case 3 :
                                garis();
                                cout<<endl;
                                garis();
                                buku3();
                                cout<<"\n Berapa Jumlah Buku Yang Ingin Dipinjam : ";
                                cin>>t;
                                if (t>3)
                                    {
                                        cout<<"Batas Maksimal Peminjaman 3 Buku";
                                    }
                                cout<<"\n Apakah Anda Ingin Kembali Ke Menu?(Y/T)";
                                cin>>ulang;
                                while ((ulang=='y') || (ulang=='Y'))
                                {
                                    goto menu;
                                }
                                cout<<"Terima Kasih Sudah Menggunakan Aplikasi Ini"<<endl;

                                break;
                            case 4 :
                                garis();
                                buku4();
                                garis();
                                cout<<"\n Berapa Jumlah Buku Yang Ingin Dipinjam : ";
                                cin>>t;
                                if (t>3)
                                    {
                                        cout<<"Batas Maksimal Peminjaman 3 Buku";
                                    }
                                cout<<"\n Apakah Anda Ingin Kembali Ke Menu?(Y/T)";
                                cin>>ulang;
                                while ((ulang=='y') || (ulang=='Y'))
                                {
                                    goto menu;
                                }
                                cout<<"Terima Kasih Sudah Menggunakan Aplikasi Ini"<<endl;
                                break;
                           case 5 :
                                garis();
                                buku5();
                                garis();
                                cout<<"\n Berapa Jumlah Buku Yang Ingin Dipinjam : ";
                                cin>>t;
                                if (t>3)
                                    {
                                        cout<<"Batas Maksimal Peminjaman 3 Buku";
                                    }
                                cout<<"\n Apakah Anda Ingin Kembali Ke Menu?(Y/T)";
                                cin>>ulang;
                                while ((ulang=='y') || (ulang=='Y'))
                                {
                                    goto menu;
                                }
                                cout<<"Terima Kasih Sudah Menggunakan Aplikasi Ini"<<endl;
                                break;
                           default :
                            cout <<"Data Tidak Ditemukan";
                        }
                        break;
            case 3 :
                    cout<<"Pengembalian Buku"<<endl;
                    garis();
                    start:
                    cout<<"NPM          :";cin>>nom;
                    cout<<endl;
                    cout<<"Nama         :";cin>>nama;
                    cout<<endl;
                    cout<<"Kode Buku    :";cin>>a;
                    cout<<endl;
                    cout << "Tanggal Peminjaman    : ";
                    cin >> tgl.dd;
                    cout << "Bulan Peminjaman      : ";
                    cin >> tgl.mm;
                    cout << "Tahun Peminjaman      : ";
                    cin >> tgl.yy;
                    cout << endl;
                    cout << "Tanggal Pengembalian : ";
                    cin >> tgl.dd2;
                    cout << "Bulan Pengembalian   : ";
                    cin >> tgl.mm2;
                    cout << "Tahun Pengembalian   : ";
                    cin >> tgl.yy2;
                    cout <<endl<<endl;
                    total_hari1 = (tgl.yy*365) + (tgl.mm*30) + tgl.dd;
                    total_hari2 = (tgl.yy2*365) + (tgl.mm2*30) + tgl.dd2;
                    if(total_hari2 > total_hari1){
                        total = total_hari2 - total_hari1;
                        cout<<"Lama Meminjam (Hari) :"<<total<<endl;
                    }else
                    cout <<"Inputan Salah";
                    system("cls");
                    cout<<"============================"<<endl;
                    cout<<"       DATA PENGEMBALIAN    "<<endl;
                    cout<<"============================"<<endl;
                    cout<<" NPM  :"<<nom<<endl;
                    cout<<" Nama :"<<nama<<endl;
                    switch(a)
                    {
                        case 1:
                                buku1();
                                break;
                        case 2:
                                buku2();
                                break;
                        case 3:
                                buku3();
                                break;
                        case 4:
                                buku4();
                                break;
                        case 5:
                                buku5();
                                break;
                    }
                    if(total>2)
                        denda=(total-2)*2000;
                    else
                        denda=0;
                    cout<<" Jumlah Denda yang Harus Dibayar : Rp."<<denda<<endl;
                    cout<<"==========================================="<<endl;
                    cout<<"\n Apakah Anda Ingin Mengembalikan Buku Lagi?(Y/T)";
                    cin>>ulang;
                    while ((ulang=='y') || (ulang=='Y'))
                    {
                        goto start;
                    }
                    cout<<"Terima Kasih Sudah Menggunakan Aplikasi Ini"<<endl;
    }
    getch();
}
void buku1()
{
    cout<<" Judul Buku      : Statistika Dasar"<<endl;
    cout<<" Pengarang       : Rachmat Agus"<<endl;
    cout<<" Penerbit        : Gunadarma"<<endl;
    cout<<" Halaman         : 173 Halaman"<<endl;
    cout<<" Tahun Terbit    : 2005"<<endl;
}
void buku2()
{
    cout<<" Judul buku      : Fisika Dasar 1"<<endl;
    cout<<" Pengarang       : Rianti Devi"<<endl;
    cout<<" Penerbit        : Graha Indah"<<endl;
    cout<<" Halaman         : 903 Halaman"<<endl;
    cout<<" Tahun Terbit    : 2005"<<endl;
}
void buku3()
{
    cout<<" Judul Buku      : Matematika Diskrit"<<endl;
    cout<<" Pengarang       : Ariana Gatha"<<endl;
    cout<<" Penerbit        : Erlangga"<<endl;
    cout<<" Halaman         : 273 Halaman"<<endl;
    cout<<" Tahun Terbit    : 2005"<<endl;
}
void buku4()
{
    cout<<" Judul Buku      : Logika Matematika"<<endl;
    cout<<" Pengarang       : Ali Sadewa"<<endl;
    cout<<" Penerbit        : Citra Pustaka"<<endl;
    cout<<" Halaman         : 178 Halaman"<<endl;
    cout<<" Tahun Terbit    : 2005"<<endl;
}
void buku5()
{
    cout<<" Judul Buku      : Pemograman"<<endl;
    cout<<" Pengarang       : Gaza Raihan"<<endl;
    cout<<" Penerbit        : Cahya Bintang"<<endl;
    cout<<" Halaman         : 153 Halaman"<<endl;
    cout<<" Tahun Terbit    : 2005"<<endl;
}
