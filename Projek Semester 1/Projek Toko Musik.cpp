#include<iostream>
#include<iomanip>
using namespace std;

int choose,choose2;

void PilihanMusik();
void HargaMusik();
void NamaMusik();
string namamusik [5][5];
int hargamusik[5][5];

int main (){
    bool ulang=1;
	string username;string password;string passwordkonf; //local
	NamaMusik();
	HargaMusik();
	
    while(ulang==1){
	system("cls");
	cout<<"Selamat datang di Qobuz Music \n";//namaya wa ganti yak
	cout<<"silahkan register account anda\n";
	cout<<"Username : ";cin>>username;
	cout<<"password : ";cin>>password;
	cout<<"konfirmasi password : ";cin>>passwordkonf;
	if(passwordkonf == password){
	 	ulang=0;
		system("cls");
		cout<<"selamat datang "<<username<<"!"<<endl;
		cout<<"genre musik\n";
		genre:
		cout<<"1.Pop\n2.hip-hop\n3.Slow\n4.Lokal\n5.Rock\n";
		cout<<"silahkan pilih yang anda suka = ";cin>>choose;
		cout<<endl;
		if(choose>0&&choose<6){
		PilihanMusik();
		} else {
		
			cout<<"\nSalah input!\n";
			goto genre;
		}
	
	return 0;


	}	else
		cout<<"password anda masih salah!\n";
		ulang=1;
	} 
}
		
void PilihanMusik(){
	for(int i = 0;i<5;i++){
		cout<<i+1<<". "<<namamusik[choose-1][i]<<setw(50-namamusik[choose-1][i].length())<<"Rp "<<hargamusik[choose-1][i]<<endl;
	}
	cout<<"Silahkan pilih : ";cin>>choose2;
	cout<<endl;
	if(choose2>0&&choose2<6){
		cout<<"Anda memilih album "<<namamusik[choose-1][choose2-1]<<" dengan harga Rp. "<<hargamusik[choose-1][choose2-1];
	} else {
		cout<<"Salah input !";
	}
}
void HargaMusik(){
	//pop
	hargamusik[0][0] = 189999;
	hargamusik[0][1] = 120000;
	hargamusik[0][2] = 120000;
	hargamusik[0][3] = 220000;
	hargamusik[0][4] = 179999;
	//hiphop
	hargamusik[1][0] = 149000;
	hargamusik[1][1] = 120000;
	hargamusik[1][2] = 189000;
	hargamusik[1][3] = 179000;
	hargamusik[1][4] = 219000;
	//slow
	hargamusik[2][0] = 169000;
	hargamusik[2][1] = 189000;
	hargamusik[2][2] = 299000;
	hargamusik[2][3] = 249000;
	hargamusik[2][4] = 179000;
	//lokal
	hargamusik[3][0] = 139000;
	hargamusik[3][1] = 169000;
	hargamusik[3][2] = 109000;
	hargamusik[3][3] = 199000;
	hargamusik[3][4] = 159000;
	//rock
	hargamusik[4][0] = 239000;
	hargamusik[4][1] = 219000;
	hargamusik[4][2] = 169000;
	hargamusik[4][3] = 209000;
	hargamusik[4][4] = 199000;


}

void NamaMusik(){
	//pop
	namamusik[0][0] = "20/20 Experience - Justin Timberlake";
	namamusik[0][1] = "divide - Ed Sheeran";
	namamusik[0][2] = "Reputation - Taylor Swift";
	namamusik[0][3] = "Square Up - BLACKPINK";
	namamusik[0][4] = "24K Magic - Bruno Mars";
	//hiphop
	namamusik[1][0] = "Igor - Tyler, the Creator";
	namamusik[1][1] = "This Is America - Childish Gambino";
	namamusik[1][2] = "Scorpion - Drake";
	namamusik[1][3] = "Goodbye & Good Riddance - Juice WRLD";
	namamusik[1][4] = "The Cronic - Dr. Dre";
	//slow
	namamusik[2][0] = "Say My Name - Saint Fiction";
	namamusik[2][1] = "Easy Peasy Love - Fianisya";
	namamusik[2][2] = "Daylight - Joji,Diplo";
	namamusik[2][3] = "my future - Billie Eilish";
	namamusik[2][4] = "Memories - Maroon 5";
	//lokal
	namamusik[3][0] = "The One - Afgan";
	namamusik[3][1] = "Tulus - Tulus";
	namamusik[3][2] = "Menari Dengan Bayangan - Hindia";
	namamusik[3][3] = "In Love - Iwan Fals";
	namamusik[3][4] = "Lelaku - Fourtwnty";
	//rock
	namamusik[4][0] = "Bohemian Rhapsody (The Original Soundtrack) - Queen";
	namamusik[4][1] = "Nevermind - Nirvana";
	namamusik[4][2] = "Abbey Road - The Beatles";
	namamusik[4][3] = "Appetite for Destruction - Guns N' Roses";
	namamusik[4][4] = "The Wall - Pink Floyd";
}


/*
void MusikPop();
void MusikHipHop();
void MusikSlow();
void MusikLokal();
void MusikRock();


*/
/*
void MusikPop(){

	cout<<"1. 20/20 Experience - Justin Timberlake                  Rp 189999"<<endl;//gua ganti album biar aga mahal
	cout<<"2. divide - Ed Sheeran   			         Rp 120000"<<endl;
	cout<<"3. Reputation - Taylor Swift   			         Rp 120000"<<endl;
	cout<<"4. Square Up - BLACKPINK   				 Rp 220000"<<endl;
	cout<<"5. 24K Magic - Bruno Mars    				 Rp 179999"<<endl;
	cout<<"Silahkan pilih : ";cin>>choose2;
	switch (choose2){
		case 1:
			cout<<"Anda Memilih Album "<<namamusik[0][0]<<"dengan harga Rp. 189.999\n";
		break;
		case 2:
			cout<<"Anda Memilih Album "<<namamusik[0][1]<<"dengan harga Rp. 120.000\n";
		break;
		case 3:
			cout<<"Anda Memilih Album "<<namamusik[0][2]<<"dengan harga Rp. 125.000\n";
		break;
		case 4:
			cout<<"Anda Memilih Album "<<namamusik[0][3]<<"dengan harga Rp. 220.000\n";
		break;
		case 5:
			cout<<"Anda Memilih Album "<<namamusik[0][4]<<"dengan harga Rp. 179.000\n";
		break;
		default:
			cout<<"Salah input!";

	}


}

void MusikHipHop(){
	for(int i = 0;i<5;i++){
		cout<<i+1<<". "<<namamusik[choose-1][i]<<setw(50-namamusik[choose-1][i].length())<<"Rp "<<hargamusik[choose-1][i]<<endl;
	}
	cout<<"Silahkan pilih : ";cin>>choose2;
	cout<<endl;
	if(choose2>0&&choose2<6){
		cout<<"Anda memilih album "<<namamusik[choose-1][choose2-1]<<" dengan harga Rp. "<<hargamusik[choose-1][choose2-1];
	} else {
		cout<<"Salah input !";
	}
}

void MusikSlow(){
		for(int i = 0;i<5;i++){
		cout<<i+1<<". "<<namamusik[choose-1][i]<<setw(50-namamusik[choose-1][i].length())<<"Rp "<<hargamusik[choose-1][i]<<endl;
	}
	cout<<"Silahkan pilih : ";cin>>choose2;
	cout<<endl;
	if(choose2>0&&choose2<6){
		cout<<"Anda memilih album "<<namamusik[choose-1][choose2-1]<<" dengan harga Rp. "<<hargamusik[choose-1][choose2-1];
	} else {
		cout<<"Salah input !";
	}
}
*/
