#include <iostream>
#include <iomanip>
#include <cmath>

const int MAX = 1000;

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main() {
	const int pad = log10(MAX + MAX) + 2;

	for (int i = 1; i <= MAX; i++) {
		cout << i << setw(pad);
	}

	cout << endl << setw(0);

	for (int i = 1; i <= MAX; i++) {
		cout << i * i << setw(pad);
	}

	cout << endl;

	return 0;
}