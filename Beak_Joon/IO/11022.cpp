#include <iostream>
using namespace std;

int main() {
	int length;
	cin >> length;

	int** adders = new int*[length];
	for (int i = 0; i < length; i++) {
		adders[i] = new int[2];
		cin >> adders[i][0] >> adders[i][1];
	}

	for (int i = 0; i < length; i++) {
		cout << "Case #" << i + 1 << ": " << adders[i][0] << " + " << adders[i][1] << " = " << adders[i][0] + adders[i][1] << endl;
	}


}