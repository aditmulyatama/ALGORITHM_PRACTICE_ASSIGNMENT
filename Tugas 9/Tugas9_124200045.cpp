#include <iostream>
using namespace std;

int main(){
	int data;
	int maks,min;
	int sMaks;
	
	float total=0;
	float rata;
	
	cout<<"Masukkan banyak angka : "; cin>>data;
	
	float angka[data];
	int selisih[data-1];
	
	for(int i=0;i<data;i++){
		cout<<"Angka ke-"<<i+1<<" : "; cin>>angka[i];
	}
	
	maks=angka[0];
	min=angka[0];
	
	for(int i=0;i<data;i++){
		if(maks<angka[i]){
			maks=angka[i];
		}
		
		if(min>angka[i]){
			min=angka[i];
		}
		
		
		total+=angka[i];
	}
	
	for(int i=0;i<data;i++){
		
		selisih[i]=angka[i]-angka[i+1];
		
		if(selisih[i]<0){
			selisih[i]=selisih[i]*-1;
		} else if(data<=1){
			selisih[i]=0;
		}
		
		
		
	}
	
	sMaks=selisih[0];
	
	for(int i=0;i<data-1;i++){
		if(sMaks<selisih[i]){
			sMaks=selisih[i];
		}
	}
	
	rata=total/data;
	
	cout<<endl<<endl;
	cout<<"_____Hasil_____"<<endl;
	cout<<"Deret\t\t: "; for(int i=0;i<data;i++) cout<<angka[i]<<" "; cout<<endl;
	cout<<"Maksimum\t: "<<maks<<endl;
	cout<<"Minimum\t\t: "<<min<<endl;
	cout<<"Rata-rata\t: "<<rata<<endl;
	cout<<"Selisih Max\t: "<<sMaks;
	
	cout<<endl;
	system("pause");

}
