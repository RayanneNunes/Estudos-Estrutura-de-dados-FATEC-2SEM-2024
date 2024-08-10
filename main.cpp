#include <iostream>
using namespace std;

int soma(int);

int main() {
	int n;
	
	cout << "Digite um numero inteiro: ";
	cin >> n;
	
	cout << "Total: " << soma(n);
	
	return 0;
}

int soma(int n){
	int total;
	for (int i; i<=n; i++){
		total +=i;
	}
	
	return total;
} 
