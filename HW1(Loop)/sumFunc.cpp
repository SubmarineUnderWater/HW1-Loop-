#include <iostream>
using namespace std;

int sum(int a, int b);

int main(void) {
	int x, y;
	cout << "첫 번째 수를 입력하시오:";
	cin >> x;

	cout << "두 번째 수를 입력하시오:";
	cin >> y;

	cout << "두 수의 합은 " << sum(x, y) << "입니다." << endl;
	
	return 0;
}

int sum(int a, int b) {
	return a + b;
}