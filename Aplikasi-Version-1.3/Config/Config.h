
class ConfigApp {
	protected :
		int enter, backspace;

		inline void tombol(){
			// W
			// enter = 13;
			// backspace = 8;

			// L
			enter = 10;
			backspace = 127;
		}

		inline void clrscr(){
			//W
			// system("cls");

			//L
			system("clear");
		}
};