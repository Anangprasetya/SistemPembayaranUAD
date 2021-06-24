#include "../Desain/client_desain.h"
#include "../Config/Config.h"

class Var : protected DesainClient, public ConfigApp{
	protected :
		char c;
		// int enter, backspace;
		bool cekend;
		ofstream tulis;


	protected :
		string nama, nim, kelas, angkatan;
		string rupiah, kodep, nama_bank, alamat;
		
		bool ceknama, cekkelas, cekrupiah;
		bool cekangkatan, cekkodep, ceknim;
		bool ceknamabank, cekalamat;
};