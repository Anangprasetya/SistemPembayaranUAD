#include "../Desain/server_desain.h"
#include "../Config/Config.h"

class Var : protected DesainServer, public ConfigApp {
	protected :
		ifstream bacafile;
		ofstream tulisfile;

		struct Pembayaran
		{
			string s_nama, s_nama_bank;
			string s_alamat;
		};

		Pembayaran DataPembayaran[170][9][11][5];

		char c;
		int banyak;
		// int enter, backspace;


		string nama[30];
		string nama_bank[30];
		string alamat[30];
		string nim[30];
		string kelas[30];
		int kodep[30];
		int angkatan[30];
		double rupiah[30];
		int kode_nim[30], kode_kelas[30], kode_angkatan[30];


	protected :
		bool cek_sort_angkatan, cek_pencarian, cek_about;
		bool cek_save, cek_save2, cek_print_array, cek_print_out;
		bool cek_print_out2;
		bool exit_pencarian;

};