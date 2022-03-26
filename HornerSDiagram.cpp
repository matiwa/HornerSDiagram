#include<iostream>
#include<windows.h>
using namespace std;

int horner(int wsp[],int st, int x){
	if(st==0) return wsp[0];
	return x*horner(wsp,st-1,x)+wsp[st];
}

int main(){
	SetConsoleTitleA("Horner's Diagram");
	
	int *coefficients;
	int degree, x;
	
	cout<<"Enter the degree of the polynomial: ";
	cin>>degree;
	coefficients=new int[degree+1];
	for(int i=0;i<=degree;i++){
		cout<<"Enter the coefficient next to the power "<<degree-1<<": ";
		cin>>coefficients[i];
	}
	cout<<"Give the argument x of the polynomial: ";
	cin>>x;
	cout<<"W("<<x<<") = "<<horner(coefficients,degree,x)<<endl;
	delete []coefficients;
	system("pause");
	return 0;
}
