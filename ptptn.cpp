#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

double hutang,untung;
double peratus_bayaran;
double untung_sebulan;
double bayar_balik;
double untung_bank;
double total_untung_bank;
int tempoh;

cout<<"Masukkan jumlah bayaran lumpsum PTPTN"<<endl;
cin>>hutang;

cout<<"Masukkan nilai keuntungan kad kredit setahun"<<endl;
cin>>untung;

peratus_bayaran=untung/100;
untung_sebulan=peratus_bayaran/12;

cout<<"Masukkan nilai bayar balik kepada bank setiap bulan"<<endl;
cin>>bayar_balik;

untung_bank=hutang*peratus_bayaran;
total_untung_bank=hutang+(hutang*peratus_bayaran);
//tempoh=(total_untung_bank-bayar_balik)/bayar_balik;
tempoh=(total_untung_bank)/bayar_balik;

cout<<endl;
cout<<"*********CETAK LAPORAN******************"<<endl<<endl;
cout<<"Nilai hutang: "<<hutang<<endl;
cout<<"Nilai hutang+keuntungan bank: "<<total_untung_bank<<endl;
cout<<"Jumlah keuntungan bank ialah: "<<untung_bank<<endl;
cout<<"Tempoh bayar balik ialah: "<<tempoh<<" bulan"<<endl;
cout<<endl;
cout<<"****************************************"<<endl;
cout<<endl;

int i;
double faedah;
//	cout<<setfill('*')<<"\t\t"<<"Jadual Pembayaran"<<"\t\t"<<endl;
	cout<<"Bulan"<<"\t"<<"Jumlah Dibayar"<<"\t"<<"Jumlah Sebelum Pembayaran"<<"\t"<<"Baki Hutang"<<"\t"<<"Jumlah Untung Bank"<<endl;
	
	for (i=1;i<=tempoh;i++)
	{
//	string bulan[12]={"Januari","Februari","Mac","April","Mei","Jun","Julai","Ogos","September","Oktober","November","Disember"};	
//	cout<<bulan[i-1]<<"\t\t"<<bayar_balik<<"\t\t"<<(total_untung_bank-untung_bank)*baki_bulan*untung_sebulan<<endl;
//	cout<<i<<"\t\t"<<bayar_balik<<"\t\t"<<hutang<<"\t\t\t"<<(hutang-bayar_balik)<<"\t\t"<<hutang*untung_sebulan<<endl;

	cout<<i<<"\t\t"<<bayar_balik<<"\t\t"<<hutang+faedah<<"\t\t\t"<<(hutang-bayar_balik)<<"\t\t"<<hutang*untung_sebulan<<endl;
	faedah=hutang*untung_sebulan;
	hutang-=bayar_balik;
	}

return 0;

}

