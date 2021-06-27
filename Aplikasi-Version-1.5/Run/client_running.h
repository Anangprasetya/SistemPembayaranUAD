#include "../Desain/client_desain.h"
#include "../Config/Config.h"
#include "../App/client_app.h"
#include "../Function/client_func.h"
#include "../System/client_sys.h"


class Client : private SystemClient {
	public :
		void run(){
			this->deklarasi_atas();
			this->deklarasi_bawah();

			while(true){
				this->clrscr();
				cout << this->tampilan;

				if (cekkodep && cekend){
					cout << this->flashmessage;
					this->cekend = false;
				}

				if (cekkodep){
					this->method_input_kodep();
				}
				else if (cekend){
					this->method_simpan_kode();
					this->method_simpan_data_utama();
					this->method_printOut_user();

					this->deklarasi_bawah();
				}
				else if (cekalamat){
					this->method_input_alamat();
				}
				else if (ceknamabank){
					this->method_input_nama_bank();
				}
				else if (ceknama){
					this->method_input_nama();
				}
				else if (cekrupiah){
					this->method_input_rupiah();
				}
				else if (ceknim){
					this->method_input_nim();
				}
				else if (cekkelas){
					this->method_input_kelas();
				}
				else{
					this->method_input_angkatan();
				}

			}
		}
};