#include<iostream>
using namespace std;

int main() {
	int H = 0;
	int M = 0;
	
	cin >> H >> M;

	if (M >= 45) {
		M -= 45;
	}
	else {
		if (H == 0) {
			H = 23;
			M += 15;
		}
		else {
			H -= 1;
			M += 15;
		}
	}

	cout << H <<" "<< M << endl;

}