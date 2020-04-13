#include <iostream>
using namespace std;

int sum(int n, int b[]);

int main(void) {
	int n;

	cout << "더할 정수의 개수를 입력하시오:";
	cin >> n;

	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "정수를 입력하시오:";
		cin >> p[i];
	}

	cout << "정수 " << n << "개의 합은 " << sum(n, p) << "입니다." << endl;

	delete[]p;

	return 0;
}

int sum(int n, int b[]) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return b[n-1];
	else
		return b[n-1] + sum(n - 1, b);
}