
#include <iostream>

int main()
{
    long long num = 0, res = 1;
    std::cin >> num;
    if (num = 0)
        std::cout << 0;
    if (num < 0)
        num *= -1;
    while (num) {
        int d = num % 10;
        if (d != 0 && d % 2 == 0)
            res *= d;
        num /= 10;
    }
    std::cout << res;
    return 0;
}