#include <iostream>

using namespace std;

int reverse_num(int);
void rotate(int a[], unsigned size, int shift);
int my_strstr(const char* text, const char* pattern);

int main() {
	setlocale(LC_ALL, "RU");
	const unsigned int size = 5;
	int a[size] = { 1, 2, 3, 4, 5 },
		shift = 6;
	rotate(a, size, shift);

	cout << endl;
	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << endl;

	//srand(time(NULL));

	//int result = 0 + rand() % 100;
	//cout << result << '\n';

	//float num1, num2, res = 0;
	//cout << "Enter num1: ";
	//cin >> num1;

	//cout << "Enter num2: ";
	//cin >> num2;

	//char math;
	//cout << "Enter symbol: ";
	//cin >> math;

	///*if (math == '+') {
	//	res = num1 + num2;
	//}
	//else if (math == '-') {
	//	res = num1 - num2;
	//}
	//else if (math == '*') {
	//	res = num1 * num2;
	//}
	//else if (math == '/') {
	//	res = num1 / num2;
	//}*/

	//switch (math) {
	//case '+': 
	//	res = num1 + num2;
	//	break;
	//case '-':
	//	res = num1 - num2;
	//	break;
	//case '*':
	//	res = num1 * num2;
	//	break;
	//case '/':
	//	res = num1 / num2;
	//	break;
	//default:
	//	res = 0;
	//	cout << "Error\n";
	//	break;
	//}

	//cout << "Result: " << res << '\n';

	return 0;
}
int my_strstr(const char* text, const char* pattern)
{
	if (*pattern == '\0') return 0;
	int i = 0, res = 0;
	while (*text) {
		if (*text == *pattern) {
			char* p = &pattern[0],
				* t = text;
			for (int j = 0; *p; j++) {
				if (*(t + j) != *(p + j))
					return -1;

			}
		}
		i++;
		text += 1;
	}
	/* ... */
}

void rotate(int a[], unsigned size, int shift)
{
	int t = 0;
	if (shift > size) {
		shift = shift % size;
	}
	for (int j = 0; j < shift; j++) {
		for (int i = 0; i < size-1; i++) {
			//swap(a[i], a[i + 1]);
			t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
		}	
	}
}

int reverse_num(int a) {
	int b;
	cin >> b;
	if (b != 0) {
		reverse_num(b);
		cout << a << ' ';
	}
	else {
		cout << a << ' ';
		return 0;
	}

}