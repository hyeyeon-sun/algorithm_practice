#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int monthcount(int month) {
	int count = 0;

	for (int i = 1; i < month; i++) {
		if (i > 12) {
			return -1000;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			count += 30;
		}
		else if (i == 2) {
			count += 28;
		}
		else {
			count += 31;
		}
	}
	return count;
}


int main() {
	int month, day;

	scanf_s("%d %d", &month, &day);

	// 달과 날짜가 주어지면 요일을 출력하는 것
	// 4,6,9일때는 30, 2는 28
	// 1일로부터 몇일 지났는지를 알고
	// -> 보통의 경우 month-1 에 해당하는 달 + 날짜
	// 
	// 그걸 7로 나눠서 나머지를 구하면 된다.

	string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	cout << days[(monthcount(month) + day-1) % 7];

}