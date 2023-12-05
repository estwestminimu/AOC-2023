#include <iostream>
#include <string>
using namespace std;

bool isNumber(const std::string &s)
{
    try
    {
        std::size_t pos;
        std::stoi(s, &pos);
        return pos == s.size();
    }
    catch (...)
    {
        return false;
    }
}

int main()
{
    int redMax = 12;
    int greenMax = 13;
    int blueMax = 14;
    int blueTemp = 0, redTemp = 0, greenTemp = 0;
    int sum = 0;
    int overflow = false;
    string s;
    int i = 1;
    int temp = 0;
    while (true)
    {
        std::cin >> s;
        if (isNumber(s))
        {
            temp = stoi(s);
            std::cin >> s;

            if (s == "red")
            {
                if (redTemp < temp)
                {
                    redTemp = temp;
                }
            }
            else if (s == "green")
            {
                if (greenTemp < temp)
                {
                    greenTemp = temp;
                }
            }
            else if (s == "blue")
            {
                if (blueTemp < temp)
                {
                    blueTemp = temp;
                }
            }
        }
    

    if (s == ".")
    {

            sum += redTemp*blueTemp*greenTemp;
        cout << "SUM" << sum << "\n";
            blueTemp = 0;
            redTemp = 0;
            greenTemp = 0;

    }
    if (s == "=")
    {

        std::cout << sum;
        return 0;
    }
    }
return 0;
}