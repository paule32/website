#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string s = "abcdABCD";
    std::sort(s.begin(), s.end());
    do
    {
        for (int i = 0; i < 4; ++i)
            std::cout << s[i];

        std::cout << " | ";

        for (int i = 4; i < 8; ++i)
            std::cout << s[i];

        std::cout << "\n";
    }
    while (std::next_permutation(s.begin(), s.end()));
    return 0;
}
