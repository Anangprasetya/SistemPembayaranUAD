// L
#include "myconio.h"

// W
// #include <conio.h>

const int tampung = 14;
const int bny_nim = 170;
const int bny_kelas = 9;
const int bny_angkatan = 11;
const int bny_kodep = 7;


class ConfigApp {
	protected :
		int enter, backspace;

		inline void tombol(){
			// L
			enter = 10;
			backspace = 127;

			// W
			// enter = 13;
			// backspace = 8;
		}

		inline void clrscr(){
			//L
			system("clear");

			//W
			// system("cls");
		}
};
