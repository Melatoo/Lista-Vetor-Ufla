#include <iostream>
#include <string.h>

using namespace std;


int main () {
	int n, cap = 5, tam = 0, *original, redm= 0;
	original = new int[cap];
	cin >> n;
	while (n > 0) {
		if (tam < cap) {
			original[tam] = n;
			tam++;
	}
		else {
			redm++;
			int *novo = new int[cap+5];
			memcpy(novo, original, cap*sizeof(int));
			cap += 5;
			delete[] original;
			original = novo;
		}
	cin >> n;
	}
	for (int i = 0;i < cap;i++) {
		cout <<original[i] << " ";
	}
	cout << endl << cap;
}
