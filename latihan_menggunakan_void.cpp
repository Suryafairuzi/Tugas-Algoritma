#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;

void hitung() ; // Mendeklarasikan (prototype) fungsi yang tidak menghasilkan nilai.

int main()
{
	cout << "\n Menghitung Volume KUBUS" ;
	hitung() ; // memanggil fungsi hitung;
	return 0;
	
}
void hitung()
{
	float sisi, volume ;
	cout << "\n Sisi KUBUS : " ;
	cin >> sisi ;
	volume = sisi * sisi * sisi ;
	cout << "\n Volume KUBUS yaitu : " << volume ;

}
