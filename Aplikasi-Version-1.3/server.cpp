#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include "myconio.h"
#include "System/server_sys.h"
using namespace std;


class Server : private SystemServer {
	public :
		void run(){
			this->deklarasi_var();
			this->var_desain();
			while(true){
				this->ambil_data_nama();
				if (cek_about){
					this->about_us();
				}
				else if (i - 1 == 0){
					this->data_empty();
				}
				else {
					this->ambil_data_utama();

					if (cek_sort_angkatan){
						this->fitur_sort_angkatan();
					}
					else if (cek_print_array){
						this->fitur_print_array();
					}
					else if (cek_pencarian){
						exit_pencarian = false;
						this->fitur_pencarian();

						if (exit_pencarian)
							continue;

					}
					else {
						this->is_data();
					}

				}



				this->select_fitur();




				// cout << "server run\n";
				// break;
			}
		}
};

int main(){

	Server app;
	app.run();

	return 0;
}