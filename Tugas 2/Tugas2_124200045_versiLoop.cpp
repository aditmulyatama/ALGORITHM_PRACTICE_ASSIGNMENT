#include <iostream>
using namespace std;

main (){
	while(true){
	
	
	int umur[4];
	int bantuan[4],bantuanTotal,Total;
	
	cout<<"Umur Ayah\t : ";
	cin>>umur[1];
	
	cout<<"Umur Ibu\t : ";
	cin>>umur[2];
	
	cout<<"Umur anak 1\t : ";
	cin>>umur[3];
	
	cout<<"Umur anak 2\t : ";
	cin>>umur [4];
	
	for(int a;a<=4;a++) {
		
	if(umur[a]>20) {
		bantuan[a]=30000;
		
			} else if (umur[a]<=20 && umur[a]>12) {
				bantuan[a]=20000;
				
				} else {
				bantuan[a]=15000;
			}
		}
	
	for(int i=1;i<=4;i++) {
		bantuanTotal+=bantuan[i];
	}
	
	Total=bantuanTotal*30;
	
	cout<<"Total bantuan selama satu bulan Rp. "<<Total<<endl<<endl;
   }

}
