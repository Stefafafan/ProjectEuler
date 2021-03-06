#include <iostream>

constexpr auto squareSumDiff(const int num)
{
	auto total = 0;
	auto sum = 0;

	for (auto x = 1; x <= num; ++x)
	{
		total += x;
		sum += (x * x);
	}

	return (total * total) - sum;
}

auto main() -> int
{
	std::cout << squareSumDiff(100) << std::endl;
	return 0;
}