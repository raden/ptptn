#include<iostream>

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

cout<<endl;
cout<<"Masukkan nilai bayar balik kepada bank setiap bulan"<<endl;
cin>>bayar_balik;

untung_bank=hutang+(hutang*untung_sebulan);
tempoh=untung_bank/bayar_balik;
total_untung_bank=hutang*untung_sebulan*tempoh;

cout<<endl<<endl;
cout<<"*********CETAK LAPORAN******************"<<endl<<endl;
cout<<"Nilai hutang: "<<hutang<<endl;
cout<<"Nilai hutang+keuntungan bank: "<<hutang+total_untung_bank<<endl;
cout<<"Jumlah keuntungan bank ialah: "<<total_untung_bank<<endl;
cout<<"Tempoh bayar balik ialah: "<<tempoh<<" bulan"<<endl;
cout<<endl;
cout<<"****************************************"<<endl;

return 0;

}

