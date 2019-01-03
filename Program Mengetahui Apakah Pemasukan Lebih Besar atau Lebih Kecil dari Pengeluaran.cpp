#include<iostream>
using namespace std;
int main (){
int pemasukan , pengeluaran;

cout<<"PROGRAM UNTUK MENGETAHUI PEMASUKAN DAN PENGERLUARAN"<<endl;

cout<<"Masukan Jumlah Pemasukan = ";
cin>>pemasukan;
cout<<"Masukan Jumlah Pengeluaran = ";
cin>>pengeluaran;

if (pemasukan<pengeluaran)
{
    cout<<"Pemasukan Lebih Kecil dari Pengeluaran\n";
}

else if(pemasukan>pengeluaran)
{
    cout<<"Pemasukan Lebih Besar dari Pengeluaran\n";

}
else
    cout<<"error";
}
