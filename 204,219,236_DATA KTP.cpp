#include <iostream>
#include <string>

using namespace std;

struct KTP{
	string nama;
    string nik;
	string tempatlahir;
	string tanggallahir;
	string jeniskelamin;
	string alamat;
	string rtrw;
	string kelurahan;
	string kecamatan;
	string agama;
	string statusperkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlakuhingga;
	string golongandarah;
};

int main(){
	KTP ktp;
	char ulang;
	
	do{
		cout<<"\n=================Input data KTP================"<<endl;
		cout<<"Masukkan nama : ";
		cin.ignore();
		getline(cin, ktp.nama);
		cout<<"Masukkan NIK : ";
		getline(cin, ktp.nik);
		cout<<"Masukkan Tempat Lahir : ";
		getline(cin, ktp.tempatlahir);
		cout<<"Masukkan Tanggal Lahir : ";
		getline(cin, ktp.tanggallahir);
		cout<<"Masukkan Jenis Kelamin : ";
		getline(cin, ktp.jeniskelamin);
		cout<<"Masukkan Alamat : ";
		getline(cin, ktp.alamat);
		cout<<"Masukkan RT/RW : ";
		getline(cin, ktp.rtrw);
		cout<<"Masukkan Kelurahan/Desa : ";
		getline(cin, ktp.kelurahan);
		cout<<"Masukkan kecamatan : ";
		getline(cin, ktp.kecamatan);
		cout<<"Masukkan Agama : ";
		getline(cin, ktp.agama);
		cout<<"Masukkan Status perkawinan : ";
		getline(cin, ktp.statusperkawinan);
		cout<<"Masukkan pekerjaan : ";
		getline(cin, ktp.pekerjaan);
		cout<<"Masukkan kewarganegaraan : ";
		getline(cin, ktp.kewarganegaraan);
		cout<<"Masukkan berlaku hingga : ";
		getline(cin, ktp.berlakuhingga);
		cout<<"Masukkan golongan darah : ";
		getline(cin, ktp.golongandarah);
		
		cout<<"\=================DATA KTP================="<<endl;
		cout<<"Nama : "<<ktp.nama<<endl;
		cout<<"NIK : "<<ktp.nik<<endl;
		cout<<"Tempat Lahir : "<<ktp.tempatlahir<<endl;
		cout<<"Tanggal lahir : "<<ktp.tanggallahir<<endl;
		cout<<"jenis kelamin : "<<ktp.jeniskelamin<<endl;
		cout<<"Alamat : "<<ktp.alamat<<endl;
		cout<<"RT/RW : "<<ktp.rtrw<<endl;
		cout<<"Kelurahan/Desa : "<<ktp.kelurahan<<endl;
		cout<<"Kecamatan : "<<ktp.kecamatan<<endl;
		cout<<"Agama : "<<ktp.agama<<endl;
		cout<<"Status perkawinan : "<<ktp.statusperkawinan<<endl;
		cout<<"Pekerjaan : "<<ktp.pekerjaan<<endl;
		cout<<"Kewarganegaraan : "<<ktp.kewarganegaraan<<endl;
		cout<<"Berlaku hingga : "<<ktp.berlakuhingga<<endl;
		cout<<"Golongan darah : "<<ktp.golongandarah<<endl;
		
		cout<<"\nApakah anda ingin memasukkan data KTP lagi? (y/n): ";
		cin>>ulang;
		
	} while (ulang == 'y' || ulang == 'Y');
	
	return 0;
		
	}
	
