#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char nama[30];
    
    float harga,jlmjual,ttlhrg,diskon,ttlbyar;
    cout <<"PENJUALAN BARANG ELEKTRONIK " <<endl;
    
    cout<<"Nama Barang : ";
    cin>> nama;
    cout<<"Harga : ";
    cin>> harga;
    cout<<"Jumlah Jual : ";
    cin>> jlmjual;
    cout<<setprecision(13);
    ttlhrg=harga*jlmjual;
    cout<<"Total Harga : "<<ttlhrg<<endl;
    diskon=ttlhrg*0.10;
    cout<<"diskon : "<<diskon<<endl;
    ttlbyar=ttlhrg-diskon;
    cout<<"Total Harga : " << ttlbyar<<endl;
    
    return 0;
    
    
    }

