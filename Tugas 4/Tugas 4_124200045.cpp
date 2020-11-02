#include <iostream>
using namespace std;

int main(){
	int pil;
	int x,y,hasilKali,hasilPangkat=1;
;
	cout<<"++++ Perkalian dan Perpangkatakan++++\n";
	cout<<"1. Perkalian\n2. Perpangkatan\n";
	cout<<"Pilih : ";cin>>pil;
	switch(pil){
		case 1:
			cout<<"\nInput nilai X : ";cin>>x;
			cout<<"Input nilai Y : ";cin>>y;
			for(int i=1;i<=x;i++){
				hasilKali+=y;
			}
			cout<<"\nhasil kali "<<x<<" * "<<y<<endl;
			for(int i=1;i<=x;i++){
				cout<<y;
				if(i<x){
					cout<<" + ";
				}
			}
			cout<<" = "<<hasilKali;
			break;
		
		case 2:
			cout<<"\nInput nilai X : ";cin>>x;
			cout<<"Input nilai Y : ";cin>>y;
			for(int i=1;i<=y;i++){
				hasilPangkat*=x;
			}
			cout<<"\nhasil pangkat "<<x<<" ^ "<<y<<endl;
			for(int i=1;i<=y;i++){
				cout<<x;
				if(i<y){
					cout<<" * ";
				}	
			}
			cout<<" = "<<hasilPangkat;	
			break;
		
		default:
			cout<<"salah input";
	}
}
