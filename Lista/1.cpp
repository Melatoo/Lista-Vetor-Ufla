#include <iostream>

using namespace std;

void escreve (int *vet, int b) {
	cout << "[";
	for (int i = 0; i < b; i++) {
		if (i == (b-1))
		cout << vet[i];
		else 
		cout << vet[i] << ", ";
	}
	cout << "]";
}

int main () {
	int n, n1;
	cin >> n;
	int vet[n];
	for (int i = 0; i < n; i++) {
		cin >> n1;
		vet[i] = n1;
	}
	escreve (vet, n1);
	cout << endl;
} 
