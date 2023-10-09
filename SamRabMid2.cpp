#include <iostream>

int main() {
	long long num = 0;
	std::cin >> num;
	if (num < 0)
		num*=-1
	int last = num % 10, min = 10;
	while (num) {
		int d = num % 10;
		if (d < min)
			min = d;
		if (d > max)
			max = d;
		num /= 10;
	}
	int res = (max - min) * last;
	std::cout << res;
}