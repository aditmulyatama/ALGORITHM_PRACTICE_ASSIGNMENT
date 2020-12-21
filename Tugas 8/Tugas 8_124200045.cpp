#include <iostream>
#include <math.h>
#define phi 3.14159265
using namespace std;

float luas	(float jari);
float kel	(float jari);
float volume(float jari, float t);
void menu();



int main(){
	char ulang;
	do{
			menu();
	
			cout<<"\nulangi program? (y/n) "; cin>>ulang;
			cout<<endl;
			
	} while (ulang=='y');
		
	cout<<"\nProgram selesai, Terimakasih :)\n";
	system("pause");
}

void menu(){
	int 	pilih;
	float	 jari2,t;
	
		cout<<"Hitung Lingkaran ==========\n";
		cout<<"1. Luas Lingkaran\n";
		cout<<"2. Keliling Lingkaran\n";
        cout<<"3. Volume Tabung\n";
        cout<<"Pilih: "; cin>>pilih;
        	
        	switch(pilih){
        		case 1 :
        			cout<<"Jari-jari\t: "; 	cin>>jari2;
        			cout<<"Luas lingkaran adalah "<<luas(jari2);
        			break;
        		
        		case 2 :
    				cout<<"Jari-jari\t: ";		cin>>jari2;
        			cout<<"Keliling lingkaran adalah "<<kel(jari2);
        			break;
        			
        		case 3 :
        			cout<<"Jari-jari\t: ";	cin>>jari2;
        			cout<<"Tinggi\t\t: ";	cin>>t;
        			cout<<"Keliling lingkaran adalah "<<volume(jari2,t);
        			break;
        			
        		default : 
        			cout<<"salah input";
			}
}

float luas(float jari){
	return phi*jari*jari;
}

float kel(float jari){
	return phi*2*jari;
}

float volume(float jari, float t){
	return phi*jari*jari*t;
}
