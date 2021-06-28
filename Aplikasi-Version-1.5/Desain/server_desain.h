using namespace std;

class DesainServer {
	protected :
		int panjangmak_baris;

		int i, n, y;
		int p_tampilan_catatan;
		int p_tampilan_datakosong;
		int p_tampilan_save;
		int p_tampilan_catatan_filter_angkatan;
		int p_tampilan_pencarian;
		int p_tampilan_about;

		string tampilan_print_out;
		string tampilan_save[4];
		string tampilan_about[3] ;
		string tampilan_pencarian[5] ;
		string tampilan_catatan_filter_angkatan[6] ;
		string tampilan_datakosong[4] ;
		string tampilan_catatan[13];
		string tampilan_picu;
		string tampilan_space ;
		string tampilan;



		inline void var_desain(){
			panjangmak_baris = 10;

			p_tampilan_catatan = 13;
			p_tampilan_datakosong = 4;
			p_tampilan_save = 4;
			p_tampilan_catatan_filter_angkatan = 6;
			p_tampilan_pencarian = 5;
			p_tampilan_about = 3;

			tampilan_print_out = "                                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n                                        Data Mahasiswa Berhasil Di Print Out  !  \n                                                                              \n                                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
			tampilan_save[0] = "                                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
			tampilan_save[1] = "                                        Data Mahasiswa Berhasil Di Simpan  !  \n";
			tampilan_save[2] = "                                                                              \n";
			tampilan_save[3] = "                                      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
		


			tampilan_about[0] = "                                                                                               !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n   ````````````````````````````````````````````````````````````````````````                    ! Catatan Aplikasi                     !\n   ```                          TENTANG KAMI                            ```                    ! ****************                     !\n   ```------------------------------------------------------------------```                    !                                      !\n   ```                                                                  ```                    ! Kembali                   >>   x     !\n";
			tampilan_about[1] = "   ```                        App10 Version 1.5                         ```                    !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n   ```                    Copyright 2021 App10 Stable                   ```\n   ```                    Created KELOMPOK 10 A 2020                    ```\n   ```                                                                  ```\n";
			tampilan_about[2] = "   ```    Nama Kelompok  :                                              ```\n   ```           Alfi Maulana Akbar  -  2000018026                      ```\n   ```           Imam Ramadhan       -  2000018045                      ```\n   ```           Anang Nur Prasetya  -  2000018045                      ```\n   ```                                                                  ```\n   ```                                                                  ```\n   ```------------------------------------------------------------------```\n   ````````````````````````````````````````````````````````````````````````\n";

			tampilan_pencarian[0] = "                                                                                               !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n                                                                                               ! Catatan Aplikasi                     !\n    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                          ! ****************                     !\n";
			tampilan_pencarian[1] = "    |  Input Pencarian : ";
			tampilan_pencarian[2] = "    |  Input Pencarian :                                            |";
			tampilan_pencarian[3] = "                          !                                      !\n";
			tampilan_pencarian[4] = "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                          ! Kembali                   >>   ext0  !\n                                                                                               !~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n";
			

			tampilan_catatan_filter_angkatan[0] = "!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n";
			tampilan_catatan_filter_angkatan[1] = "! Catatan Aplikasi                     !\n";
			tampilan_catatan_filter_angkatan[2] = "! ****************                     !\n";
			tampilan_catatan_filter_angkatan[3] = "!                                      !\n";
			tampilan_catatan_filter_angkatan[4] = "! Kembali                   >>   x     !\n";
			tampilan_catatan_filter_angkatan[5] = "!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n";


			tampilan_datakosong[0] = "                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
			tampilan_datakosong[1] = "                       Tidak Ada Data Yang Tersedia  !  ";
			tampilan_datakosong[2] = "                                                        ";
			tampilan_datakosong[3] = "                     ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

			tampilan_catatan[0] = "!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n";
			tampilan_catatan[1] = "! Catatan Aplikasi                     !\n";
			tampilan_catatan[2] = "! ****************                     !\n";
			tampilan_catatan[3] = "!                                      !\n";
			tampilan_catatan[4] = "! Refresh Tampilan          >>   r     !\n";
			tampilan_catatan[5] = "! Sort Angkatan             >>   a     !\n";
			tampilan_catatan[6] = "! Pencarian                 >>   s     !\n";
			tampilan_catatan[7] = "! Print Array               >>   p     !\n";
			tampilan_catatan[8] = "! Simpan Data               >>   v     !\n";
			tampilan_catatan[9] = "! Print Out                 >>   o     !\n";
			tampilan_catatan[10] = "! Hapus Semua               >>   d     !\n";
			tampilan_catatan[11] = "! Tentang Kami              >>   b     !\n";
			tampilan_catatan[12] = "!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~!\n";



			tampilan_picu = "   ||================================================================================================================================||";
			tampilan_space = "   ||                                                                                                      ||\n";
			tampilan = "\n   ||================================================================================================================================||\n   ||========================================|         DASHBOARD ADMIN KELOMPOK 10          |========================================||\n   ||========================================|                  KELAS - A                   |========================================||\n   ||========================================|                ANGKATAN 2020                 |========================================||\n   ||================================================================================================================================||\n   ||========================================|              Pak Wahyu Pujiono               |========================================||\n   ||========================================|           UNIVERSITAS AHMAD DAHLAN           |========================================||\n   ||================================================================================================================================||\n\n";
		}
		
};