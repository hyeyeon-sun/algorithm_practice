#include <iostream>
using namespace std;

int main() {
	int length;
	cin >> length;
	int* nums = new int[length];
	int a, b;

	for (int i = 0; i < length; i++) {
		cin >> a >> b;
		nums[i] = a + b;
	}

	for (int i = 0; i < length; i++) {
		cout << "Case #" << i + 1 << ": " << nums[i] << endl;
	}
}