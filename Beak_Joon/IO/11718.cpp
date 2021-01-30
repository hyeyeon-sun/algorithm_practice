#include<iostream>
using namespace std;

int main() {

	char a[100];
	for (int i = 0; i < 100; i++) {
		cin.getline(a, 101);
		cout << a << endl;
	}
}