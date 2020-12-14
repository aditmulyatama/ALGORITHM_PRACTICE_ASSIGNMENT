#include <iostream>
using namespace std;

int main(){
	cout<<"KUISSS ================";
	cout<<"\n1. Deret Unik\n2. Nilai Akhir\n3. Gunting Batu Kertas (Bonus)\n4. Keluar";
	cout<<"\nPilih: ";
	
	int pil,x,y,nim,temp,round,winp1=0,winp2=0;
	float rata,kuis,responsi,tugas,project;
	string jurusan,nama,p1,p2,gbkp1,gbkp2;
	char nHuruf;
	
	cin>>pil;
	
	
	switch(pil){
		case 1:
			cout<<"X : "; cin>>x;
			cout<<"Y : "; cin>>y;
			cout<<endl;
			for(int i=1;i<=y;i++){
			if(i%x==0){
				cout<<"|";
			} else {
				cout<<"-";
			}
		}
		cout<<endl;
		break;
		
		case 2:
			cout<<"\nInput Nilai Praktikum =========";
			cin.ignore();
			cout<<"\nNama\t\t: ";getline(cin,nama);
			cout<<"NIM\t\t: ";cin>>nim;
			cout<<"Kuis\t\t: ";cin>>kuis;
			cout<<"Responsi\t: ";cin>>responsi;
			cout<<"Tugas\t\t: ";cin>>tugas;
			cout<<"Project\t\t: ";cin>>project;
		
			temp=nim/1000000;
		
			if(temp==121){
				jurusan="Teknik Kimia";
			} else if(temp==122){
				jurusan="Teknik Industri";
			} else if(temp==123){
				jurusan="Informatika";
			} else if(temp==124){
				jurusan="Sistem Informasi";
			} else {
				jurusan="Salah Jurusan";
			}
		
			rata=kuis*0.2+responsi*0.35+tugas*0.15+project*0.3;
		
			if (rata>=80&&rata<=100){
				nHuruf='A';
			} else if(rata>=60){
				nHuruf='B';
			} else if(rata>=40){
				nHuruf='C';
			} else if(rata>=20){
				nHuruf='D';
			} else {
				nHuruf='E';
			}
		
			cout<<"\nHasil Akhir =================== ";
			cout<<"\nNama\t\t: "<<nama;
			cout<<"\nNIM\t\t: "<<nim;
			cout<<"\nJurusan\t\t: "<<jurusan;
			cout<<"\nRata-rata\t: "<<rata;
			cout<<"\nNilai Huruf\t: "<<nHuruf;
			if(rata>=60){
				cout<<"\nSelamat anda lulus praktikum";
			} else {
				cout<<"\nMohon maaf anda belum lulus praktikum";
			}
		
		break;
		
		case 3:
			cin.ignore();
			cout<<"Masukkan nama player 1 : ";getline(cin,p1);
			cout<<"Masukkan nama player 2 : ";getline(cin,p2);
			cout<<"Masukkan banyak ronde  : ";cin>>round;
			
			for(int i=1;i<=round;i++){
				cout<<"\nRonde ke-"<<i;
				cout<<"\nMasukkan kertas/gunting/batu "<<p1<<" : "; 
				cin>>gbkp1;
				cout<<"Masukkan kertas/gunting/batu "<<p2<<" : "; 
				cin>>gbkp2;
			
				 if(gbkp1=="kertas"&&gbkp2=="batu"||gbkp1=="gunting"&&gbkp2=="kertas"||gbkp1=="batu"&&gbkp2=="gunting"){
					winp1++;
				} else if(gbkp1=="kertas"&&gbkp2=="gunting"||gbkp1=="gunting"&&gbkp2=="batu"||gbkp1=="batu"&&gbkp2=="kertas"){
					winp2++;
				} 
			}
			
			cout<<"\n_____Hasil Akhir_____";
			cout<<endl<<p1<<" menang "<<winp1<<" kali";
			cout<<endl<<p2<<" menang "<<winp2<<" kali"<<endl;
			
				
			if(winp1>winp2){
				cout<<"Jadi pemenangnya adalah "<<p1;
			} else if(winp1<winp2){
				cout<<"Jadi pemenangnya adalah "<<p2;
			} else {
				cout<<"Pertandingan seri";
			}
			
			break;
			
		case 4:
			exit(0);
			break;
			
		default:
			cout<<"Mohon maaf anda salah input";
		}
		cout<<endl<<endl;
		system("pause");
	}

