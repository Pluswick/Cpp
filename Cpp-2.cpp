#include<iostream>

using namespace std;

int main(void) {
	int a = 77;
	char b = a;

	cout << b << endl;
	// ASCII 코드로 출력 됨.
	b = 'a';
	//b = "a";는 불가함 null 문자('\0')가 문자열의 끝에 존재해야 하기 때문.

	cout << b << endl;

	char c[4] = { 'a', 'b', 'c', 'd' };

	for (int i = 0; i < 4; i++) {
		cout << c[i] << endl;
	}
	
	bool t = 1;
	bool f = 0;
	bool w = 10;

	cout << w << endl; 
	//bool 자료형은 0을 제외한 모든 숫자를 1로 저장함.

	return 0;
}