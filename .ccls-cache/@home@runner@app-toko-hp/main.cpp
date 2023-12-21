#include <iostream>
#include <string>
#include <windows.h> 
#include <unistd.h>
#include <ctime>


using namespace std;

bool isRegistered = false;
string registeredNama, registeredAsalKota, registeredPassword;


Dashboard(){
	system("color 4E");
	
	int pilihan;
	    cout<<"\t\t WEZAR SMARTPHONE STORE \t"<<endl;
	    cout<<"\t <================= ============> \t"<<endl;
	    cout<<"\t SELAMAT DATANG DI WEZAR STORE \t"<<endl;
	    cout<<"\t <============= ============ ==========> \t"<<endl;
	    cout<<"\n";
	   
	    cout<<"1. Halaman Registrasi"<< endl;
	    cout<<"2. Halaman Login"<< endl;
	    cout<<"3. Exit Program"<< endl;
	    cout<<"PILIH OPSI \t:"; cin>>pilihan;
	    
	    switch(pilihan){
	    	case 1:
	    		cout<<"anda beralih ke Halaman berikutnya"<< endl;
	    		void showLoading();
	    		void registrasi();
	    		break; 
	    	case 2:
	    		if(!isRegistered){
	    			cout<<"\n";
	    			cout<<"\t ========================================"<<endl;
	    			cout<<"\t\tAnda belum melakukan Registrasi"<<endl;
	    			void showLoading();
	    			sleep(2);
	    			system("cls");
	    			void Dashboard();
			    } else {
			    
	    	       system("cls");
	    	       void login();
	    	}
	    	       break;
	    	       
	    	case 3:
	    		system("cls");
	    		cout<<"anda akan Keluar Program"<< endl;
	    		sleep(3);
	    		system("exit");
	      default:
	      	       system("cls");
	      	       sleep(3);
	      	       void Dashboard();
	    }
	    
	    
	    
}


registrasi() {
    isRegistered = true;
    cout << "\t\t\t REGISTRASI WEZAR STORE \t\t" << endl;
    cout << "\t\t===================================" << endl;
    cout << "\t\t\t MOHON DIISI DENGAN BENAR!" << endl;
    cout << "\n";

    cout << "\t Nama \t:"; cin >> registeredNama;
    cin.ignore();
    cout << "\t Kota \t:"; cin >> registeredAsalKota;
    cin.ignore();
    cout << "\t Password :"; cin >> registeredPassword;
    cout << "\n";

    cout << " \t\t\t DATA TEREKAM!!" << endl;
    system("cls");
}


login(){
	string namaLogin,kotasalLogin,passwordLogin;
	cout<<"\t\tSelamat Datang di Halaman Login"<<endl;
	cout<<"\t ========== ========== ===========\t"<<endl;
	cout<<"\t ============= LOGIN ==============="<<endl;
	cout<<"\n";
	
	cout<<" Masukan Nama \t:"; cin>>namaLogin;
	cout<<" Kota Asal \t:"; cin>>kotasalLogin;
	cout<<" Password \t:"; cin>>passwordLogin;
	
  if (isRegistered && (namaLogin == registeredNama && kotasalLogin == registeredAsalKota && passwordLogin == registeredPassword)) {
        cout <<"\n";
	 cout << "\t\tLOGIN BERHASIL!" << endl;
        void Progress();
    } else {
        cout << "\n";
        cout << "PASSWORD DAN NAMA SALAH, COBA LAGI.." << endl;
        sleep(3);
        
        system("cls");
        Dashboard();
    }
}
	


Progress(){
	system("cls");
	cout << "\t\t\t\t\t WEZAR STORE PHONE \t\t\t\t" << endl;
	cout << "\t\t\t\t\t=====================\t\t\t\t" << endl;
	cout << "\t\t\t\t SELAMAT DATANG DI WEZAR STORE \t\t\t" << endl;
	cout << "\t\t\t======= ============================== =========\t\t\t" << endl;
			
    system("color 0A"); 
  
    char a = 177, b = 219; 
    
    printf("\n\n\n\n\n"); 
    printf("\n\n\t\t\t\t\t\t Loading... \n\n"); 
    printf("\t"); 
    
    for (int i = 1; i < 99; i++){
    	printf("%c", a); 
    	printf("\r"); 
    	printf("\t");
	}  
     
    for (int i = 1; i < 99; i++) { 
        printf("%c", b); 
  
        Sleep(100); 
    } 
			
	//void halaman belanja
	system("cls");
	void halamanUtama();
}

halamanUtama(){
	
	string namaHP;
	int jumbel,harga,bayar;
	int totbay,total,totPPn,kembalian;
	string pilihBarang;
	int pilihanUtama;
	//isi dengan string 
	cout<<"\t\t\t SELAMAT DATANG \t"<< endl;
	cout<<"\t\t =====================================\t"<<endl;
	cout<<"\t\t DI WEZAR STORE HANDPHONE \t "<<endl;	
	cout<<"\t\t =============== ================ ======= \t"<<endl;
	
	cout<<"Menu Merek HP : "<<endl;
	cout<<"1. Samsung "<<endl;
	cout<<"2. Iphone "<<endl;
	cout<<"3. Vivo "<<endl;
	cout<<"4. Log Out Aplikasi "<<endl;
	cout<<"\n";
	cout<<"Pilih Menu \t: "; cin>>pilihanUtama;
	switch(pilihanUtama)	{
		case 1:
			system("cls");
			system("color AE");
	       	cout<<"\t\t\t SELAMAT DATANG \t"<< endl;
             	       cout<<"\t\t =====================================\t"<<endl;
              	cout<<"\t\t DI WEZAR STORE SAMSUNG \t "<<endl;	
               	cout<<"\t\t =============== ================ ======= \t"<<endl;
               	cout<<"\n";
               	cout<<"a. SAMSUNG GALAXY A54 5G"<<endl;
               	cout<<"b. SAMSUNG GALAXY A14 5G"<<endl;
               	cout<<"c. SAMSUNG GALAXY A04 "<< endl;
               	cout<<"d. SAMSUNG GALAXY A23 5G"<<endl;
               	cout<<"Pilih Barang \t: "; cin>>pilihBarang;
               	
               	if(pilihBarang == "a" || pilihBarang == "A"){
               		namaHP = "SAMSUNG GALAXY A54 5G";
               		harga = 1259999;				              		
			 } else if(pilihBarang == "b" || pilihBarang == "B"){
			 	namaHP = "SAMSUNG GALAXY A14 5G";
			 	harga = 1099999;
			 } else if(pilihBarang == "c" || pilihBarang == "C"){
			 	namaHP = "SAMSUNG GALAXY A04";
			 	harga = 895000;
			 } else if(pilihBarang == "d" || pilihBarang == "D"){
			 	namaHP = "SAMSUNG GALAXY A23 5G";
			 	harga = 670000;
			 } else {
			 	namaHP = "";
			 	harga = 0;
			 }
			 
			 cout<<"jumlah beli \t: "; cin>>jumbel;
			 break;
		case 2:
		       system("cls");
			system("color AE");
	       	cout<<"\t\t\t SELAMAT DATANG \t"<< endl;
             	       cout<<"\t\t =====================================\t"<<endl;
              	cout<<"\t\t DI WEZAR STORE Iphone \t "<<endl;	
               	cout<<"\t\t =============== ================ ======= \t"<<endl;
               	cout<<"\n";
               	
                     cout<<"a. IPHONE 12 PRO"<<endl;
               	cout<<"b. IPHONE 13 PRO"<<endl;
               	cout<<"c. IPHONE 14 PRO"<< endl;
               	cout<<"d. IPHONE 15 PRO"<<endl;
               	cout<<"Pilih Barang \t: "; cin>>pilihBarang;
               	break;
               	
               	if(pilihBarang == "a" || pilihBarang == "A"){
               		namaHP = "IPHONE 12 PRO";
               		harga = 1859999;				              		
			 } else if(pilihBarang == "b" || pilihBarang == "B"){
			 	namaHP = "IPHONE 13 PRO";
			 	harga = 1599999;
			 } else if(pilihBarang == "c" || pilihBarang == "C"){
			 	namaHP = "IPHONE 14 PRO";
			 	harga = 125000;
			 } else if(pilihBarang == "d" || pilihBarang == "D"){
			 	namaHP = "IPHONE 15 PRO";
			 	harga = 100000;
			 } else {
			 	namaHP = "";
			 	harga = 0;
			 }
			 
			 cout<<"jumlah beli \t: "; cin>>jumbel;
			 break;
		case 3:
		       system("cls");
			system("color EA");
	       	cout<<"\t\t\t SELAMAT DATANG \t"<< endl;
             	       cout<<"\t\t =====================================\t"<<endl;
              	cout<<"\t\t DI WEZAR STORE VIVO \t "<<endl;	
               	cout<<"\t\t =============== ================ ======= \t"<<endl;
               	cout<<"\n";
               	cout<<"a. vivo V29e "<<endl;
               	cout<<"b. vivo Y17s"<<endl;
               	cout<<"c. vivo V29 5G"<< endl;
               	cout<<"d. vivo Y27 4G"<<endl;
               	cout<<"Pilih Barang \t: "; cin>>pilihBarang;
			
			if(pilihBarang == "a" || pilihBarang == "A"){
               		namaHP = "vivo V29e";
               		harga = 1859999;				              		
			 } else if(pilihBarang == "b" || pilihBarang == "B"){
			 	namaHP = "vivo Y17s";
			 	harga = 1599999;
			 } else if(pilihBarang == "c" || pilihBarang == "C"){
			 	namaHP = "vivo V29 5G";
			 	harga = 125000;
			 } else if(pilihBarang == "d" || pilihBarang == "D"){
			 	namaHP = "vivo Y27 4G";
			 	harga = 100000;
			 } else {
			 	namaHP = "";
			 	harga = 0;
			 }
			 
			 cout<<"jumlah beli \t: "; cin>>jumbel;
			 break;
              case 4:
                     sleep(3);
			system("cls");
              	void Dashboard();
              default:
              	cout<<"kode "<< pilihanUtama<<" tidak ada "<<endl;
              	sleep(3);
              	system("cls");
              	void halamanUtama();
              	break;
              	
               			 
    	}
    	if(jumbel > 3){
    		total = harga * jumbel;
		totPPn = total * 10 / 100;
	    }else{
		total = harga * jumbel;
	}	
							
	totbay = total + totPPn;
	cout << endl;
	cout << "=====================================" << endl;
	cout << "=== \t WEZAR STORE HANDPHONE \t ===" << endl;
	cout << "=====================================" << endl;
	cout << "Nama Baju\t\t: " << namaHP << endl;
	cout << "Harga Satuan\t\t: " << harga << endl;
	cout << "Jumlah Beli\t\t: " << jumbel << endl;
	cout << "Total Keseluruhan\t: " << totbay << endl;
	cout << "Pembayaran\t\t: "; cin >> bayar;
	kembalian = bayar - totbay;
	cout << "Uang Kembalian\t\t: " << kembalian << endl;
	cout << "=====================================" << endl;
	cout<<endl;
	cout<<"Terimakasih telah Berkunjung...."<<endl;
	sleep(2);
	system("cls");
	void halamanUtama();
	return 0;
	
	
	
}

void delay(int seconds) {
    clock_t start_time = clock();
    while ((clock() - start_time) / CLOCKS_PER_SEC < seconds) {}
}

void showLoading() {
    const int loadingTime = 5; // dalam detik
    system("cls");
    cout<<"\t\t==========================="<< endl;
    std::cout << "\t\t|| \t Loading...\t ||"<< endl;
    cout<<"\t\t======= ============== ===="<< endl;

    for (int i = 0; i < loadingTime; ++i) {
        std::cout << ".";
        std::cout.flush();
        delay(1); // Penundaan 1 detik
    }

    system("cls");
}




int Loading(){
	showLoading();
	return 0;
}


int mainDashboard(){
	Dashboard();
	return 0;
}

int registrasiProgram(){
	registrasi();
	return 0;
}
int LoginProgram(){
	login();
	return 0;
}

int EProgress(){
       Progress();
       return 0;
}

int EhalamanUtama(){
	halamanUtama();
	return 0;
}

int main(){
      mainDashboard();
      showLoading();
      registrasiProgram();
      LoginProgram();
      EProgress();
      EhalamanUtama();
}

