/**
Author : Ahmad Irfan Fadholi
NPM    : 140810180034
Deskripsi : Konversi Celcius ke Fahrenheit
	Tahun : 2019 **/
	
#include <iostream>
using namespace std;

float cel2fah(float temp){
	return (temp*9/5+32);
}	

int main(){
	int celcius=9;
	float fahrenheit= cel2fah(celcius);
	cout<<"temp is "<<fahrenheit;
}
