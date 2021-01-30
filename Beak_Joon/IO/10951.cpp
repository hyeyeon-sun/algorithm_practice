#include <iostream>
using namespace std;

int main() {


	int a, b;

	cin >> a;
	cin >> b;

	while (a > 0 && b < 10) {
		cout << a + b<<endl;
		cin >> a;
		cin >> b;
	}
	
}