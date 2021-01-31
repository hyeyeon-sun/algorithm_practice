#include <iostream>
using namespace std;

int main() {

	char text[100];

	for (int i = 0; i < 100; i++) {
		text[i] = -1;
	}


	cin.get(text, 101);

	for (int i = 0; i < 100; i++) {

		if (text[i] == -1)
			break;

		if (i % 10 == 0 && i != 0)
			cout << endl;
		cout << text[i];
	}



}