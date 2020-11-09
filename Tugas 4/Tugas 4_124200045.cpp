 #include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int pil;
	float x,y,hasilKali,hasilPangkat=1;

	cout<<"++++ Perkalian dan Perpangkatakan++++\n";
	cout<<"1. Perkalian\n2. Perpangkatan\n";
	cout<<"Pilih : ";cin>>pil;
	switch(pil){
		case 1:
			cout<<"\nInput nilai X : ";cin>>x;
			cout<<"Input nilai Y : ";cin>>y;
				cout<<"\nhasil kali "<<x<<" * "<<y<<endl;
			for(int i=1;i<=x;i++){
				hasilKali+=y;
			
				if(i<x){
					cout<<y<<" + ";
				} else {
				
					cout<<y<<" = "<<hasilKali<<endl;
				}
			} 
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
			cout<<" = "<<setprecision(11)<<hasilPangkat<<endl;	
			break;
		
		default:
			cout<<"salah input";
	}
}
