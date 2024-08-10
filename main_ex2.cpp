#include <iostream>
using namespace std;

int soma (int n){
	if ((n==1) || (n==0)){
		return 1;
	} else {
		return soma (n-1)+n;
	}
}

int main( ) {
	int n;
	cout << "Digite um numero inteiro: " << endl;
	cin >> n;
	cout << "Total: " << soma(n) << endl;
	
	return 0;
}
