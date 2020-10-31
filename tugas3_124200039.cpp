#include <iostream>
#include <string>
using namespace std ;
int main()
{
		string name, pass;
		double a, b, c, z ;
	 	int kalkulus, algoritma_dan_pemrogaman ;
	 	
	cout <<"Login Akun ==============="<<endl ;
	cout <<"Username		:  ";
	cin >>name ;
	cout <<"Password 		:  ";
	cin >>pass;
	
	cout <<"==========================="<<endl ;
	
	
	if ( name == "DyahAyuZubaeda" && pass == "124200039" ){
	cout <<" Login Sukses "<<endl ;
	cout<<"/n/"<<endl ;
	cout<<"Input Nilai Mata Kuliah"<<endl ;
	cout<<"1. Algoritma dan pemrograman  "<<endl ;
	cout<<"2. Kalkulus					  "<<endl ;
	cout<<"Pilihan : " ;
	cin>> z ;
}
	if (z == 1){
	
	cout<<"Pilih : 1"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>a ;
	cout<<"Nilai UTS 	: " ;
	cin>>b ;
	cout<<"Nilai UAS	: " ;
	cin>>c;
	
	if ((a+b+c)/3>=80){
		cout<<"anda Lulus Algoritma dan pemrograman dengan nilai "<<(a+b+c)/3<<endl ;
	}
	
	else if ((a+b+c)/3 <= b){
		cout<<"anda Tidak Lulus Algoritma dan Pemrograman dengan nilai "<<(a+b+c)/3<<endl ;
	}
	
	else if (z == 2){
		cout<<"Pilih : 2"<<endl ;
	cout<<"Nilai Harian : " ;
	cin>>a ;
	cout<<"Nilai UTS 	: " ;
	cin>>b ;
	cout<<"Nilai UAS	: " ;
	cin>>c;
	
	if ((a+b+c)/3>=80){
		cout<<"anda Lulus Kalkulus dengan nilai "<<(a+b+c)/3<<endl ;
	}
	else if ((a+b+c)/3 <= b){
		cout<<"anda Tidak Lulus Kalkulus dengan nilai "<<(a+b+c)/3<<endl ;
	}
	}
	
}
else if ( pass !="124200039" && name == "DyahAyuZubaeda")
{
	cout <<"password anda salah"<<endl ;
}
else if ( name !="DyahAyuZubaeda" && pass == "124200039" )
{
	cout <<"Username anda salah"<<endl ;
}

else 


	cout <<"Username dan Password Salah !!!"<<endl ;
	
}



