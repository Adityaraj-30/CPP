#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    std::string input{"apple double banana int float chimpanzee"};
    std::vector<std::string> keywords{"double", "int", "float", "switch"};

    for(const auto& keyword : keywords)
    {
        auto pos = input.find(keyword);

        std::cout << keyword
            << " [" << (pos == std::string::npos ? " not found" : " found") << "]\n";   
    }
    return 0;
}