#include <iostream>
using namespace std;

int main() {
	int year = 0;
	cin >> year;
	int a = 0;

	if (year % 4 == 0 && year % 100 != 0||year % 400 == 0)
		a = 1;

	cout << a << endl;
}