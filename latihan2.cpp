#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char npeg[20],njab[20];
    float gaji,pinjaman,pajak,gaber=0;
    cout <<"GAJI KARYAWAN SYMIK PERIKSA" <<endl;
    
    cout<<"Nama Pegawai : ";
    cin>> npeg;
    cout<<"Jabatan : ";
    cin>> njab;
    cout<<"Gaji : ";
    cout<<setprecision(13);
    cin>>gaji;
    pajak=0.15*gaji;
    cout<<"Pajak : "<<pajak<<endl;
    cout<<"pinjaman : ";
    cin>>pinjaman;
    gaber=gaji-(pinjaman+pajak);
    cout<<"Gaji Bersih : " << gaber<<endl;
    return 0;
    
    }
