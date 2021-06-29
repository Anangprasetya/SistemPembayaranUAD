class Var : protected DesainServer, public ConfigApp {
	protected :
		ifstream bacafile;
		ofstream tulisfile;

		struct Pembayaran
		{
			string s_nama, s_nama_bank;
			string s_alamat;
		};

		Pembayaran DataPembayaran[bny_nim][bny_kelas][bny_angkatan][bny_kodep];

		char c;
		int banyak;

		string nama[tampung];
		string nama_bank[tampung];
		string alamat[tampung];
		string nim[tampung];
		string kelas[tampung];
		int kodep[tampung];
		int angkatan[tampung];
		double rupiah[tampung];
		int kode_nim[tampung], kode_kelas[tampung], kode_angkatan[tampung];


	protected :
		bool cek_sort_angkatan, cek_pencarian, cek_about;
		bool cek_save, cek_save2, cek_print_array, cek_print_out;
		bool cek_print_out2;
		bool exit_pencarian;

};