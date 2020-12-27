#include <iostream>

using namespace std;

int main() {
	cout << "Enter the number of row:_ ";
	int n;
	cin >> n;
	int sp = n-1;
	for (int i = 0; i < n; i++) {
		for (int j = sp; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k <= ((i+1)*2) - 1; k++) {
			cout << "*";
		}
		sp--;
		cout << "\n";
	}
	cout << "\n_____________________________________________________\n";
	for (int i = 0; i < n; i++) {
		for (int j = n; j >= (n-i); j--) {
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n_____________________________________________________\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n-i); j++) {
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n_____________________________________________________\n";
	int newsp = n - 1;
	for (int i = 0; i < n; i++) {
		for (int j = newsp; j > 0; j--) {
			cout << " ";
		}
		for (int k = 0; k < (i+1); k++) {
			cout << "*";
		}
		newsp--;
		cout << "\n";
	}
	cout << "\n_____________________________________________________\n";
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = 0; j < (n - i); j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}