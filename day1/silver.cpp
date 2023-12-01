#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c;
    int i = 0;
    int sum = 0;
    int firstCheck = 1;
    int second;
    while (true)
    {
        std::cin >> c;
        if (c == '.')
        {
            std::cout << sum << "\n";
            return 0;
        }
        if (firstCheck)
        {
            if (((int(c) - 48) <= 9) && ((int(c) - 48) >= 0))
            {
                sum += ((int(c) - 48) * 10);
                firstCheck = 0;
            }
        }
        if (((int(c) - 48) <= 9) && ((int(c) - 48) >= 0))
        {
            second = (int(c) - 48);
        }
        if (c == ',')
        {
            sum += second;
            firstCheck = 1;
        }

        i++;
    }
    return 0;
}