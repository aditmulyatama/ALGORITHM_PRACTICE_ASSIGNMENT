#include <iostream>
using namespace std;

int main(){
	
	string username;
	string password;
	
	string uname="aditmulyatama";
	string pass="1234";
	
	cout<<"login dulu lurd \n\n";
	
	cout<<"username : ";
	cin>>username;
	
	cout<<"password : ";
	cin>>password;
	
	cout<<"===========\n";
	
	if(username!=uname){
		if (password==pass){
			cout<<"username salah";
		} else {
			cout<<"username dan password salah";
	}
		
	} else if(password!=pass){
		if(username==uname){
			cout<<"password salah";
		} else {
			cout<<"username dan password salah";
	}
		
	} else {
		cout<<"login berhasil.\n\n";
		
		string mkapil,mka1="Kalkulus",mka2="Algoritma dan Pemrograman";
		int pil;
		float nHarian,nUTS,nUAS,avg;
		
		cout<<"Input nilai matkul\n";
		cout<<"1. "<<mka1<<"\n2. "<<mka2<<endl;
		cout<<"Pilih : "; cin>>pil;
		cout<<endl;
		
		switch (pil) {
			
			case 1:
			cout<<"Nilai Harian : "; cin>>nHarian;
			cout<<"Nilai UTS : "; cin>>nUTS;
			cout<<"Nilai UAS : "; cin>>nUAS;
			mkapil=mka1;
			break;
			
			case 2:
			cout<<"Nilai Harian : "; cin>>nHarian;
			cout<<"Nilai UTS : "; cin>>nUTS;
			cout<<"Nilai UAS : "; cin>>nUAS;
			mkapil=mka2;
			break;
			
			default:
			cout<<"salah input";
				
		}
		
		cout<<endl;
		avg=(nHarian+nUTS+nUAS)/3;
		string hasil = (avg>=80)?"lulus":"tidak lulus";
		
		if(pil==1||pil==2) {
		cout<<"Anda "<<hasil<<" "<<mkapil<<" dengan nilai "<<avg;
		
		}
	}
}

