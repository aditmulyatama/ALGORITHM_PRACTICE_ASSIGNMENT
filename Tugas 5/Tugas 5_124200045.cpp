#include <iostream>
using namespace std;

int main(){
	int pilih;
	cout<<"======Bentuk Generator======\n";
	cout<<"1. Kotak tengahnya kosong\n";
	cout<<"2. Segitiga isinya angka ngurut\n";
	cout<<"Pilih satu: "; cin>>pilih;
	
	 switch (pilih){
	 	case 1:
	 		
	 		int p,L,x,y;
			cout<<"\npanjang : "; cin>>p;
			cout<<"lebar : "; cin>>L;
			cout<<endl;
	
	 		for(x=1;x<=L;x++){
				for(y=1;y<=p;y++){
					if((x>1&&x<L)&&(y>1&&y<p)){
						cout<<"  ";
					} else {
						cout<<"* ";
					}
				}
				cout<<endl;
			}
		break;
			
		case 2:
			int t,i,j,k,jml;
			cout<<"tinggi : "; cin>>t;
			for(i=1;i<=t;i++){
				jml=t-1;
				k=i;
				for(j=1;j<=i;j++){
					if(j>1){
						k+=jml;
						cout<<k<<" ";
						jml--;
					} else {
						cout<<i<<" ";
					}
				}
				cout<<endl;
			}
		break;
			
		default:
			cout<<"\nsalah input";
			
	}
	system("pause");
}
	
