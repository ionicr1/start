#include<iostream>

using namespace std;

void sum() {
	int num1, num2;
	cout<<"\nPlease type a number: ";
	cin>>num1;
	cout<<"\n\nPlease type another number: ";
	cin>>num2;
	cout<<"\n\nYour numbers summed: "<<num1+num2<<endl;
}

int main() {
	cout<<"\nHello World!\n";
	cout<<"The coronavirus is getting worse, more insidious.\n\n";
	sum();
	return 0;
}