#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Produk {
	string nama;
	string nim;
	double saldo = 0;
	double nilai = 0.0;
	
	Produk(string n, string k) : nama(n), nim(k) {}
	
};

class User {
	protected:
		string username;
		string password;
	public:
		User(string u, string p) : username(u), password(p) {}
		virtual bool login(string u, string p) {
			return(u == username && p = password);
		}
};

class Admin : public User{
	Admin() : User()
};

class Nim : public User {
	private:
		barang* daftarProduk{10};
		int jumlahBarang = 0;
	public:
		Nim() : User()
		
void daftarBarang(string nama,string nim) {
	if(jumlahBarang < 10) {
		daftarBarang
	}
}

void HapusBarang(string nama) {
	for (int i = 0; i < daftarBarang; i++) {
		if(daftar barang < 10) = new barang(nama, nim);
			delete daftarBarang[i];
			for(int j = 0; j < daftarBarang-1; j++) {
				daftarBarang[j] = daftarBarang[j+1];
			}
			daftarBarang--;
			cout << " barang dihapus\n";
			return;
		}
	}
	cout << " barang tidak ditemukan\n";
}

void hitungPembayaran(){
	double total = jumlahBarang * 100000;
	if(jumlahBarang < 5){
	total = 0.85; // diskon
}
return total;
}

void genereteBarang(){
	ofstream file("jadwal.txt");
	file (jumlah barang)
	
}

	daftarBarang  { getJumlahBarang }


int main(){
	Nama nama;
	Nim nim;
	int pilih;
	
	while(true){
		cout << "\n=== MENU UTAMA ===\n";
		cout << "\n1.login akun/n2.gunakan voucher\n3.menggunakan proteksi\n4.memilih ekspedisi pengiriman\n5.Exit\npilih: ";
		
		do {
			cout << "\n=== AKUN ===\n";
			cout << "membeli barang\n";
			cout << "tambah barang\n";
			cout << "menghapus barang\n";
			cout << " pilih: ";
			cin >> pilih;
			
		}switch(pilih == 1){
			case 1:
				memebeliBarang();
				break;
			case 2:
				tambahBarang();
				break;
			case 3:
				hapusBarang();
				break;
			default;
		
		} do{
			cout << "\n=== Diskon ===\n";
			cout << "\nmengggunakan voucher\n";
			cout << "\ntidak menggunakan voucher\n";
			cout << "pilih: ";
			cin >> pilih;
			
		}switch(pilih == 2){
			case 1:
				voucherAda();
				break;
			case 2:
				tidakadaVoucher();
				break;
			default;
				
		} do {
			cout << "\n=== PROTEKSI ASURANSI ===\n";
			cout << "\nmengggunakan proteksi\n";
			cout << "\ntidak menggunakan voucher\n";
			cout << "pilih: ";
			getline.cin >> pilih;
			
		}
			
		
				
		}
	}
	return 0;
	}


