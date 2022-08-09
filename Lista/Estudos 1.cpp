#include <iostream>
#include <string.h>

using namespace std;

void troca(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void inverte(int *vetor, int a, int b) {
	for (int i = 0; i < b/2; i++)
		troca(vetor[a+i], vetor[b-i]);
}


int main () {
	int *vetor, tam, n, c, f;
	cin >> tam;
	vetor = new int[tam];
	for (int i = 0; i < tam; i++) {
		cin >> n;
		vetor[i] = n;
	}
	cin >> c >> f;
	inverte(vetor, c, f);
	for (int i = 0; i < tam; i++) {
		cout << vetor[i] << " ";
	}
}
	
