#include <iostream>
#include <iomanip>

void MissingNumber(int n)
{
    int s = 0;
    std::cout << std::setw(15) << std::left << "Input Element: ";
    for (int i = 1; i < n; ++i)
    {
        int k;
        std::cin >> k;
        s += k;
    }
    std::cout << std::setw(15) << std::left << "Output: ";
    std::cout << n * (n + 1) / 2 - s;
}

int main()
{
    int n;
    std::cout << std::setw(15) << std::left << "Input line: ";
    std::cin >> n;
    MissingNumber(n);
}
