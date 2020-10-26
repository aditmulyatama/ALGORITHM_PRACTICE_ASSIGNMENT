#include <iostream>
using namespace std;

main (){
	while(true){
	
	int anak[1],ayah,ibu;
	int bantuan[3],bantuanTotal;
	
	cout<<"Umur Ayah\t : ";
	cin>>ayah;
	
	cout<<"Umur Ibu\t : ";
	cin>>ibu;
	
	cout<<"Umur anak 1\t : ";
	cin>>anak[0];
	
	cout<<"Umur anak 2\t : ";
	cin>>anak[1];
	
	
	if(ayah>20){
		bantuan[0]=30000;
		
			} else if (ayah<=20 && ayah>12) {
				bantuan[0]=20000;
				
			} else {
				bantuan[0]=15000;
		}

		
		
	if(ibu>20) {
		bantuan[1]=30000;
		
			} else if (ibu<=20 && ibu>12) {
				bantuan[1]=20000;
				
			} else {
				bantuan[1]=15000;
		}
	
		
	if(anak[0]>20){
		bantuan[2]=30000;
		
			} else if (anak[0]<=20 && anak[0]>12 ) {
				bantuan[2]=20000;
				
			} else {
				bantuan[2]=15000;
		}
	
		
	if(anak[1]>20){
		bantuan[3]=30000;
		
			} else if (anak[1]<=20 && anak[1]>12) {
				bantuan[3]=20000;
				
			} else {
				bantuan[3]=15000;
		}
	
	
	bantuanTotal=(bantuan[0]+bantuan[1]+bantuan[2]+bantuan[3])*30;
	
	cout<<"Total bantuan selama satu bulan Rp. "<<fixed<<bantuanTotal<<endl<<endl;
}     
 
}
		
