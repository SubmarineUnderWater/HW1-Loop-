#include <iostream>
using namespace std;

int main(void) {
	int n;
	int i = 0;

	cout << "몇 번 출력하시겠습니까?";
	cin >> n;

	do {
		cout << "Hello World" << endl;
		i++;
	} while (i < n);

	return 0;
}