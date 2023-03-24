#include <iostream>
using namespace std;
int suma2 (int num1, int num2){
	int resultado = 0;
	resultado = num1+num2;
	return resultado;
}

void suma (int num1, int num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}

int suma3 (int num1, int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}

int resta (int num1, int num2){
	int resultado = 0;
	resultado = num1-num2;
	return resultado;
}

main (){
	cout<<suma2(10,20)<<endl;
	cout<<resta(10,20)<<endl;
	cout<<suma3(10,20,50)<<endl;
	
	int a=10,b=300;
	suma(a,b);
	cout<<"a:  "<<a<<endl;
	cout<<"b:  "<<a<<endl;
	system("pause");

}

