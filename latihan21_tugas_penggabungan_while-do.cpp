#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout <<fixed << setprecision(2);//fixed untuk hasil penjumlahan lebih tepat atau konsisten
    const int maxbarang = 100;
    string namabarang[maxbarang];
    int harga[maxbarang]; 
    double jumlahjual[maxbarang];//penggunaan double untuk penjumlahan banyak angka dan bilangan desimal agar lebih akurat
    double totlharga[maxbarang];
    double diskon[maxbarang];
    double totlbayar[maxbarang];
	double totlpendapatan =0 ; 
    int jlhbarang = 0;
    char lagi;

    do {
        cout << "Masukkan nama barang ke-  " << jlhbarang + 1 << " : ";
        cin >> namabarang[jlhbarang];
        cout << "Harga barang  " << namabarang[jlhbarang] <<" : ";
        cin >> harga[jlhbarang];
        cout << "Jumlah barang terjual  " << namabarang[jlhbarang] << " : ";
        cin >> jumlahjual[jlhbarang];

        totlharga[jlhbarang] = harga[jlhbarang] * jumlahjual[jlhbarang];

        
        diskon[jlhbarang] = totlharga[jlhbarang] * 0.10;
		 
        totlbayar[jlhbarang] = totlharga[jlhbarang] - diskon[jlhbarang];
        
        totlpendapatan +=totlbayar[jlhbarang];

        jlhbarang++;

        cout << "Apakah anda ingin lanjut input data lagi? (Y/T): ";
        cin >> lagi; 
    } while (lagi == 'y' || lagi == 'Y');

    cout << "\n=========================================================================================\n";
    cout << setw(15) << left << "Nama barang"
         << setw(15) << "Harga"
         << setw(15) << "Jumlah jual"
         << setw(15) << "Total harga"
         << setw(15) << "Diskon"
         << setw(15) << "Total bayar" << endl;
    cout << "===========================================================================================\n";

    for (int i = 0; i < jlhbarang; i++) {
        cout << setw(15) << left << namabarang[i]
             << setw(15) << harga[i]
             << setw(15) << jumlahjual[i]
             << setw(15) << totlharga[i]
             << setw(15) << diskon[i]
             << setw(15) << totlbayar[i] << endl; 
    }

    cout << "========================================================================================\n";
    cout << "Total pendapatan keseluruhan penjualan adalah :"<<totlpendapatan<< endl;
    return 0;
}

