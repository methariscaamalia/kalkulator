#include<iostream>
using namespace std;
int x,y,o,j,k,l,m;
void Pertama();
void Pertama()
{
     cout<<"\nMasukkan Nilai Pertama = "; cin>>x;
     cout<<"Masukkan Nilai Kedua = "; cin>>y;
}
void Penjumlahan();
void Penjumlahan()
{
     Pertama();
     j=x+y;
     cout<<"\nHasil dari penjumlahan antara "<<x<<" dan "<<y<<" adalah "<<j<<endl;
}

void keluar();
void keluar()
{
     cout<<"TERIMAKASIH!"<<endl;
}
main()
{
      cout<<"\tMENU UTAMA"<<endl;
      cout<<"=========================="<<endl;
      cout<<"1. OPERASI PENJUMLAHAN"<<endl;
      cout<<"2. KELUAR / OUT"<<endl;
      cout<<"==========================="<<endl;
      cout<<"\n=> MASUKKAN KODE (1..2) = "; cin>>o;
switch (o)
{
       case 1: Penjumlahan(); break;
       case 2: keluar (); break;
       default : cout<<"Pilihan cuman 5"<<endl;break;
}
return 0;
}


