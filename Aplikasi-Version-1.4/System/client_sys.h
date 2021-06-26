class SystemClient : protected MyMethod {
	protected :
		inline void deklarasi_atas(){
			this->tombol();
			cekend = false;
		}

		inline void deklarasi_bawah(){
			nama = ""; nim = ""; kelas = ""; angkatan = ""; rupiah = ""; 
			kodep = ""; nama_bank = ""; alamat = "";

			this->deklarasi_var_desain();

			ceknama = false, cekkelas = false, cekrupiah = false;
			cekangkatan = false, cekkodep = true, ceknim = false;
			ceknamabank = false, cekalamat = false;
		}


		inline void method_input_kodep(){
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


		inline void method_input_angkatan(){
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


		inline void method_input_kelas(){
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


		inline void method_input_nim(){
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


		inline void method_input_rupiah(){
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


		inline void method_input_nama(){
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


		inline void method_input_nama_bank(){
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


		inline void method_input_alamat(){
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


		inline void method_simpan_kode(){
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
			tulis.open("Data/kode/nim.txt", ios::app);
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

			tulis.open("Data/kode/kelas.txt", ios::app);
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
			tulis.open("Data/kode/angkatan.txt", ios::app);
			tulis << t_angktn << endl;
			tulis.close();
		}


		inline void method_simpan_data_utama(){
			// Data Utama
			tulis.open("Data/nama.txt", ios::app);
			tulis << nama << endl;
			tulis.close();

			tulis.open("Data/nim.txt", ios::app);
			tulis << nim << endl;
			tulis.close();

			tulis.open("Data/kelas.txt", ios::app);
			tulis << kelas << endl;
			tulis.close();

			tulis.open("Data/angkatan.txt", ios::app);
			tulis << angkatan << endl;
			tulis.close();

			tulis.open("Data/kodep.txt", ios::app);
			tulis << kodep << endl;
			tulis.close();

			tulis.open("Data/rupiah.txt", ios::app);
			tulis << rupiah << endl;
			tulis.close();

			tulis.open("Data/nama_bank.txt", ios::app);
			tulis << nama_bank << endl;
			tulis.close();

			tulis.open("Data/alamat.txt", ios::app);
			tulis << alamat << endl;
			tulis.close();
		}


		inline void method_printOut_user(){
			tulis.open("PrintOut/user.txt");
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
		}


};