using namespace std;

class DesainClient {
	protected :
		string input_kodep;
		string input_angkatan ;
		string input_kelas ;
		string input_nim ;
		string input_rupiah ;
		string input_nama ;
		string input_nama_bank ;
		string input_alamat ;
		string flashmessage;
		string tampilan_space ;
		string picuTampilan;
		string tampilan;


		inline void deklarasi_var_desain(){
			input_kodep = " ||    KODE PEMBAYARAN          : ";
			input_angkatan = " ||    ANGKATAN                 : ";
			input_kelas = " ||    KELAS                    : ";
			input_nim = " ||    NIM                      : ";
			input_rupiah = " ||    Jumlah Pembayaran (Juta) : ";
			input_nama = " ||    NAMA                     : ";
			input_nama_bank = " ||    NAMA BANK                : ";
			input_alamat = " ||    ALAMAT                   : ";
			flashmessage = " ||     -------------------------------------------                           ||\n ||     |  Selamat Pembayaran Anda Berhasil !!!   |                           ||\n ||     -------------------------------------------                           ||\n ||                                                                           ||\n ||                                                                           ||\n";
			tampilan_space = " ||                                                                           ||\n";
			picuTampilan = " ||===========================================================================||";
			tampilan = "\n ||===========================================================================||\n ||=====================     APLIKASI PEMBAYARAN UAD     =====================||\n ||=====================           Kelompok 10           =====================||\n ||=====================            A - 2020             =====================||\n ||===========================================================================||\n ||                                                                           ||\n";

		}
};