/**
Author : Ahmad Irfan Fadholi
NPM    : 140810180034
Deskripsi :Program untuk menghasilkan output Fizz jika angka habis di bagi 3, Buzz jika angka habis di bagi 5 dan FizzBuzz jika angka habis di bagi 3 & 5
Tahun : 2019 **/


#include <iostream>
using namespace std;

void fizzbuzz(){
	for (int i=1;i<=100;i++){
		if (i%3==0 && i%5==0){
			cout<<"FizzBuzz\n";
		}
		else if (i%3==0){
			cout<<"Fizz\n";
		}
		else if (i%5==0){
			cout<<"Buzz\n";
		}
		else cout<<i<<endl;
		}
	}

int main(){
	fizzbuzz();
}
