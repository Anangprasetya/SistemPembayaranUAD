#include "../App/client_app.h"

class MyMethod : protected Var {
	protected :
		// inline void clrscr(){
		// 	system("clear");
		// }

		inline void tampil(string x1, string x2, bool cursor = false){
			cout << x1;
			if (cursor){
				cout << "|";
				cout << setw(x2.length() - x1.length());
			}else{
				cout << setw(x2.length() - x1.length() + 1);
			}

			cout << "||\n";

		}

};