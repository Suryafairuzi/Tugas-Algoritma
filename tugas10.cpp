#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char nampeg[30],jabatan[30];
	float komisi,pjlbarang;
	
	cout<<"MENGHITUNG JUMLAH KOMISI PEGAWAI "<<endl;
	cout<<"-----------___________------------"<<endl;
	cout<<"Nama Pegawai :";
	gets(nampeg);
	cout<<"Jabatan :";
	cin>>jabatan;
	cout<<"Jumlah Penjualan Pegawai : ";
	cin>>pjlbarang;
	komisi=pjlbarang*0.10;
	
	if(pjlbarang<500000){komisi=0;
	
	}
	else if (pjlbarang >=500000 &&pjlbarang <500001) {komisi =pjlbarang*0.10;
	
	} else if(pjlbarang >500000) {komisi=(500000*0.10)+(pjlbarang-500000)*0.15;
	} 
	cout<<"Tambahan Komisi Pegawai : "<<komisi<<endl;
	return 0;
	}
	
