#include <iostream>

int main()
{
	long long num = 0;
	std::cin >> num;
	if (num < 0)
		num *= -1;
	long long res = 0;
	while (num) {
		int d = num % 6;
		num /= 6;
		res = res * 10 + d;
	}
	std::cout << res;
	return 0;
}

