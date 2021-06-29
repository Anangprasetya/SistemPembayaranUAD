class Var : protected DesainClient, public ConfigApp{
	protected :
		char c;
		bool cekend;
		ofstream tulis;


	protected :
		string nama, nim, kelas, angkatan;
		string rupiah, kodep, nama_bank, alamat;
		
		bool ceknama, cekkelas, cekrupiah;
		bool cekangkatan, cekkodep, ceknim;
		bool ceknamabank, cekalamat;
};