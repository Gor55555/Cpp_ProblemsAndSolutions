#include <iostream>
#include <string>
#include <iomanip>

void Repetitons(std::string s)
{
	int ans = 1, count = 0;
	char l = 'A';
	for (char d : s)
	{
		if (d == l)
		{
			++count;
			ans = std::max(count, ans);
		}
		else
		{
			l = d;
			count = 1;
		}
	}
	std::cout << std::setw(10) << std::left << "Output: ";
	std::cout << ans;
}

int main()
{
	std::string s;
	std::cout << std::setw(10) << std::left << "Input: ";
	std::cin >> s;
	Repetitons(s);
}