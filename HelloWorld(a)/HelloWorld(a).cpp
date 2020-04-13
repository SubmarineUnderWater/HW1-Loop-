#include <iostream>
using namespace std;

int main(void) {
	int n;

	cout << "몇 번 출력하시겠습니까?";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Hello World" << endl;
	}

	return 0;
}