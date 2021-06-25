#include "../Function/server_func.h"


class SystemServer : protected MyMethod {
	protected :
		inline void deklarasi_var(){
			// Pembayaran DataPembayaran[170][8][8][8];
			// char c;

			banyak = 30;
			this->tombol();
			// enter = 10; backspace = 127;
			// string nama[banyak];
			// string nama_bank[banyak];
			// string alamat[banyak];
			// string nim[banyak];
			// string kelas[banyak];
			// int kodep[banyak];
			// int angkatan[banyak];
			// double rupiah[banyak];
			// int kode_nim[banyak], kode_kelas[banyak], kode_angkatan[banyak];
			// int i, n, y;
			// p_tampilan_catatan = 13;
			// p_tampilan_datakosong = 4;
			// p_tampilan_save = 4;
			// p_tampilan_catatan_filter_angkatan = 6;
			// p_tampilan_pencarian = 5;
			// p_tampilan_about = 3;

			cek_sort_angkatan = false; cek_pencarian = false; cek_about = false;
			cek_save = false; cek_save2 = false; cek_print_array = false; cek_print_out = false;
		}

		inline void ambil_data_nama(){
			i = 0;
			this->clrscr();
			cout << tampilan;
			bacafile.open("Data/nama.txt");
			while(!bacafile.eof()){
				getline(bacafile, nama[i]);
				i++;
			}
			bacafile.close();
		}

		inline void ambil_data_utama(){
			cek_save2 = true;
			cek_print_out2 = true;
			i = 0;

			bacafile.open("Data/nim.txt");
			while(!bacafile.eof()){
				bacafile >> nim[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/kelas.txt");
			while(!bacafile.eof()){
				bacafile >> kelas[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/kodep.txt");
			while(!bacafile.eof()){
				bacafile >> kodep[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/rupiah.txt");
			while(!bacafile.eof()){
				bacafile >> rupiah[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/angkatan.txt");
			while(!bacafile.eof()){
				bacafile >> angkatan[i];
				i++;
			}
			bacafile.close();
			n = i - 1;
			y = p_tampilan_catatan;
		}

		inline void about_us(){
			for (int i = 0; i < p_tampilan_about; i++)
				cout << tampilan_about[i];
		}

		inline void select_fitur(){
			cout << "\n\n\n\n\n\n\n\n";
			c = getch();
			panjangmak_baris = 10;

			if (c == 'b')
				cek_about = true;
			else if ( c == 'a')
				cek_sort_angkatan = true;
			else if (c == 'p')
				cek_print_array = true;
			else if (c == 's')
				cek_pencarian = true;
			else if (c == 'v' && cek_save2){
					int n2;
					i = 0;

					bacafile.open("Data/alamat.txt");
					while(!bacafile.eof()){
						bacafile >> alamat[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/nama_bank.txt");
					while(!bacafile.eof()){
						bacafile >> nama_bank[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/kode/nim.txt");
					while(!bacafile.eof()){
						bacafile >> kode_nim[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/kode/kelas.txt");
					while(!bacafile.eof()){
						bacafile >> kode_kelas[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/kode/angkatan.txt");
					while(!bacafile.eof()){
						bacafile >> kode_angkatan[i];
						i++;
					}
					bacafile.close();
					n2 = i - 1;


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
								tukar(&nama_bank[j], &nama_bank[j - 1]);
								tukar(&alamat[j], &alamat[j - 1]);
								tukar(&kode_nim[j], &kode_nim[j - 1]);
								tukar(&kode_kelas[j], &kode_kelas[j - 1]);
								tukar(&kode_angkatan[j], &kode_angkatan[j - 1]);
							}



					for (int i = 0; i < n; i++)
					{
						if (i == 0)
						{
							tulisfile.open("Data/nama.txt");
							tulisfile << nama[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/nim.txt");
							tulisfile << nim[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kelas.txt");
							tulisfile << kelas[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kodep.txt");
							tulisfile << kodep[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/rupiah.txt");
							tulisfile << rupiah[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/angkatan.txt");
							tulisfile << angkatan[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/nama_bank.txt");
							tulisfile << nama_bank[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/alamat.txt");
							tulisfile << alamat[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kode/nim.txt");
							tulisfile << kode_nim[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kode/kelas.txt");
							tulisfile << kode_kelas[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kode/angkatan.txt");
							tulisfile << kode_angkatan[i] << endl;
							tulisfile.close();
						}
						else{
							tulisfile.open("Data/nama.txt", ios::app);
							tulisfile << nama[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/nim.txt", ios::app);
							tulisfile << nim[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kelas.txt", ios::app);
							tulisfile << kelas[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kodep.txt", ios::app);
							tulisfile << kodep[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/rupiah.txt", ios::app);
							tulisfile << rupiah[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/angkatan.txt", ios::app);
							tulisfile << angkatan[i] << endl;
							tulisfile.close();	

							tulisfile.open("Data/nama_bank.txt", ios::app);
							tulisfile << nama_bank[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/alamat.txt", ios::app);
							tulisfile << alamat[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kode/nim.txt", ios::app);
							tulisfile << kode_nim[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kode/kelas.txt", ios::app);
							tulisfile << kode_kelas[i] << endl;
							tulisfile.close();

							tulisfile.open("Data/kode/angkatan.txt", ios::app);
							tulisfile << kode_angkatan[i] << endl;
							tulisfile.close();
						}
					}


					cek_save = true;
			}
			else if (c == 'o' && cek_print_out2){
					int n2;
					i = 0;
					bacafile.open("Data/alamat.txt");
					while(!bacafile.eof()){
						bacafile >> alamat[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/nama_bank.txt");
					while(!bacafile.eof()){
						bacafile >> nama_bank[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/kode/nim.txt");
					while(!bacafile.eof()){
						bacafile >> kode_nim[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/kode/kelas.txt");
					while(!bacafile.eof()){
						bacafile >> kode_kelas[i];
						i++;
					}
					bacafile.close();
					i = 0;

					bacafile.open("Data/kode/angkatan.txt");
					while(!bacafile.eof()){
						bacafile >> kode_angkatan[i];
						i++;
					}
					bacafile.close();
					n2 = i - 1;



					tulisfile.open("PrintOut/admin.txt");
					tulisfile << "\n\n Print out by KELOMPOK 10 A 2020 \n\n";
					tulisfile << "   Detail Pembayaran \n\n";
					tulisfile << "   ";
					tulisfile << kolomOut(nim, i, "NIM");
					tulisfile << kolomOut(nama, i, "NAMA");
					tulisfile << kolomOut(kelas, i, "KLS");
					tulisfile << kolomOut(kodep, i, "KODEP");
					tulisfile << kolomOut(rupiah, i, "RUPIAH");
					tulisfile << kolomOut(angkatan, i, "ANGKATAN");
					tulisfile << endl;
					for (int i = 0; i < n; i++)
					{
						tulisfile << "   ";
						tulisfile << barisOut(nim, i, n);
						tulisfile << barisOut(nama, i, n);
						tulisfile << barisOut(kelas, i, n);
						tulisfile << barisOut(kodep, i, n);
						tulisfile << barisOut(rupiah, i, n);
						tulisfile << barisOut(angkatan, i, n);
						tulisfile << "|" << endl;
					}

					tulisfile << "\n\n\n";
					tulisfile << "   Identitas Pembayar : \n\n";
					for (int i = 0; i < n2; i++)
					{
						DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama = nama[i];
						DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama_bank = nama_bank[i];
						DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_alamat = alamat[i];
					}
					for (int i = 0; i < n2; i++)
					{
						tulisfile << "   " << i + 1 << "\t";
						tulisfile << "Nama\t     : ";
						tulisfile << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama << endl;
						tulisfile << "    \t";
						tulisfile << "Nama Bank  : ";
						tulisfile << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama_bank << endl;
						tulisfile << "    \t";
						tulisfile << "Alamat\t   : ";
						tulisfile << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_alamat << endl;
						tulisfile << "\n";
					}

					tulisfile << "\n\n\n";
					tulisfile << "   Struktur Array : \n\n";
					for (int i = 0; i < n2; i++)
					{
						tulisfile << "   ";
						tulisfile << "DataPembayaran [" << kode_nim[i]  << "]\t[" << kode_kelas[i];
						tulisfile << "]\t[" << kode_angkatan[i] << "]\t[" << kodep[i] << "].nama\t\t\t";
						tulisfile << "<==\t";
						tulisfile << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama << endl;
						tulisfile << "   ";
						tulisfile << "DataPembayaran [" << kode_nim[i]  << "]\t[" << kode_kelas[i];
						tulisfile << "]\t[" << kode_angkatan[i] << "]\t[" << kodep[i] << "].nama_bank\t";
						tulisfile << "<==\t";
						tulisfile << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama_bank << endl;
						tulisfile << "   ";
						tulisfile << "DataPembayaran [" << kode_nim[i]  << "]\t[" << kode_kelas[i];
						tulisfile << "]\t[" << kode_angkatan[i] << "]\t[" << kodep[i] << "].alamat\t\t";
						tulisfile << "<==\t";
						tulisfile << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_alamat << endl;
						tulisfile << "\n";

					}
					tulisfile << "\n\n Print out by KELOMPOK 10 A 2020 \n";
					tulisfile.close();


					cek_print_out = true;
			}
			else if (c == 'd'){
				tulisfile.open("Data/nama.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/nim.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/kelas.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/kodep.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/rupiah.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/angkatan.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/nama_bank.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/alamat.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/kode/nim.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/kode/kelas.txt");
				tulisfile << "";
				tulisfile.close();

				tulisfile.open("Data/kode/angkatan.txt");
				tulisfile << "";
				tulisfile.close();
			}
			else if (c == 'x'){
				if (cek_about)
					cek_about = false;

				if (cek_sort_angkatan)
					cek_sort_angkatan = false;

				if (cek_print_array)
					cek_print_array = false;
			}
		}

		inline void data_empty(){
			cek_sort_angkatan = false;
			cek_pencarian = false;
			cek_print_array = false;
			cek_print_out2 = false;
			cek_save2 = false;

			for (int i = 0; i < p_tampilan_catatan; i++)
			{
				if (i < p_tampilan_datakosong)
				{
					cout << tampilan_datakosong[i];
					cout << setw(tampilan_picu.length() - tampilan_datakosong[i].length() + 1);
					cout << tampilan_catatan[i];

				}
				else{
					cout << setw(tampilan_picu.length() + 1);
					cout << tampilan_catatan[i];
				}
			}
		}

		inline void is_data(){
			panjangmak_baris = 10;
			if (cek_save)
			{
				cek_save = false;
				for (int i = 0; i < p_tampilan_save; i++)
					cout << tampilan_save[i];
			}

			if (cek_print_out)
			{
				cek_print_out = false;
				cout << tampilan_print_out;
			}

			cout << "   ";
			tampilKolom(nim, n, "NIM");
			tampilKolom(nama, n, "NAMA");
			tampilKolom(kelas, n, "KLS");
			tampilKolom(kodep, n, "KODEP");
			tampilKolom(rupiah, n, "RUPIAH");
			tampilKolom(angkatan, n, "ANGKATAN");
			cout << "\n";

			if (n < y){
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
						
						cout << setw(tampilan_picu.length() - panjangmak_baris + 1);
						cout << tampilan_catatan[i];


					}
					else{
						
						cout << setw(tampilan_picu.length() + 1);
						cout << tampilan_catatan[i];

					}
				}
			}
			else {
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
						cout << setw(tampilan_picu.length() - panjangmak_baris + 1);
						cout << tampilan_catatan[i];
					}
					else
						cout << endl;
				}
			}
		}

		inline void fitur_sort_angkatan(){
			cout << "   ";
			tampilKolom(nim, n, "NIM");
			tampilKolom(nama, n, "NAMA");
			tampilKolom(kelas, n, "KLS");
			tampilKolom(kodep, n, "KODEP");
			tampilKolom(rupiah, n, "RUPIAH");
			tampilKolom(angkatan, n, "ANGKATAN");
			cout << "\n";
			y = p_tampilan_catatan_filter_angkatan;

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


			if (n < y){
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
						cout << setw(tampilan_picu.length() - panjangmak_baris + 1);
						cout << tampilan_catatan_filter_angkatan[i];

					}
					else{
						cout << setw(tampilan_picu.length() + 1);
						cout << tampilan_catatan_filter_angkatan[i];
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
						cout << setw(tampilan_picu.length() - panjangmak_baris + 1);
						cout << tampilan_catatan_filter_angkatan[i];
					}
					else{
						cout << endl;
					}
				}
			}
		}

		inline void fitur_print_array(){
			int n2;
			i = 0;

			bacafile.open("Data/alamat.txt");
			while(!bacafile.eof()){
				bacafile >> alamat[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/nama_bank.txt");
			while(!bacafile.eof()){
				bacafile >> nama_bank[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/kode/nim.txt");
			while(!bacafile.eof()){
				bacafile >> kode_nim[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/kode/kelas.txt");
			while(!bacafile.eof()){
				bacafile >> kode_kelas[i];
				i++;
			}
			bacafile.close();
			i = 0;

			bacafile.open("Data/kode/angkatan.txt");
			while(!bacafile.eof()){
				bacafile >> kode_angkatan[i];
				i++;
			}
			bacafile.close();
			n2 = i - 1;


			for (int i = 0; i < n2; i++)
			{
				DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama = nama[i];
				DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama_bank = nama_bank[i];
				DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_alamat = alamat[i];
			}

			string x_data_array = "          Data Array & Struct";
			cout << x_data_array << setw(tampilan_picu.length() - x_data_array.length() + 1);
			cout << tampilan_catatan_filter_angkatan[0];
			cout << setw(tampilan_picu.length() + 1) << tampilan_catatan_filter_angkatan[1];
			cout << setw(tampilan_picu.length() + 1) << tampilan_catatan_filter_angkatan[2];


			string tdp_nama, tdp2;
			for (int i = 0; i < n2; i++)
			{
				stringstream ss;
				ss << i + 1;
				ss >> tdp2;
				if (i == 0){
					tdp_nama = tdp_nama + "   " + tdp2 + "      ";
					tdp_nama += "Nama         : ";
					tdp_nama += DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama;
					cout << tdp_nama << setw(tampilan_picu.length() - tdp_nama.length() + 1);
					cout << tampilan_catatan_filter_angkatan[3];

					tdp_nama = "";
					tdp_nama += "          Nama Bank    : ";
					tdp_nama += DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama_bank;
					cout << tdp_nama << setw(tampilan_picu.length() - tdp_nama.length() + 1);
					cout << tampilan_catatan_filter_angkatan[4];


					tdp_nama = "";
					tdp_nama += "          Alamat       : ";
					tdp_nama += DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_alamat;
					cout << tdp_nama << setw(tampilan_picu.length() - tdp_nama.length() + 1);
					cout << tampilan_catatan_filter_angkatan[5];
					cout << endl;
				}
				else{
					cout << "   " << i + 1 << "      ";
					cout << "Nama         : ";
					cout << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama << endl;
					if (i > 9){
						cout << "           Nama Bank    : ";
						cout << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama_bank << endl;
						cout << "           Alamat       : ";
						cout << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_alamat << endl;
					}
					else {
						cout << "          Nama Bank    : ";
						cout << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_nama_bank << endl;
						cout << "          Alamat       : ";
						cout << DataPembayaran[kode_nim[i]][kode_kelas[i]][kode_angkatan[i]][kodep[i]].s_alamat << endl << endl;
					}
				} 
			}
		}

		inline void fitur_pencarian(){
			string key = "";
			string ambildata = "";
			char c2;
			bool ketemu = false, muncul = true;


			while(true){
				clrscr();
				cout << tampilan;
				cout << tampilan_pencarian[0];
				cout << tampilan_pencarian[1] << "|";
				cout << setw(tampilan_pencarian[2].length() - tampilan_pencarian[1].length() - 1) << "|";
				cout << tampilan_pencarian[3];
				cout << tampilan_pencarian[4];

				if (key == "ext0"){
					cek_pencarian = false;
					break;
				}

				else if (key != ""){
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
							cout << "\n\n    >>>>>>>>>>>>>>>       Kata Kunci '"<< key <<"' tidak ditemukan :)      <<<<<<<<<<<<<<<";	
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
				for (int i = 0; i < 4; ++i)
					tampilan_pencarian[1].erase(tampilan_pencarian[1].length() - 1, 1);
				panjangmak_baris = 10;
				// continue;
				exit_pencarian = true;
			}
		}

};