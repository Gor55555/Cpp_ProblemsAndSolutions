#include <iostream>
#include <iomanip>

void Permutations(int n)
{
	std::cout << std::setw(10) << std::left << "Output: ";
	if (n == 1)
	{
		std::cout << 1;
		return;
	}
	if (n == 2 || n == 3)
	{
		std::cout << "No Solution";
		return;
	}

	if (n % 2 == 0)
	{
		for (int i = 2; i <= n; i += 2)
			std::cout << i << " ";
		for (int i = 1; i < n; i += 2)
			std::cout << i << " ";
	}
	else
	{
		for (int i = n - 1; i > 0; i -= 2)
			std::cout << i << " ";
		for (int i = n; i > 0; i -= 2)
			std::cout << i << " ";
	}

}

int main()
{
	int n;
	std::cout << std::setw(10) << std::left << "Input: ";
	std::cin >> n;
	Permutations(n);

}