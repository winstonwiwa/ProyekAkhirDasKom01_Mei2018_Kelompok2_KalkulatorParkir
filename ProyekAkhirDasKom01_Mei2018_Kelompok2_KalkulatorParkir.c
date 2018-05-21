#include<stdio.h>
int main(){
	int menit1,jam1,menit2,jam2,harimasuk=0,harikeluar=0,kendaraan=0,bayar,seminggu=0,jam,hari; //Deklarasi variabel dengan tipe data integer
	char c; //Deklarasi variabel char "c" untuk menyimpan input pilihan menu utama
	char d; //Deklarasi variabel char "d" untuk menyimpan input pilihan konfirmasi keluar program
	char pilihan_kendaraan; //Deklarasi variabel pilihan kendaraan dengan tipe data string
	char pilihan_harimasuk; //Deklarasi variabel pilihan hari masuk dengan tipe data string
	char pilihan_harikeluar; //Deklarasi variabel pilihan hari keluar dengan tipe data string
	char pilihan_seminggu; //Deklarasi variabel pilihan seminggu dengan tipe data string
	for(;;){ //Fungsi for digunakan untuk menciptakan loop pada keseluruhan program agar program dapat keluar sesuai keinginan user
	
		//MENU UTAMA
		system("cls"); //Perintah ini digunakan untuk mengosongkan layar dari karakter apapun yang ada sebelumnya
		printf("\n\n\n\n\n\n"); //Perintah ini digunakan untuk membuat jarak spasi
		printf("                                 ===============================\n"); //Barisan fungsi print digunakan untuk menampilkan pilihan menu awal bagi user
		printf("                                 ||                           ||\n");
		printf("                                 ||        Welcome to C!      ||\n");
		printf("                                 ||      Kalkulator parkir    ||\n");
		printf("                                 ||                           ||\n");
		printf("                                 ||    [1] Mulai              ||\n");
		printf("                                 ||    [2] Pusat Bantuan      ||\n");
		printf("                                 ||    [3] Quit               ||\n");
		printf("                                 ||                           ||\n");
		printf("                                 ||                           ||\n");
		printf("                                 ||                           ||\n");
		printf("                                 ===============================\n");
		printf("                                 Masukan pilihan anda di sini: ");
		c=getch(); //Perintah ini digunakan untuk mengambil dan menyimpan input dari user pada variabel "c"
		switch(c){ //Fungsi switch ini digunakan untuk membaca nilai pada variabel "c" dan menjalankan program yang sesuai dengan nilai tersebut
		
			//PROGRAM UTAMA (MULAI)
			case '1' :{ //Fungsi ini dijalankan bila variabel "c" memiliki nilai "1"
			
				//MENU PILIHAN JENIS KENDARAAN
				while(kendaraan!=1&&kendaraan!=2){ //Fungsi while ini digunakan untuk menciptakan loop sebagai error handling agar pilihan jenis kendaraan sama dengan "1" atau "2"
					system("cls");
					printf("\n\n\n\n\n\n");
					printf("                                 ========================================\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||          Welcome to C!             ||\n");
					printf("                                 ||         Kalkulator parkir          ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||   Masukan Jenis Kendaraan Anda     ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||     [1] Sepeda Motor               ||\n");
					printf("                                 ||     [2] Mobil                      ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ========================================\n");
					printf("                                      Masukan pilihan anda di sini: ");
					scanf("%s",&pilihan_kendaraan); //Fungsi scan ini digunakan untuk mengambil dan menyimpan pilihan jenis kendaraan pada variabel string "pilihan_kendaraan"
					switch(pilihan_kendaraan){ //Fungsi switch ini digunakan untuk membaca nilai variabel "pilihan_kendaraan" dan menjalankan program yang sesuai dengan nilai tersebut
						case '1': //Fungsi ini dijalankan bila variabel "pilihan_kendaraan" bernilai "1"
							kendaraan=1; //Perintah ini digunakan untuk membuat variabel "kendaraan" bernilai "1"
							break; //Perintah ini digunakan untuk keluar dari fungsi switch "pilihan_kendaraan"
						case '2': //Fungsi ini dijalankan bila variabel "pilihan_kendaraan bernilai "2"
							kendaraan=2; //Perintah ini digunakan untuk membuat variaabel "kendaraan" bernilai "2"
							break;
						default : //Fungsi ini dijalankan bila variabel "pilihan_kendaraan" bernilai selain "1" dan "2"
							system("cls");
							printf("\n\n\n\n\n\n");
							printf("                                    Input anda yang sebelumnya invalid!\n"); //Fungsi print digunakan untuk menampilkan karakter
							printf("                                    Tekan tombol apapun untuk melanjutkan\n");
							getch(); //Perintah ini digunakan untuk menghentikan(pause) program yang sedang berjalan hingga ada input dari user berupa penekanan tombol pada keyboard
							c=getch();
					}			
				}
				
				//INPUT WAKTU MASUK PARKIR			
				system("cls");
				printf("                                    Input jam dan menit anda mulai parkir: \n");
				printf("                                           [Contoh input : 13.45]\n");
				printf("                                                     ");
				scanf("%d.%d",&jam1,&menit1); //Perintah ini digunakan untuk mengambil dan menyimpan input jam dan menit masuk masing-masing pada variabel "jam1" dan "menit1"
				while(jam1<0||jam1>23||menit1<0||menit1>59){ //Fungsi while ini digunakan untuk menciptakan loop sebagai error handling agar input waktu masuk bernilai pada rentang 00.00 - 23.59
					system("cls");
					printf("                                                   invalid!\n");
					printf("                                    Input jam dan menit anda mulai parkir: \n");
					printf("                                           [Contoh input : 13.45]\n");
					printf("                                                      ");
					scanf("%d.%d",&jam1,&menit1);
				}
				
				//MENU PILIHAN HARI MULAI PARKIR
				system("cls");	
				while(harimasuk<1||harimasuk>7){ //Fungsi while digunakan untuk menciptakan loop sebagai error handling agar input variabel string "pilihan_harimasuk" bernilai "1" hingga "7"
					system("cls");
					printf("\n\n\n\n\n\n");
					printf("                                 =================================\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||        Welcome to C!        ||\n");
					printf("                                 ||      Kalkulator parkir      ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||      Hari Mulai Parkir      ||\n");
					printf("                                 ||    [1] Senin                ||\n");
					printf("                                 ||    [2] Selasa               ||\n");
					printf("                                 ||    [3] Rabu                 ||\n");
					printf("                                 ||    [4] Kamis                ||\n");
					printf("                                 ||    [5] Jumat                ||\n");
					printf("                                 ||    [6] Sabtu                ||\n");
					printf("                                 ||    [7] Minggu               ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 =================================\n");
					printf("                                 Masukan pilihan anda di sini: ");
					scanf("%s",&pilihan_harimasuk); //Perintah ini digunakan untuk mengambil dan menyimpan input pada variabel string "pilihan_harimasuk"
					switch(pilihan_harimasuk){ //Fungsi switch ini digunakan untuk membaca dan menjalankan program yang sesuai dengan nilai variabel "pilihan_harimasuk"
						case '1': //Fungsi ini berjalan bila variabel "pilihan_harimasuk" bernilai "1"
							harimasuk=1; //Perintah ini digunakan untuk membuat variabel "harimasuk" bernilai "1"
							break;
						case '2':
							harimasuk=2;
							break;
						case '3':
							harimasuk=3;
							break;
						case '4':
							harimasuk=4;
							break;
						case '5':
							harimasuk=5;
							break;
						case '6':
							harimasuk=6;
							break;
						case '7':
							harimasuk=7;
							break;
						default : //Fungsi ini berjalan saat nilai variabel "pilihan_harimasuk" bernilai selain "1" hingga "7"
							system("cls");
							printf("\n\n\n\n\n\n");
							printf("                                    Input anda yang sebelumnya invalid!\n");
							printf("                                    Tekan tombol apapun untuk melanjutkan\n");
							getch();
							c=getch();
					}
				}
				
				//INPUT WAKTU KELUAR PARKIR	
				system("cls");		
				printf("                                    Input jam dan menit anda keluar parkir: \n");
				printf("                                           [Contoh input : 13.45]\n");
				printf("                                                       ");
				scanf("%d.%d",&jam2,&menit2); //Fungsi scan ini mengambil dan menyimpan input jam dan menit keluar parkir pada variabel "jam2" dan "menit2"
				while(jam2<0||jam2>23||menit2<0||menit2>59){ //Fungsi while ini digunakan untuk menciptakan loop sebagai error handling agar input waktu keluar bernilai pada rentang 00.00 - 23.59
					system("cls");
					printf("                                                   invalid!\n");
					printf("                                    Input jam dan menit anda keluar parkir: \n");
					printf("                                           [Contoh input : 13.45]\n");
					printf("                                                       ");
					scanf("%d.%d",&jam2,&menit2);
				}
				
				//MENU PILIHAN HARI KELUAR PARKIR	
				system("cls");	
				while(harikeluar<1||harikeluar>7){ //Fungsi while digunakan untuk menciptakan loop sebagai error handling agar input variabel string "pilihan_harikeluar" bernilai "1" hingga "7"
					system("cls");
					printf("\n\n\n\n\n\n");
					printf("                                 =================================\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||        Welcome to C!        ||\n");
					printf("                                 ||      Kalkulator parkir      ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||      Hari Keluar Parkir     ||\n");
					printf("                                 ||    [1] Senin                ||\n");
					printf("                                 ||    [2] Selasa               ||\n");
					printf("                                 ||    [3] Rabu                 ||\n");
					printf("                                 ||    [4] Kamis                ||\n");
					printf("                                 ||    [5] Jumat                ||\n");
					printf("                                 ||    [6] Sabtu                ||\n");
					printf("                                 ||    [7] Minggu               ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 ||                             ||\n");
					printf("                                 =================================\n");
					printf("                                 Masukan pilihan anda di sini: ");
					scanf("%s",&pilihan_harikeluar); //Perintah ini digunakan untuk mengambil dan menyimpan input pada variabel string "pilihan_harikeluar"
					switch(pilihan_harikeluar){ //Fungsi switch ini digunakan untuk membaca dan menjalankan program yang sesuai dengan nilai variabel "pilihan_harikeluar"
						case '1': //Fungsi ini berjalan bila variabel "pilihan_harikeluar" bernilai "1"
							harikeluar=1; //Perintah ini digunakan untuk membuat variabel "harikeluar" bernilai "1'
							break;
						case '2':
							harikeluar=2;
							break;
						case '3':
							harikeluar=3;
							break;
						case '4':
							harikeluar=4;
							break;
						case '5':
							harikeluar=5;
							break;
						case '6':
							harikeluar=6;
							break;
						case '7':
							harikeluar=7;
							break;
						default : //Fungsi ini berjalan saat nilai variabel "pilihan_harimasuk" bernilai selain "1" hingga "7"
							system("cls");
							printf("\n\n\n\n\n\n");
							printf("                                    Input anda yang sebelumnya invalid!\n");
							printf("                                    Tekan tombol apapun untuk melanjutkan\n");
							getch();
							c=getch();
					}
				}
				
				//MENU PILIHAN LAMA PARKIR(SEMINGGU)
				system("cls");			
				if(harimasuk==harikeluar){ //Fungsi kondisional if ini berjalan bila nilai variabel "harimasuk" sama dengan "harikeluar"
					printf("\n\n\n\n\n\n");
					printf("                                 ========================================\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||          Welcome to C!             ||\n");
					printf("                                 ||         Kalkulator parkir          ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||   Apakah lama parkir lebih atau    ||\n");
					printf("                                 ||   sama dengan 7 hari?              ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||     [1] Iya                        ||\n");
					printf("                                 ||     [2] Tidak                      ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ||                                    ||\n");
					printf("                                 ========================================\n");
					printf("                                      Masukan pilihan anda di sini: ");
					scanf("%d",&seminggu); //Fungsi scan ini digunakan untuk mengambil dan menyimpan input pada variabel integer "seminggu"
					while(seminggu!=1&&seminggu!=2){ //Fungsi while ini digunakan untuk menciptakan loop sebagai error handling agar variabel "seminggu" bernilai "1" atau "2"
						system("cls");
						printf("\n\n\n\n\n\n");
						printf("	                                Input anda yang sebelumnya invalid!\n");
						printf("	                                Tekan tombol apapun untuk melanjutkan\n");
						getch();
						system("cls");		
						printf("\n\n\n\n\n\n");
						printf("                                 ========================================\n");
						printf("                                 ||                                    ||\n");
						printf("                                 ||          Welcome to C!             ||\n");
						printf("                                 ||         Kalkulator parkir          ||\n");
						printf("                                 ||                                    ||\n");
						printf("                                 ||   Apakah lama parkir lebih atau    ||\n");
						printf("                                 ||   sama dengan 7 hari?              ||\n");
						printf("                                 ||                                    ||\n");
						printf("                                 ||     [1] Iya                        ||\n");
						printf("                                 ||     [2] Tidak                      ||\n");
						printf("                                 ||                                    ||\n");
						printf("                                 ||                                    ||\n");
						printf("                                 ========================================\n");
						printf("                                      Masukan pilihan anda di sini: ");
						scanf("%s",&pilihan_seminggu); //Fungsi scan ini digunakan untuk mengambil dan menyimpan input pada variabel string "pilihan_seminggu"
						switch(pilihan_seminggu){ //Fungsi switch ini membaca nilai variabel "pilihan_seminggu" dan menjalankan program yang sesuai dengan nilai tersebut
						case '1': //Fungsi ini dijalankan bila variabel "pilihan_seminggu" bernilai "1"
							seminggu=1; //Perintah ini digunakan untuk membuat variabel "seminggu" bernilai "1"
							break;
						case '2':
							seminggu=2;
							break;
						default : //Perintah ini berjalan bila nilai variabel "pilihan_seminggu" bernilai selain "1" dan "2"
							system("cls");
							printf("\n\n\n\n\n\n");
							printf("	                                Input anda yang sebelumnya invalid!\n");
							printf("	                                Tekan tombol apapun untuk melanjutkan\n");
							getch();
							c=getch();
						}
					}
				}

				//PERHITUNGAN HARGA PARKIR
				if(seminggu==2||seminggu==0){ 
					if(harikeluar<harimasuk){ 
						if(jam2>jam1&&menit2>=menit1){
							hari=7-harimasuk+harikeluar;
						}
						if(jam2<jam1){
							hari=6-harimasuk+harikeluar;	
						}
						if(jam1==jam2){
							if(menit1<=menit2){
								hari=7-harimasuk+harikeluar;
							}
							if(menit1>menit2){
								hari=6-harimasuk+harikeluar;		
							}	
						}
					}
					if(harikeluar>harimasuk){
						hari=harikeluar-harimasuk;
					}
					if(harikeluar==harimasuk){
						hari=0;
					}
					if(menit2>=menit1){
						jam=24*hari-jam1+jam2;
					}
					if(menit2<menit1){
						jam=24*hari-jam1+jam2-1;
					}
				}
				if(seminggu == 1){
					if(harikeluar==harimasuk){
						if(jam1<jam2){
							hari=7;
							jam=24*hari-jam1+jam2;
						}
						else if(jam1>jam2){
							hari=6;
							jam=24*hari-jam1+jam2;
						}
						else if(jam1==jam2){
							if(menit1<=menit2){
								hari=7;
								jam=24*hari-jam1+jam2;
							}
							if(menit1>menit2){
								hari=6;
								jam=24*hari-jam1+jam2-1;
							}
						}
					}
				}	
				if(kendaraan==1){
					bayar=2000+1500*jam;
				}
				if(kendaraan==2){
					bayar=3000+2500*jam;
				}
				system("cls");
		
				//FUNGSI PRINT OUPUT HARI MASUK PARKIR SENIN
				if (harimasuk==1&&harikeluar==1&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==1&&harikeluar==2&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==1&&harikeluar==3&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu yang sama pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==1&&harikeluar==4&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==1&&harikeluar==5&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==1&&harikeluar==6&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==1&&harikeluar==7&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
		
				//FUNGSI PRINT OUPUT HARI MASUK PARKIR SELASA
				if (harimasuk==2&&harikeluar==1&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}	
				if (harimasuk==2&&harikeluar==2&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==2&&harikeluar==3&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu yang sama pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==2&&harikeluar==4&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==2&&harikeluar==5&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==2&&harikeluar==6&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==2&&harikeluar==7&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
		
				//FUNGSI PRINT OUPUT HARI MASUK PARKIR RABU
				if (harimasuk==3&&harikeluar==1&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==3&&harikeluar==2&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==3&&harikeluar==3&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu yang sama pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==3&&harikeluar==4&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==3&&harikeluar==5&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==3&&harikeluar==6&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==3&&harikeluar==7&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
		
				//FUNGSI PRINT OUPUT HARI MASUK PARKIR KAMIS
				if (harimasuk==4&&harikeluar==1&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==4&&harikeluar==2&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==4&&harikeluar==3&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu berikutnya pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==4&&harikeluar==4&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==4&&harikeluar==5&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==4&&harikeluar==6&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==4&&harikeluar==7&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}	
		
				//FUNGSI PRINT OUPUT HARI MASUK PARKIR JUMAT
				if (harimasuk==5&&harikeluar==1&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==5&&harikeluar==2&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}	
				if (harimasuk==5&&harikeluar==3&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu berikutnya pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==5&&harikeluar==4&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==5&&harikeluar==5&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==5&&harikeluar==6&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==5&&harikeluar==7&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}		
			
				//FUNGSI PRINT OUPUT HARI MASUK PARKIR SABTU
				if (harimasuk==6&&harikeluar==1&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==6&&harikeluar==2&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==6&&harikeluar==3&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu berikutnya pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==6&&harikeluar==4&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==6&&harikeluar==5&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==6&&harikeluar==6&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==6&&harikeluar==7&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
		
				//FUNGSI PRINT OUPUT HARI MASUK PARKIR MINGGU
				if (harimasuk==7&&harikeluar==1&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==7&&harikeluar==2&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==7&&harikeluar==3&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu berikutnya pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==7&&harikeluar==4&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==7&&harikeluar==5&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==7&&harikeluar==6&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==7&&harikeluar==7&&(seminggu==0||seminggu==2)){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu yang sama pada pukul %d.%d",jam2,menit2);
				}
	
				//FUNGSI PRINT OUPUT UNTUK RENTANG WAKTU SEMINGGU
				if (harimasuk==1&&harikeluar==1&&seminggu==1){
					printf("Anda mulai parkir pada hari senin pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari senin di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}	
				if (harimasuk==2&&harikeluar==2&&seminggu==1){
					printf("Anda mulai parkir pada hari selasa pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari selasa di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==3&&harikeluar==3&&seminggu==1){
					printf("Anda mulai parkir pada hari rabu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari rabu di minggu berikutnya pada pukul %d.%d",jam2,menit2);	
				}
				if (harimasuk==4&&harikeluar==4&&seminggu==1){
					printf("Anda mulai parkir pada hari kamis pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari kamis di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==5&&harikeluar==5&&seminggu==1){
					printf("Anda mulai parkir pada hari jumat pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari jumat di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}
				if (harimasuk==6&&harikeluar==6&&seminggu==1){
					printf("Anda mulai parkir pada hari sabtu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari sabtu di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}					
				if (harimasuk==7&&harikeluar==7&&seminggu==1){
					printf("Anda mulai parkir pada hari minggu pada pukul %d.%d\n",jam1,menit1);
					printf("Anda keluar parkir pada hari minggu di minggu berikutnya pada pukul %d.%d",jam2,menit2);
				}

				printf("\nBiaya parkir anda adalah Rp%d",bayar); //Perintah ini menampilkan nilai biaya parkir hasil perhitungan program
				printf("\nTekan tombol apapun untuk melanjutkan");
				getch();
				system("cls");
				break;
			}

			//PANDUAN CARA MENGGUNAKAN PROGRAM(PUSAT BANTUAN)
			case '2' :{ //Fungsi ini dijalankan bila variabel "c" memiliki nilai "2"
				system("cls");
				printf("\n\n\n\n\n\n");
				printf("             ===========================================================================================\n");
				printf("             ||                                     Pusat Bantuan                                     ||\n");
				printf("             ||   [1] Program ini dibuat dengan tujuan untuk                                          ||\n");
				printf("             ||       membantu perhitungan tarif parkir kendaraan bermotor                            ||\n");
				printf("             ||   [2] Program ini menghitung tarif parkir untuk                                       ||\n");
				printf("             ||       kendaraan bermotor jenis sepeda motor dan mobil                                 ||\n");
				printf("             ||   [3] Tarif parkir untuk satu jam pertama telah ditetapkan                            ||\n");
				printf("             ||       dengan harga Rp 3500 untuk sepeda motor dan Rp 5500 untuk mobil                 ||\n");
				printf("             ||   [4] Perhitungan tarif parkir setelah satu jam pertama dihitung                      ||\n");
				printf("             ||       berdasarkan jangka waktu parkir kendaraan per jamnya                            ||\n");
				printf("             ||       dengan harga Rp 1500 per jam untuk sepeda motor dan Rp 2500 per jam untuk mobil ||\n");
				printf("             ===========================================================================================\n");	
	
				printf("\n                                Tekan tombol apapun untuk melanjutkan ");
				getch();
				system("cls");
				break;
			}
			
			//KELUAR DARI PROGRAM(QUIT)
			case '3':{ //Fungsi ini dijalankan bila variabel "c" memiliki nilai "3"
				system("cls");
				printf("\n\n\n\n\n\n");
				printf("                                 ===============================\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||        Terima Kasih       ||\n");
				printf("                                 ||       Sampai Jumpa...     ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ===============================\n");
				return 0; //Perintah ini menghentikan jalannya program
			}
		

			default: //Fungsi ini dijalankan bila variabel "c" memiliki nilai selain "1", "2", dan "3"
				system("cls");
				printf(" \n\n\n\n\n\n                               Input anda yang sebelumnya invalid!\n");
				printf("                               Tekan tombol apapun untuk melanjutkan\n");		
				getch();
			}

		//Sistem perintah konfirmasi keluar program dan loop menu awal
		system("cls");
		printf("Apakah anda masih ingin melanjutkan program?\n");
		printf("[1] Iya\n[2] Tidak\n");
		d=getch(); //Perintah ini menyimpan input pada variabel "d"
		switch(d){ //Fungsi switch ini membaca nilai variabel "d" dan menjalankan program yang sesuai dengan nilai tersebut
			case '1':{ //Fungsi ini berjalan bila variabel "d" bernilai "1"
				system("cls");
				printf("\n\n\n\n\n\n");
				printf("                                 ===============================\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||        Welcome to C!      ||\n");
				printf("                                 ||      Kalkulator parkir    ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||    [1] Mulai              ||\n");
				printf("                                 ||    [2] Pusat Bantuan      ||\n");
				printf("                                 ||    [3] Quit               ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ===============================\n");
				printf("                                 Masukan pilihan anda di sini: ");
				c=getch();
				break;
			}
			case '2':{
				system("cls");
				printf("\n\n\n\n\n\n");
				printf("                                 ===============================\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||        Terima Kasih       ||\n");
				printf("                                 ||       Sampai Jumpa...     ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ===============================\n");
				return 0;
			}
			default :{ //Fungsi ini berjalan bila variabel "d" bernilai selain "1" dan "2"
				system("cls");
				printf("\n\n\n\n\n\n");
				printf("                              Input anda yang sebelumnya invalid!\n");
				printf("                              Tekan tombol apapun untuk melanjutkan\n");
				getch();
				system("cls");
				printf("\n\n\n\n\n\n");
				printf("                                 ===============================\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||        Welcome to C!      ||\n");
				printf("                                 ||      Kalkulator parkir    ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||    [1] Mulai              ||\n");
				printf("                                 ||    [2] Pusat Bantuan      ||\n");
				printf("                                 ||    [3] Quit               ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ||                           ||\n");
				printf("                                 ===============================\n");
				printf("                                 Masukan pilihan anda di sini: ");
				c=getch();
				break;
			}
		}
	}
}
