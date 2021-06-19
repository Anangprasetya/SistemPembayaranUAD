#include <iostream>
#include <fstream>
#include "header/myconio.h"
using namespace std;

inline void tampil(string x1, string x2, bool cursor = false){
	cout << x1;
	int px2;
	if (cursor){
		cout << "|";
		px2 = x2.length() - 3;
	}
	else
		px2 = x2.length() - 2;

	for (int i = x1.length(); i < px2; i++)
		cout << " ";

	cout << "||\n";

}

int main(){
	char c;
	char na, ni, k, a, rp, kp;
	bool cekend = false;
	ofstream filedata;

	startapp :
	string nama, nim, kelas, angkatan, rupiah, kodep;
	string input_nama = " ||    NAMA                     : ";
	string input_nim = " ||    NIM                      : ";
	string input_kelas = " ||    KELAS                    : ";
	string input_rupiah = " ||    Jumlah Pembayaran (Juta) : ";
	string input_angkatan = " ||    ANGKATAN                 : ";
	string input_kodep = " ||    KODE PEMBAYARAN          : ";
	string flashmessage = " ||     -------------------------------------------                           ||\n ||     |  Selamat Pembayaran Anda Berhasil !!!   |                           ||\n ||     -------------------------------------------                           ||\n ||                                                                           ||\n ||                                                                           ||\n";
	string tampilan_space = " ||                                                                           ||\n";
	string picuTampilan = " ||===========================================================================||";
	string tampilan = "\n ||===========================================================================||\n ||=====================     APLIKASI PEMBAYARAN UAD     =====================||\n ||=====================           Kelompok 10           =====================||\n ||=====================            A - 2020             =====================||\n ||===========================================================================||\n ||                                                                           ||\n";

	bool ceknama = true, cekkelas = false, cekrupiah = false, cekangkatan = false, cekkode = false;

	while(true){
		if (ceknama)
		{
			clrscr();
			cout << tampilan;
			if (cekend)
			{
				cout << flashmessage;
				cekend = false;
			}
			tampil(input_nama, picuTampilan, true);
			tampil(input_nim, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kodep, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n";
			na = getch();
			if (na == '\n')
			{
				ceknama = false;
				continue;
			}
			else if ((int) na == 127)
			{
				nama.erase(nama.length() -1, 1);
				input_nama.erase(input_nama.length() - 1, 1);
			}
			else{
				nama += na;
				input_nama += na;
			}
		}
		else if (cekend){
			filedata.open("data/nama.txt", ios::app);
			filedata << nama << "\n";
			filedata.close();

			filedata.open("data/nim.txt", ios::app);
			filedata << nim << "\n";
			filedata.close();

			filedata.open("data/kelas.txt", ios::app);
			filedata << kelas << "\n";
			filedata.close();

			filedata.open("data/kodep.txt", ios::app);
			filedata << kodep << "\n";
			filedata.close();

			filedata.open("data/rupiah.txt", ios::app);
			filedata << rupiah << "\n";
			filedata.close();

			filedata.open("data/angkatan.txt", ios::app);
			filedata << angkatan << "\n";
			filedata.close();

			goto startapp;
		}

		else if (cekrupiah)
		{
			clrscr();
			cout << tampilan;
			tampil(input_nama, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kodep, picuTampilan);
			tampil(input_rupiah, picuTampilan, true);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n";
			rp = getch();
			if (rp == '\n')
			{
				cekend = true;
				continue;
			}
			else if ((int) rp == 127){
				rupiah.erase(rupiah.length() - 1, 1);
				input_rupiah.erase(input_rupiah.length() - 1, 1);
			}
			else{
				rupiah += rp;
				input_rupiah += rp;
			}
		}
		else if (cekkode)
		{
			clrscr();
			cout << tampilan;
			tampil(input_nama, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kodep, picuTampilan, true);
			tampil(input_rupiah, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n";
			kp = getch();
			if (kp == '\n')
			{
				cekrupiah = true;
				continue;
			}
			else if ((int) kp == 127){
				kodep.erase(kodep.length() - 1, 1);
				input_kodep.erase(input_kodep.length() - 1, 1);
			}
			else{
				kodep += kp;
				input_kodep += kp;
			}
		}
		else if (cekangkatan)
		{
			clrscr();
			cout << tampilan;
			tampil(input_nama, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_angkatan, picuTampilan, true);
			tampil(input_kodep, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n";
			a = getch();
			if (a == '\n')
			{
				cekkode = true;
				continue;
			}
			else if ((int) a == 127){
				angkatan.erase(angkatan.length() - 1, 1);
				input_angkatan.erase(input_angkatan.length() - 1, 1);
			}
			else{
				angkatan += a;
				input_angkatan += a;
			}
		}
		else if (cekkelas)
		{
			clrscr();
			cout << tampilan;
			tampil(input_nama, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_kelas, picuTampilan, true);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kodep, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n";
			k = getch();
			if (k == '\n')
			{
				cekangkatan = true;
				continue;
			}
			else if ((int) k == 127){
				kelas.erase(kelas.length() - 1, 1);
				input_kelas.erase(input_kelas.length() - 1, 1);
			}
			else{
				kelas += k;
				input_kelas += k;
			}
		}
		else{
			clrscr();
			cout << tampilan;
			tampil(input_nama, picuTampilan);
			tampil(input_nim, picuTampilan, true);
			tampil(input_kelas, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kodep, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n";
			ni = getch();
			if (ni == '\n')
			{
				cekkelas = true;
				continue;
			}
			else if ((int) ni == 127){
				nim.erase(nim.length() - 1, 1);
				input_nim.erase(input_nim.length() - 1, 1);
			}
			else{
				nim += ni;
				input_nim += ni;
			}
		}
	}

	return 0;
}