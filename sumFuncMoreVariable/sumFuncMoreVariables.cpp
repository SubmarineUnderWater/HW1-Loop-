#include <iostream>
using namespace std;
int n;

int sum(void);

int main(void) {
	cout << "정수 " << n << "개의 합은 " << sum() << "입니다." << endl;

	return 0;
}

int sum(void) {
	int a[4] = { 0 };
	int sum=0;

	cout << "더할 정수의 개수를 입력하시오:";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "정수를 입력하시오:";
		cin >> a[i];
		sum += a[i];
	}
	
	return sum;
}