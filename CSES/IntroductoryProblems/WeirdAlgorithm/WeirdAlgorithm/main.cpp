#include <iostream>
#include <iomanip>

void WeirdAlgorithm(long long n)
{
    std::cout << std::setw(10) << std::left << "Output: ";
    while (n != 1)
    {
        std::cout << n << ", ";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
            n = (n * 3) + 1;
    }
    std::cout << n << std::endl;
}

int main()
{
    long long N;
    std::cout << std::setw(10) << std::left << "Input: ";
    std::cin >> N;
    WeirdAlgorithm(N);

    return 0;
}

