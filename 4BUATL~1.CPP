//Buatlah Program untuk menjumlahkan bilangan bulat yang dimasukkan melalui keyboard, batas awal (i) bertipe integer, batas akhir(n) bertipe integer dan jumlah (sum) bertipe integer untuk menyimpan total bilangan bulat//
//ILUSTRASI :
//Jumlah bilangan : 5
//2 3 10 7 3
//Hasil Penjumlahan = 25
//Jawabannya:
#include<iostream>
using namespace std;
int main()
{
int i, n, bilangan[100], sum=0;
cout<<"Jumlah bilangan=";
cin>>n;
for(i=0;i<n;i++){
cin>>bilangan[i];
}
for(i=0;i<n;i++){
sum=sum+bilangan[i];
}
cout<<"Hasil Penjumlahan="<<sum;
}
