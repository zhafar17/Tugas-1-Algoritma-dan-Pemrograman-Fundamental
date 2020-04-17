// Buat Program untuk menyusun nomor dus air 2,4,6,…18 (gunakan looping) ke dalam rang kontainer yang memuat ukuran 3 x 3, setiap dus akan diberi nomor sebanyak jumlah dus dan ukuran kontainer
//Jawabannya:
#include <iostream>
using namespace std;
int main()
{
int i, j=1, k;
int dus[3][3]={(2,4,6),(8,10,12),(14,16,18)};
cout<<"jumlah dus=9"<<endl;
cout<<"nomor dus=";
for(i=0; i<9; i++){
cout<<(i+1)*2<<" ";
}
cout<<endl;
for(i=0; i<3; i++){
k=(i+1)*2;
dus[i][0]=k;
cout<<"nomor dus"<<" "<<j++<<"="<<dus[i][0]<<endl;
}
for(i=0;i<3;i++){
k=(i+4)*2;
dus[i][1]=k;
cout<<"nomor dus"<<" "<<j++<<"="<<dus[i][1]<<endl;

}
for(i=0;i<3;i++){
k=(i+7)*2;
dus[i][2]=k;
cout<<"nomor dus"<<" "<<j++<<"="<<dus[i][2]<<endl;
}
}


