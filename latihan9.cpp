#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	char nama[30],jabatan[30];
	float gaji,gharian,perjam;
	cout <<"PT KARYA TEKNOLOGI"<<endl;
	
	cout << "Masukkan Nama: ";
	gets(nama);
	//gets untuk menambahkan nama//
	cout<<"Masukkan Jabatan: ";
	cin>>jabatan;
	cout<<"Masukkan Jumlah Jam Kerja: ";
	cin>>gaji;
	perjam = 500;
	gharian = gaji * perjam;
	cout<<"Gaji Harian :"<< gharian <<endl;
	if(gaji > 7){
		cout <<"Gaji Lembur :" <<1.5 * perjam <<endl;
		cout <<"Gaji Total :" <<gharian + (1.5 * perjam)<<endl;
	}
}
