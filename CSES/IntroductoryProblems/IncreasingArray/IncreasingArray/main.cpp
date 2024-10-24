#include <iostream>
#include <iomanip>

void IncreasingArray(int n)
{
	int max = 0;
	int ans = 0;
	std::cout << std::setw(15) << std::left << "Input Elements: ";
	for (size_t i = 0; i < n; ++i)
	{
		int k;
		std::cin >> k;
		max = std::max(k, max);
		ans += max - k;
	}
	std::cout << std::setw(15) << std::left << "Output: ";
	std::cout << ans;
}

int main()
{
	int n;
	std::cout << std::setw(15) << std::left << "Input line: ";
	std::cin >> n;
	IncreasingArray(n);
}