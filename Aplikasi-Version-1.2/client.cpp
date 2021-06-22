#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include "myconio.h"
using namespace std;

inline void clrscr(){
	system("clear");
}

inline void tampil(string x1, string x2, bool cursor = false){
	cout << x1;
	if (cursor){
		cout << "|";
		cout << setw(x2.length() - x1.length());
	}else{
		cout << setw(x2.length() - x1.length() + 1);
	}

	cout << "||\n";

}

int main(){
	char c;
	int enter = 10, backspace = 127;
	bool cekend = false;
	ofstream tulis;

	startapp :
	string nama, nim, kelas, angkatan, rupiah, kodep, nama_bank, alamat;
	string input_kodep = " ||    KODE PEMBAYARAN          : ";
	string input_angkatan = " ||    ANGKATAN                 : ";
	string input_kelas = " ||    KELAS                    : ";
	string input_nim = " ||    NIM                      : ";
	string input_rupiah = " ||    Jumlah Pembayaran (Juta) : ";
	string input_nama = " ||    NAMA                     : ";
	string input_nama_bank = " ||    NAMA BANK                : ";
	string input_alamat = " ||    ALAMAT                   : ";
	string flashmessage = " ||     -------------------------------------------                           ||\n ||     |  Selamat Pembayaran Anda Berhasil !!!   |                           ||\n ||     -------------------------------------------                           ||\n ||                                                                           ||\n ||                                                                           ||\n";
	string tampilan_space = " ||                                                                           ||\n";
	string picuTampilan = " ||===========================================================================||";
	string tampilan = "\n ||===========================================================================||\n ||=====================     APLIKASI PEMBAYARAN UAD     =====================||\n ||=====================           Kelompok 10           =====================||\n ||=====================            A - 2020             =====================||\n ||===========================================================================||\n ||                                                                           ||\n";

	bool ceknama = false, cekkelas = false, cekrupiah = false;
	bool cekangkatan = false, cekkodep = true, ceknim = false;
	bool ceknamabank = false, cekalamat = false;

	while(true){
		clrscr();
		cout << tampilan;
		if (cekkodep && cekend){
			cout << flashmessage;
			cekend = false;
		}
		if (cekkodep){
			tampil(input_kodep, picuTampilan, true);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			tampil(input_nama, picuTampilan);
			tampil(input_nama_bank, picuTampilan);
			tampil(input_alamat, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				cekkodep = false;
			}
			else if ((int) c == backspace){
				kodep.erase(kodep.length() - 1, 1);
				input_kodep.erase(input_kodep.length() - 1, 1);
			}
			else{
				kodep += c;
				input_kodep += c;
			}
		}
		else if (cekend){
			// Nim
			string t_nim;
			for (int i = 3; i >= 1; i--)
			{
				if (nim[nim.length() - i] != '0')
					t_nim += nim[nim.length() - i];
				else
					if (t_nim != "0" && t_nim != "")
						t_nim += nim[nim.length() - i];
			}
			tulis.open("data/kode/nim.txt", ios::app);
			tulis << t_nim << endl;
			tulis.close();

			// Kelas
			string t_kelas[5] = {"A", "B", "C", "D", "E"};
			int t_kls;
			for (int i = 0; i < 5; i++)
			{
				if (kelas == t_kelas[i]){
					t_kls = i;
					break;
				}
			}

			tulis.open("data/kode/kelas.txt", ios::app);
			tulis << t_kls << endl;
			tulis.close();

			// Angkatan
			string t_angkatan[9] = {"2015","2016","2017","2018","2019","2020", "2021", "2022", "2023"};
			int t_angktn;
			for (int i = 0; i < 9; i++)
			{
				if (angkatan == t_angkatan[i]){
					t_angktn = i;
					break;
				}
			}
			tulis.open("data/kode/angkatan.txt", ios::app);
			tulis << t_angktn << endl;
			tulis.close();


			// Data Utama
			tulis.open("data/nama.txt", ios::app);
			tulis << nama << endl;
			tulis.close();

			tulis.open("data/nim.txt", ios::app);
			tulis << nim << endl;
			tulis.close();

			tulis.open("data/kelas.txt", ios::app);
			tulis << kelas << endl;
			tulis.close();

			tulis.open("data/angkatan.txt", ios::app);
			tulis << angkatan << endl;
			tulis.close();

			tulis.open("data/kodep.txt", ios::app);
			tulis << kodep << endl;
			tulis.close();

			tulis.open("data/rupiah.txt", ios::app);
			tulis << rupiah << endl;
			tulis.close();

			tulis.open("data/nama_bank.txt", ios::app);
			tulis << nama_bank << endl;
			tulis.close();

			tulis.open("data/alamat.txt", ios::app);
			tulis << alamat << endl;
			tulis.close();





			tulis.open("printOut/user.txt");
			tulis << "\n\n Print out by KELOMPOK 10 A 2020 \n\n\n\n";
			tulis << "   ~~~ SELAMAT PEMBAYARAN TELAH BERHASIL DI LAKUKAN ~~~\n\n";
			tulis << "     Pembayaran berhasil dilakukan dengan detail : \n";
			tulis << "         Nama\t: " << nama << endl;
			tulis << "         nim\t: " << nim << endl;
			tulis << "         kelas\t: " << kelas << endl;
			tulis << "         angkatan\t: " << angkatan << endl;
			tulis << "         rupiah\t: " << rupiah << endl;
			tulis << "         kodep\t: " << kodep << endl;
			tulis << "         nama_bank\t: " << nama_bank << endl;
			tulis << "         alamat\t: " << alamat << endl << endl;
			tulis << "      Terima Kasih !!!\n";
			tulis << "\n\n Print out by KELOMPOK 10 A 2020 \n";
			tulis.close();



			goto startapp;
		}
		else if (cekalamat){
			tampil(input_kodep, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			tampil(input_nama, picuTampilan);
			tampil(input_nama_bank, picuTampilan);
			tampil(input_alamat, picuTampilan, true);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				cekend = true;
			}
			else if ((int) c == backspace){
				alamat.erase(alamat.length() - 1, 1);
				input_alamat.erase(input_alamat.length() - 1, 1);
			}
			else{
				alamat += c;
				input_alamat += c;
			}
		}
		else if (ceknamabank){
			tampil(input_kodep, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			tampil(input_nama, picuTampilan);
			tampil(input_nama_bank, picuTampilan, true);
			tampil(input_alamat, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				cekalamat = true;
			}
			else if ((int) c == backspace){
				nama_bank.erase(nama_bank.length() - 1, 1);
				input_nama_bank.erase(input_nama_bank.length() - 1, 1);
			}
			else{
				nama_bank += c;
				input_nama_bank += c;
			}
		}
		else if (ceknama){
			tampil(input_kodep, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			tampil(input_nama, picuTampilan, true);
			tampil(input_nama_bank, picuTampilan);
			tampil(input_alamat, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				ceknamabank = true;
			}
			else if ((int) c == backspace){
				nama.erase(nama.length() - 1, 1);
				input_nama.erase(input_nama.length() - 1, 1);
			}
			else{
				nama += c;
				input_nama += c;
			}
		}
		else if (cekrupiah){
			tampil(input_kodep, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_rupiah, picuTampilan, true);
			tampil(input_nama, picuTampilan);
			tampil(input_nama_bank, picuTampilan);
			tampil(input_alamat, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				ceknama = true;
			}
			else if ((int) c == backspace){
				rupiah.erase(rupiah.length() - 1, 1);
				input_rupiah.erase(input_rupiah.length() - 1, 1);
			}
			else{
				rupiah += c;
				input_rupiah += c;
			}
		}
		else if (ceknim){
			tampil(input_kodep, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kelas, picuTampilan);
			tampil(input_nim, picuTampilan, true);
			tampil(input_rupiah, picuTampilan);
			tampil(input_nama, picuTampilan);
			tampil(input_nama_bank, picuTampilan);
			tampil(input_alamat, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				cekrupiah = true;
			}
			else if ((int) c == backspace){
				nim.erase(nim.length() - 1, 1);
				input_nim.erase(input_nim.length() - 1, 1);
			}
			else{
				nim += c;
				input_nim += c;
			}
		}
		else if (cekkelas){
			tampil(input_kodep, picuTampilan);
			tampil(input_angkatan, picuTampilan);
			tampil(input_kelas, picuTampilan, true);
			tampil(input_nim, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			tampil(input_nama, picuTampilan);
			tampil(input_nama_bank, picuTampilan);
			tampil(input_alamat, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				ceknim = true;
			}
			else if ((int) c == backspace){
				kelas.erase(kelas.length() - 1, 1);
				input_kelas.erase(input_kelas.length() - 1, 1);
			}
			else{
				kelas += c;
				input_kelas += c;
			}
		}
		else {
			tampil(input_kodep, picuTampilan);
			tampil(input_angkatan, picuTampilan, true);
			tampil(input_kelas, picuTampilan);
			tampil(input_nim, picuTampilan);
			tampil(input_rupiah, picuTampilan);
			tampil(input_nama, picuTampilan);
			tampil(input_nama_bank, picuTampilan);
			tampil(input_alamat, picuTampilan);
			cout << tampilan_space;
			cout << picuTampilan;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			c = getch();

			if ((int) c == enter){
				cekkelas = true;
			}
			else if ((int) c == backspace){
				angkatan.erase(angkatan.length() - 1, 1);
				input_angkatan.erase(input_angkatan.length() - 1, 1);
			}
			else{
				angkatan += c;
				input_angkatan += c;
			}
		}
	}
	return 0;
}