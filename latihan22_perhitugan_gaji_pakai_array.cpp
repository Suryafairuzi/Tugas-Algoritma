#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    const int maxpgw = 20;
    string namapegawai[maxpgw], golongan[maxpgw], kode[maxpgw], jabatan[maxpgw];
    float gaji[maxpgw], tunjangan[maxpgw], pinjaman[maxpgw], pajak[maxpgw], totlgajiktr[maxpgw], totlgajibrh[maxpgw];
    char lagi;
    int nopepgw = 0;
    float total_biaya = 0;

    cout << "GAJI PEGAWAI PT. TELKOM\n----------------------------------\n";

    do {
        cout << "Pegawai ke-" << nopepgw + 1 << endl;
        cout << "Nama Pegawai              : ";
        cin >> namapegawai[nopepgw]; 
        cout << "Golongan                  : ";
        cin >> golongan[nopepgw];
        cout << "Kode Jabatan              : ";
        cin >> kode[nopepgw];

        if (golongan[nopepgw] == "Ia") {
            gaji[nopepgw] = 500000;
        } else if (golongan[nopepgw] == "IIa") {
            gaji[nopepgw] = 750000;
        } else if (golongan[nopepgw] == "IIIa") {
            gaji[nopepgw] = 1000000;
        } else if (golongan[nopepgw] == "Ib") {
            gaji[nopepgw] = 1500000;
        } else if (golongan[nopepgw] == "IIb") {
            gaji[nopepgw] = 1750000;
        } else if (golongan[nopepgw] == "IIIb") {
            gaji[nopepgw] = 2500000;
        } else {
            cout << "Golongan tidak dikenal!" << endl;
            continue;
        }

        // Mengatur jabatan dan tunjangan berdasarkan kode
        if (kode[nopepgw] == "Dir") {
            jabatan[nopepgw] = "Direktur";
            tunjangan[nopepgw] = 4500000;
        } else if (kode[nopepgw] == "Sek") {
            jabatan[nopepgw] = "Sekretaris";
            tunjangan[nopepgw] = 3000000;
        } else if (kode[nopepgw] == "Wak") {
            jabatan[nopepgw] = "Wakil Direktur";
            tunjangan[nopepgw] = 3750000;
        } else if (kode[nopepgw] == "Stf") {
            jabatan[nopepgw] = "Staf Administrasi";
            tunjangan[nopepgw] = 2000000;
        } else {
            cout << "Kode jabatan tidak dikenal!" << endl;
            continue;
        }

        cout << "Pinjaman : "; 
        cin >> pinjaman[nopepgw];

        pajak[nopepgw] = gaji[nopepgw] * 0.05;
        totlgajiktr[nopepgw] = gaji[nopepgw] + tunjangan[nopepgw];
        totlgajibrh[nopepgw] = totlgajiktr[nopepgw] - pinjaman[nopepgw] - pajak[nopepgw];

        // Output detail gaji pegawai
        cout << left;
        cout << setw(20) << "Jabatan: " << jabatan[nopepgw] << endl;
        cout << setw(20) << "Gaji: " << gaji[nopepgw] << endl;
        cout << setw(20) << "Tunjangan: " << tunjangan[nopepgw] << endl;
        cout << setw(20) << "Pinjaman: " << pinjaman[nopepgw] << endl;
        cout << setw(20) << "Pajak: " << pajak[nopepgw] << endl;
        cout << setw(20) << "Total Kotor: " << totlgajiktr[nopepgw] << endl;
        cout << setw(20) << "Total Bersih: " << totlgajibrh[nopepgw] << endl;
        cout << "--------------------------------------------------------\n";
        
        total_biaya += totlgajibrh[nopepgw];

        nopepgw++;
        
        cout << "Lanjut? [Y/T]: "; 
        cin >> lagi;
        cout << endl;

    } while (lagi == 'Y' || lagi == 'y' && nopepgw < maxpgw);
    
    cout << left;
    cout << setw(5) << "No"
         << setw(15) << "Nama"
         << setw(10) << "Golongan"
         << setw(15) << "Jabatan"
         << setw(15) << "Gaji"
         << setw(15) << "Tunjangan"
         << setw(15) << "Pinjaman"
         << setw(15) << "Pajak"
         << setw(15) << "Gaji Kotor"
         << setw(15) << "Gaji Bersih" << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < nopepgw; i++) {
        cout << setw(5) << i + 1
             << setw(15) << namapegawai[i]
             << setw(10) << golongan[i]
             << setw(15) << jabatan[i]
             << setw(15) << gaji[i]
             << setw(15) << tunjangan[i]
             << setw(15) << pinjaman[i]
             << setw(15) << pajak[i]
             << setw(15) << totlgajiktr[i]
             << setw(15) << totlgajibrh[i] << endl;
    }

    cout << endl;
    cout << "Total biaya yang dibayar perusahaan ke semua pegawai:                                                               Rp " << total_biaya << endl;
    cout << endl;

    return 0;
}

