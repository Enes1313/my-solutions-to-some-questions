// "Can the answer to a question written as 300 lines be written as 40 lines?" the result of his claim.
#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>

int main()	// Emir'e sevgilerle...
{
	std::string ln;
	std::ifstream file("iddia_kazanildi.txt");
	std::vector<std::tuple<std::string, std::string, int>> v;
	
	std::getline(file, ln);

	while (std::getline(file, ln))
		v.emplace_back(ln, ln.substr(ln.find('2', 3), 8), 0);
	
	for (std::size_t i = 0; std::ifstream f{"./" + std::string(1, char('a' + i)) + "/b.txt"}; i++)
		while (std::getline(f, ln))
			for (auto& n : v)
				if (ln.find(std::get<1>(n)) + 1) 
					++std::get<2>(n);

	for (auto& n : v)
		std::cout << std::get<2>(n) << "\t" << std::get<0>(n) << "\n";
}
