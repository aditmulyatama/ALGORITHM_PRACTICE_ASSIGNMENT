#include <iostream>
#include <string>
using namespace std;

int main() {

    string nama,nim;
    float uts,uas;
    double avg;

    cout << "Nama      : ";
    getline(cin,nama);

    cout<< "NIM       : ";
    cin>>nim;

    cout<< "Nilai UTS : ";
    cin>>uts;

    cout<<"Nilai UAS : ";
    cin>>uas;

    avg=(uts+uas)/2;

    cout<<"\n\nNama anda "<<nama<<". NIM " <<nim<<endl<<endl;
    cout<<"Nilai akhir anda: "<<avg<<endl;
    }
