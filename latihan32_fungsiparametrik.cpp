//fungsi (int s) sebagai parameter dan satu variabel yang mengandung satu nilai
#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;

float hitung (int s);
int main()
{
	float volume, sisi ;
	
	cout << "\n Menghitung Volume KUBUS ";
	cout << "\n Sisi KUBUS : " ;
	cin >> sisi ;
	volume = hitung(sisi) ;
	cout << "\n Volume KUBUS yaitu : " << volume ;
	
}

float hitung ( int s)
{
	return ( s * s * s );
}
