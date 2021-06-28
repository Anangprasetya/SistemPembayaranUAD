class MyMethod : protected Var {
	protected :
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
			string t;
			for (int i = 0; i < n_banyak; i++){
				stringstream ss;
				ss << data[i];
				ss >> t;
				if (b < t.length())
					b = t.length();
			}

			cout << x;
			for (int i = x.length(); i < b + 4; i++)
				cout << " ";
		}
		inline void tampilKolom(double data[], int n_banyak, string col){
			string x = "  ";
			x += col;
			int b = 0;
			string t;
			for (int i = 0; i < n_banyak; i++){
				stringstream ss;
				ss << data[i];
				ss >> t;
				if (b < t.length())
					b = t.length();
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
			string s, t;
			stringstream ss;
			ss << data[idx];
			ss >> s;
			cout << "|  ";
			cout << s;
			for (int j = 0; j < n_banyak; j++){
				stringstream ss;
				ss << data[j];
				ss >> t;
				if (b < t.length())
					b = t.length();
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


		inline string kolomOut(string data[], int n_banyak, string col){
			string hasilout;
			string x = "  ";
			x += col;
			int b = 0;
			for (int i = 0; i < n_banyak; ++i)
				if (b < data[i].length())
					b = data[i].length();

			 hasilout += x;
			for (int i = x.length(); i < b + 4; i++)
				 hasilout += " ";
			 hasilout += " ";

			 return hasilout;
		}
		inline string kolomOut(int data[], int n_banyak, string col){
			string hasilout;
			string x = "  ";
			x += col;
			int b = 0;
			string t;
			for (int i = 0; i < n_banyak; i++){
				stringstream ss;
				ss << data[i];
				ss >> t;
				if (b < t.length())
					b = t.length();
			}

			hasilout += x;
			for (int i = x.length(); i < b + 4; i++)
				hasilout += " ";

			return hasilout;
		}
		inline string kolomOut(double data[], int n_banyak, string col){
			string hasilout;
			string x = "  ";
			x += col;
			int b = 0;
			string t;
			for (int i = 0; i < n_banyak; i++){
				stringstream ss;
				ss << data[i];
				ss >> t;
				if (b < t.length())
					b = t.length();
			}

			hasilout += x;
			for (int i = x.length(); i < b + 4; i++)
				hasilout += " ";

			return hasilout;
		}



		inline string barisOut(string data[], int idx, int n_banyak){
			string hasilout;
			int b = 0;
			hasilout += "|  ";
			hasilout += data[idx];
			for (int j = 0; j < n_banyak; j++)
				if (b < data[j].length())
					b = data[j].length();

			if (idx == 0)
				panjangmak_baris += b + 4;

			for (int j = data[idx].length(); j < b + 2; j++)
				hasilout += " ";


			return hasilout;
		}
		inline string barisOut(double data[], int idx, int n_banyak){
			string hasilout;
			int b = 0;
			string s, t;
			stringstream ss;
			ss << data[idx];
			ss >> s;
			hasilout += "|  ";
			hasilout += s;
			for (int j = 0; j < n_banyak; j++){
				stringstream ss;
				ss << data[j];
				ss >> t;
				if (b < t.length())
					b = t.length();
			}

			if (idx == 0)
				panjangmak_baris += b + 4;

			for (int j = s.length(); j < b + 2; j++)
				hasilout += " ";


			return hasilout;
		}
		inline string barisOut(int data[], int idx, int n_banyak){
			string hasilout;
			int cek_panjang = 0;
			int b  = 0;
			int am;
			hasilout += "|  ";
			string t;
			stringstream ss;
			ss << data[idx];
			ss >> t;
			hasilout += t;
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
				hasilout += " ";


			return hasilout;
		}


		inline string strlow(string x){
		  for (int i = 0; i < x.length(); i++)
		    if (x[i] >= 'A' && x[i] <= 'Z')
		       x[i] = x[i] + 32;

		  return x;
		}
};