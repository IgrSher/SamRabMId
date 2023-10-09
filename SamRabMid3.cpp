#include <iostream>

int main()
{
	long long num = 0;
	std::cin >> num;
	if (num < 0)
		num *= -1;
	if (num - 10 < 0)
		std::cout << num;
	else {
		int min1 = 10, min2 = 10, num1 = num, ind = 0, i = 0;
		while (num) {
			int col = num % 10;
			i++;
			if (col < min1) {
				min1 = col;
				ind = i;
			}
			num /= 10;
		}
		i = 0;
		while (num1) {
			i++;
			int col = num1 % 10;
			if (col < min2 && ind != i)
				min2 = col;
			num1 /= 10;
		}
		std::cout << min1+min2;
	}
}