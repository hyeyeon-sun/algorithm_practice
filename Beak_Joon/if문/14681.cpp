#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int x = 0;

	cin >> a >> b;

	if (a > 0 && b > 0)
		x = 1;
	else if (a < 0 && b > 0)
		x = 2;
	else if (a < 0 && b < 0)
		x = 3;
	else if (a > 0 && b < 0)
		x = 4;

	cout << x << endl;
}