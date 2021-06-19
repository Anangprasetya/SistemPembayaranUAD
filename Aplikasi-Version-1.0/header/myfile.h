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
	for (int i = 0; i < n_banyak; i++)
		if (b < to_string(data[i]).length())
			b = to_string(data[i]).length();

	cout << x;
	for (int i = x.length(); i < b + 4; i++)
		cout << " ";
}

inline void tampilKolom(double data[], int n_banyak, string col){
	string x = "  ";
	x += col;
	int b = 0;
	for (int i = 0; i < n_banyak; i++)
		if (b < to_string(data[i]).length())
			b = to_string(data[i]).length();

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
	string s = to_string(data[idx]);
	cout << "|  ";
	cout << s;
	for (int j = 0; j < n_banyak; j++)
		if (b < to_string(data[j]).length())
			b = to_string(data[j]).length();

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