#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

float luas ( float panjang, float lebar ) ;
int main()
{
	float panjang_se, lebar_se, luas_se ;
	
	cout << "Program menghitung Luas Segiempat \n" ;
	
	/*Input panjang dan Lebar */
	cout << "\n\t Panjang : " ;
	cin >> panjang_se ;
	cout << "\n\t Lebar : " ;
	cin >> lebar_se;
	
	/*Menghitung Luas segiempat */
	luas_se = luas( panjang_se, lebar_se ) ;
	cout << "/n/n Luas segiempat = " << luas_se ;
}
float luas( float panjang , float lebar ) //float lebik baik di bedakan karna mungkin bakal
{
	return ( panjang * lebar ) ;
}
