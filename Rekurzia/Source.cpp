#include <iostream>
using namespace std;

int fakt(int n) {
	if (n > 1) {
		return n * fakt(n - 1);
	}
	else {
		return 1;
	}


}

int main() {
	int n;
	int faktorial;
	cout << "zadaj cislo" << endl;
	cin >> n;

	faktorial = fakt(n);

	cout << "Faktorial tvojho cisla je" << faktorial << endl;
}