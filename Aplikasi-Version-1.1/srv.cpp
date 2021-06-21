#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <conio.h>
using namespace std;

int panjangmak_baris = 10;

inline void tampilKolom(string data[], int n_banyak, string col){
	string x = "  ";
	x += col;
	int b = 0;
	for (int i = 0; i < n_banyak; ++i)
		if (b < data[i].length())
			b = data[i].length();

	cout << x;
	for (int i = x.length(); i < b + 4; i++)
		cout << " ";
	cout << " ";
}

inline void tampilKolom(int data[], int n_banyak, string col){
	string x = "  ";
	x += col;
	int b = 0;
	string ubah;
	for (int i = 0; i < n_banyak; i++){	
		stringstream ss;
        ss << data[i];
        ubah = ss.str();
		if (b < ubah.length())
			b = ubah.length();
	}

	cout << x;
	for (int i = x.length(); i < b + 4; i++)
		cout << " ";
}

inline void tampilKolom(double data[], int n_banyak, string col){
	string x = "  ";
	x += col;
	int b = 0;
	string ubah;
	for (int i = 0; i < n_banyak; i++){
		stringstream ss;
		ss << data[i];
		ubah = ss.str();
		if (b < ubah.length())
			b = ubah.length();
	}

	cout << x;
	for (int i = x.length(); i < b + 4; i++)
		cout << " ";
}

inline void tampilBaris(string data[], int idx, int n_banyak){
	int b = 0;
	cout << "|  ";
	cout << data[idx];
	for (int j = 0; j < n_banyak; j++)
		if (b < data[j].length())
			b = data[j].length();

	if (idx == 0)
		panjangmak_baris += b + 4;

	for (int j = data[idx].length(); j < b + 2; j++)
		cout << " ";
}

inline void tampilBaris(double data[], int idx, int n_banyak){
	int b = 0;
	stringstream ss;
	ss << data[idx];
	string s = ss.str();
	cout << "|  ";
	cout << s;
	string ubah;
	for (int j = 0; j < n_banyak; j++){
		stringstream ss;
		ss << data[j];
		ubah = ss.str();
		if (b < ubah.length())
			b = ubah.length();
	}

	if (idx == 0)
		panjangmak_baris += b + 4;

	for (int j = s.length(); j < b + 2; j++)
		cout << " ";
}

inline void tampilBaris(int data[], int idx, int n_banyak){
	int cek_panjang = 0;
	int b  = 0;
	int am;
	cout << "|  ";
	cout << data[idx];

	for (int j = 0; j < n_banyak; j++)
	{
		cek_panjang = 0;
		am = data[j];
		while(am != 0){
			am = am / 10;
			cek_panjang++;
		}
		if (b < cek_panjang)
			b = cek_panjang;		
	}

	am = data[idx];
	cek_panjang = 0;
	while(am != 0){
		am = am / 10;
		cek_panjang++;
	}

	if (idx == 0)
		panjangmak_baris += b + 4;

	for (int j = cek_panjang; j < b + 2; j++)
		cout << " ";

}




inline void tukar(string *x, string *y){
	string t = *x;
	*x = *y;
	*y = t;
}

inline void tukar(int * x, int * y){
	int t = *x;
	*x = *y;
	*y = t;
}

inline void tukar(double * x, double * y){
	double t = *x;
	*x = *y;
	*y = t;
}

inline void clrscr(void)
{
    system("cls");
}

inline string strlow(string x){
  for (int i = 0; i < x.length(); i++)
    if (x[i] >= 'A' && x[i] <= 'Z')
       x[i] = x[i] + 32;

  return x;
}

int main(){
	ifstream bacafile;
	ofstream tulisfile;
	char c;

	int banyak = 20;
	string nama[banyak];
	string nim[banyak];
	string kelas[banyak];
	int kodep[banyak];
	int angkatan[banyak];
	double rupiah[banyak];
	int i, n, y;
	int enter = 13, backspace = 8;
	int p_tampilan_catatan = 11;
	int p_tampilan_datakosong = 4;
	int p_tampilan_save = 4;
	int p_tampilan_catatan_filter_angkatan = 6;
	int p_tampilan_pencarian = 5;
	int p_tampilan_about = 3;

	bool cek_filter_angkatan = false, cek_pencarian = false, cek_about = false, cek_save = false, cek_save2 = false;
	string tampilan_save[p_tampilan_save] = {
		"                                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n",
		"                                        Data Mahasiswa Berhasil Di Simpan  !  \n",
		"                                                                              \n",
		"                                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n"
	};
	string tampilan_about[p_tampilan_about] = {
		"                                                                                               !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n   ````````````````````````````````````````````````````````````````````````                    ! Catatan Aplikasi                     !\n   ```                          TENTANG KAMI                            ```                    ! ****************                     !\n   ```------------------------------------------------------------------```                    !                                      !\n   ```                                                                  ```                    ! Kembali                   >>   x     !\n",
		"   ```                        App10 Version 1.1                         ```                    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n   ```                    Copyright 2021 App10 Stable                   ```\n   ```                    Created KELOMPOK 10 A 2020                    ```\n   ```                                                                  ```\n",
		"   ```    Nama Kelompok  :                                              ```\n   ```           Alfi Maulana Akbar  -  2000018026                      ```\n   ```           Imam Ramadhan       -  2000018045                      ```\n   ```           Anang Nur Prasetya  -  2000018045                      ```\n   ```                                                                  ```\n   ```                                                                  ```\n   ```------------------------------------------------------------------```\n   ````````````````````````````````````````````````````````````````````````\n"
	};
	string tampilan_pencarian[p_tampilan_pencarian] = {
		"                                                                                               !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n                                                                                               ! Catatan Aplikasi                     !\n    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                          ! ****************                     !\n",
		"    |  Input Pencarian : ",
		"    |  Input Pencarian :                                            |",
		"                          !                                      !\n",
		"    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                          ! Kembali                   >>   ext0  !\n                                                                                               !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n"
	};
	string tampilan_catatan_filter_angkatan[p_tampilan_catatan_filter_angkatan] = {
		"!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n",
		"! Catatan Aplikasi                     !\n",
		"! ****************                     !\n",
		"!                                      !\n",
		"! Kembali                   >>   x     !\n",
		"!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n"
	};
	string tampilan_datakosong[p_tampilan_datakosong] = {
		"                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
		"                       Tidak Ada Data Yang Tersedia  !  ",
		"                                                        ",
		"                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"
	};
	string tampilan_catatan[p_tampilan_catatan] = {
		"!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n",
		"! Catatan Aplikasi                     !\n",
		"! ****************                     !\n",
		"!                                      !\n",
		"! Refresh Tampilan          >>   r     !\n",
		"! Hapus Semua               >>   d     !\n",
		"! Filter Angkatan           >>   a     !\n",
		"! Pencarian                 >>   s     !\n",
		"! Simpan Data               >>   v     !\n",
		"! Tentang Kami              >>   b     !\n",
		"!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n"
	};
	string tampilan_picu = "   ||================================================================================================================================||";
	string tampilan_space = "   ||                                                                                                      ||\n";
	string tampilan = "\n   ||================================================================================================================================||\n   ||========================================|         DASHBOARD ADMIN KELOMPOK 10          |========================================||\n   ||========================================|                  KELAS - A                   |========================================||\n   ||========================================|                ANGKATAN 2020                 |========================================||\n   ||================================================================================================================================||\n   ||========================================|              Pak Wahyu Pujiono               |========================================||\n   ||========================================|           UNIVERSITAS AHMAD DAHLAN           |========================================||\n   ||================================================================================================================================||\n\n";
	
	while(true){
		i = 0;
		clrscr();
		cout << tampilan;
		bacafile.open("data/nama.txt");
		while(!bacafile.eof()){
			getline(bacafile, nama[i]);
			i++;
		}
		bacafile.close();
		if (cek_about){
			for (int i = 0; i < p_tampilan_about; i++){
					cout << tampilan_about[i];
			}
		}
		else if (i - 1 == 0)
		{
			cek_save2 = false;
			if (cek_filter_angkatan)
				cek_filter_angkatan = false;

			if (cek_pencarian)
				cek_pencarian = false;

			if (cek_save)
				cek_save = false;

			for (int i = 0; i < p_tampilan_catatan; i++)
			{
				if (i < p_tampilan_datakosong)
				{
					cout << tampilan_datakosong[i];
					for (int j = 0; j < tampilan_picu.length() - (tampilan_datakosong[i].length() + tampilan_catatan[i].length()); ++j)
						cout << " ";
	
					cout << " " <<tampilan_catatan[i];
				}
				else{
					for (int j = 0; j < tampilan_picu.length() - tampilan_catatan[i].length(); ++j)
						cout << " ";
					cout << " " <<tampilan_catatan[i];
				}
			}
		}
		else{
			cek_save2 = true;
			i = 0;
			bacafile.open("data/nim.txt");
			while(!bacafile.eof()){
				bacafile >> nim[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("data/kelas.txt");
			while(!bacafile.eof()){
				bacafile >> kelas[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("data/kodep.txt");
			while(!bacafile.eof()){
				bacafile >> kodep[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("data/rupiah.txt");
			while(!bacafile.eof()){
				bacafile >> rupiah[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("data/angkatan.txt");
			while(!bacafile.eof()){
				bacafile >> angkatan[i];
				i++;
			}
			bacafile.close();
			n = i - 1;
			y = p_tampilan_catatan;
			if (cek_filter_angkatan)
			{
				cout << "   ";
				tampilKolom(nim, n, "NIM");
				tampilKolom(nama, n, "NAMA");
				tampilKolom(kelas, n, "KLS");
				tampilKolom(kodep, n, "KODEP");
				tampilKolom(rupiah, n, "RUPIAH");
				tampilKolom(angkatan, n, "ANGKATAN");
				cout << "\n";
				y = p_tampilan_catatan_filter_angkatan;
				for (int i = 1; i < n; i++){
					for (int j = i; j > 0; j--){
						if (angkatan[j] < angkatan[j - 1])
						{
							tukar(&angkatan[j], &angkatan[j - 1]);
							tukar(&nama[j], &nama[j - 1]);
							tukar(&nim[j], &nim[j - 1]);
							tukar(&kelas[j], &kelas[j - 1]);
							tukar(&rupiah[j], &rupiah[j - 1]);
							tukar(&kodep[j], &kodep[j - 1]);
						}
					}
				}

				int copy_angkatan[n];
				copy_angkatan[0] = angkatan[0];
				int idx_c_angkatan = 0;
				for (int i = 1; i < n; i++){
					if (copy_angkatan[idx_c_angkatan] != angkatan[i])
					{
						idx_c_angkatan++;
						copy_angkatan[idx_c_angkatan] = angkatan[i];
					}
				}

				if (n < y)
				{
					for (int i = 0; i < y; i++)
					{
						if (i < n)
						{
							cout << "   ";
							tampilBaris(nim, i, n);
							tampilBaris(nama, i, n);
							tampilBaris(kelas, i, n);
							tampilBaris(kodep, i, n);
							tampilBaris(rupiah, i, n);
							tampilBaris(angkatan, i, n);
							cout << "|";
							for (int j = 0; j < tampilan_picu.length() - (panjangmak_baris + tampilan_catatan_filter_angkatan[i].length()); j++)
								cout << " ";
							cout << " " << tampilan_catatan_filter_angkatan[i];

						}
						else{
							for (int j = 0; j < tampilan_picu.length() - tampilan_catatan_filter_angkatan[i].length(); j++)
								cout << " ";
							cout << " " << tampilan_catatan_filter_angkatan[i];
						}
					}

				}
				else{
					for (int i = 0; i < n; i++)
					{
						cout << "   ";
						tampilBaris(nim, i, n);
						tampilBaris(nama, i, n);
						tampilBaris(kelas, i, n);
						tampilBaris(kodep, i, n);
						tampilBaris(rupiah, i, n);
						tampilBaris(angkatan, i, n);
						cout << "|";
						if (i < y)
						{
							for (int j = 0; j < tampilan_picu.length() - (panjangmak_baris + tampilan_catatan_filter_angkatan[i].length()); j++)
								cout << " ";
							cout << " " << tampilan_catatan_filter_angkatan[i];
						}
						else{
							cout << endl;
						}
					}
				}
			}
			else if (cek_pencarian)
			{
				string key = "";
				string ambildata = "";
				char c2;
				bool ketemu = false, muncul = true;
				while(true){
					clrscr();
					cout << tampilan;
					cout << tampilan_pencarian[0];
					cout << tampilan_pencarian[1] << "|";
					for (int i = tampilan_pencarian[1].length(); i < tampilan_pencarian[2].length() - 2; i++)
						cout << " ";
					cout << "|";
					cout << tampilan_pencarian[3];
					cout << tampilan_pencarian[4];
					if (key == "ext0"){
						cek_pencarian = false;
						break;
					}
					else if (key != "")
					{
						ketemu = false;
						cout << "   ";
						tampilKolom(nim, n, "NIM");
						tampilKolom(nama, n, "NAMA");
						tampilKolom(kelas, n, "KLS");
						tampilKolom(kodep, n, "KODEP");
						tampilKolom(rupiah, n, "RUPIAH");
						tampilKolom(angkatan, n, "ANGKATAN");
						cout << "\n";
						for (int i = 0; i < n; i++)
						{
							muncul = true;
							for (int j = 0; j < nama[i].length(); j++)
							{
								for (int k = 0; k < key.length(); k++)
									if (j + k < nama[i].length())
										ambildata += nama[i][j + k];

								if (strlow(ambildata) == strlow(key)){
									if (muncul)
									{
										cout << "   ";
										tampilBaris(nim, i, n);
										tampilBaris(nama, i, n);
										tampilBaris(kelas, i, n);
										tampilBaris(kodep, i, n);
										tampilBaris(rupiah, i, n);
										tampilBaris(angkatan, i, n);
										cout << "|\n";
										muncul = false;
										ketemu = true;
									}
								}
								ambildata = "";
							}
						}
						if (!ketemu)
						{
							ketemu = false;
							for (int i = 0; i < n; i++)
							{
								muncul = true;
								for (int j = 0; j < nim[i].length(); j++)
								{
									for (int k = 0; k < key.length(); k++)
										if (j + k < nim[i].length())
											ambildata += nim[i][j + k];

									if (strlow(ambildata) == strlow(key))
										if (muncul)
										{
											cout << "   ";
											tampilBaris(nim, i, n);
											tampilBaris(nama, i, n);
											tampilBaris(kelas, i, n);
											tampilBaris(kodep, i, n);
											tampilBaris(rupiah, i, n);
											tampilBaris(angkatan, i, n);
											cout << "|\n";
											muncul = false;
											ketemu = true;
										}
									ambildata = "";
								}
							}

							if (!ketemu)
								cout << "\n\n    >>>>>>>>>>>>>>>       Kata Kunci \'"<< key <<"\' tidak ditemukan :)      <<<<<<<<<<<<<<<";	
						}
					}
					else{
						cout << "   ";
						tampilKolom(nim, n, "NIM");
						tampilKolom(nama, n, "NAMA");
						tampilKolom(kelas, n, "KLS");
						tampilKolom(kodep, n, "KODEP");
						tampilKolom(rupiah, n, "RUPIAH");
						tampilKolom(angkatan, n, "ANGKATAN");
						cout << "\n";
						for (int i = 0; i < n; i++)
						{
							cout << "   ";
							tampilBaris(nim, i, n);
							tampilBaris(nama, i, n);
							tampilBaris(kelas, i, n);
							tampilBaris(kodep, i, n);
							tampilBaris(rupiah, i, n);
							tampilBaris(angkatan, i, n);
							cout << "|\n";
						}
					}
					
					cout << "\n\n\n\n\n\n\n\n";	
					c2 = getch();
					if ((int) c2 == backspace)
					{
						tampilan_pencarian[1].erase(tampilan_pencarian[1].length() - 1, 1);
						key.erase(key.length() - 1, 1);
					}
					else{
						tampilan_pencarian[1] += c2;
						key += c2;
					}

				}

				if (key == "ext0"){
					for (int i = 0; i < 4; ++i){
						tampilan_pencarian[1].erase(tampilan_pencarian[1].length() - 1, 1);
					}
					panjangmak_baris = 10;
					continue;
				}
			}
			else {
				if (cek_save)
				{
					cek_save = false;
					for (int i = 0; i < p_tampilan_save; i++){
						cout << tampilan_save[i];
					}
				}
				

				cout << "   ";
				tampilKolom(nim, n, "NIM");
				tampilKolom(nama, n, "NAMA");
				tampilKolom(kelas, n, "KLS");
				tampilKolom(kodep, n, "KODEP");
				tampilKolom(rupiah, n, "RUPIAH");
				tampilKolom(angkatan, n, "ANGKATAN");
				cout << "\n";

				if (n < y)
				{
					for (int i = 0; i < y; i++)
					{
						if (i < n)
						{
							cout << "   ";
							tampilBaris(nim, i, n);
							tampilBaris(nama, i, n);
							tampilBaris(kelas, i, n);
							tampilBaris(kodep, i, n);
							tampilBaris(rupiah, i, n);
							tampilBaris(angkatan, i, n);
							cout << "|";
							for (int j = 0; j < tampilan_picu.length() - (tampilan_catatan[i].length() + panjangmak_baris); j++)
								cout << " ";
							cout << " " <<tampilan_catatan[i];
						}
						else{
							for (int j = 0; j < tampilan_picu.length() - tampilan_catatan[i].length(); j++)
								cout << " ";
							cout << " " <<tampilan_catatan[i];

						}
					}
				}
				else{
					for (int i = 0; i < n; i++)
					{
						cout << "   ";
						tampilBaris(nim, i, n);
						tampilBaris(nama, i, n);
						tampilBaris(kelas, i, n);
						tampilBaris(kodep, i, n);
						tampilBaris(rupiah, i, n);
						tampilBaris(angkatan, i, n);
						cout << "|";
						break;
						if (i < y)
						{
							for (int j = 0; j < tampilan_picu.length() - (tampilan_catatan[i].length() + panjangmak_baris); j++)
								cout << " ";
							cout << " " <<tampilan_catatan[i];
						}
						else
							cout << endl;
					}
				}
			}

		}
		
		cout << "\n\n\n\n\n\n\n\n";
		c = getch();
		panjangmak_baris = 10;
		if (c == 'd')
		{
			tulisfile.open("data/nama.txt");
			tulisfile << "";
			tulisfile.close();

			tulisfile.open("data/nim.txt");
			tulisfile << "";
			tulisfile.close();

			tulisfile.open("data/kelas.txt");
			tulisfile << "";
			tulisfile.close();

			tulisfile.open("data/kodep.txt");
			tulisfile << "";
			tulisfile.close();

			tulisfile.open("data/rupiah.txt");
			tulisfile << "";
			tulisfile.close();

			tulisfile.open("data/angkatan.txt");
			tulisfile << "";
			tulisfile.close();
		}
		else if (c == 'a')
			cek_filter_angkatan = true;
		else if (c == 's')
			cek_pencarian = true;
		else if (c == 'b')
			cek_about = true;
		else if (c == 'v' && cek_save2){
			for (int i = 1; i < n; i++)
				for (int j = i; j > 0; j--)
					if (angkatan[j] < angkatan[j - 1])
					{
						tukar(&angkatan[j], &angkatan[j - 1]);
						tukar(&nama[j], &nama[j - 1]);
						tukar(&nim[j], &nim[j - 1]);
						tukar(&kelas[j], &kelas[j - 1]);
						tukar(&rupiah[j], &rupiah[j - 1]);
						tukar(&kodep[j], &kodep[j - 1]);
					}


			for (int i = 0; i < n; i++)
			{
				if (i == 0)
				{
					tulisfile.open("data/nama.txt");
					tulisfile << nama[i] << endl;
					tulisfile.close();

					tulisfile.open("data/nim.txt");
					tulisfile << nim[i] << endl;
					tulisfile.close();

					tulisfile.open("data/kelas.txt");
					tulisfile << kelas[i] << endl;
					tulisfile.close();

					tulisfile.open("data/kodep.txt");
					tulisfile << kodep[i] << endl;
					tulisfile.close();

					tulisfile.open("data/rupiah.txt");
					tulisfile << rupiah[i] << endl;
					tulisfile.close();

					tulisfile.open("data/angkatan.txt");
					tulisfile << angkatan[i] << endl;
					tulisfile.close();
				}
				else{
					tulisfile.open("data/nama.txt", ios::app);
					tulisfile << nama[i] << endl;
					tulisfile.close();

					tulisfile.open("data/nim.txt", ios::app);
					tulisfile << nim[i] << endl;
					tulisfile.close();

					tulisfile.open("data/kelas.txt", ios::app);
					tulisfile << kelas[i] << endl;
					tulisfile.close();

					tulisfile.open("data/kodep.txt", ios::app);
					tulisfile << kodep[i] << endl;
					tulisfile.close();

					tulisfile.open("data/rupiah.txt", ios::app);
					tulisfile << rupiah[i] << endl;
					tulisfile.close();

					tulisfile.open("data/angkatan.txt", ios::app);
					tulisfile << angkatan[i] << endl;
					tulisfile.close();	
				}
			}

			cek_save = true;
		}
		else if(c == 'x')
		{
			if (cek_filter_angkatan)
				cek_filter_angkatan = false;

			if (cek_about)
				cek_about = false;
		}
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
