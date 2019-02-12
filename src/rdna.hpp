#include <string>
#include <random>

std::string randDNA(int seed, std::string bases, int length) {
	int i;
	int min = 0;
	int max = bases.length() - 1;
	std::string chain = "";

	std::mt19937 eng(seed);
	std::uniform_int_distribution<> unifrm(min, max);

	for (i = 0; i < length; i++)
		chain += bases[unifrm(eng)];

	return chain;
}
