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
                redTemp += temp;
            }
            else if (s == "green")
            {
                greenTemp += temp;
            }
            else if (s == "blue")
            {
                blueTemp += temp;
            }
        }

        if (s == ".")
        {
            if (!overflow)
            {
                sum += i;
            }
            overflow = false;

            cout << "SUM" << sum << "\n";

            i++;
        }
        else if (s == ";")
        {
            if (((blueTemp > blueMax) || (redTemp > redMax) || (greenTemp > greenMax)))
            {
                overflow = true;
                cout << "b" << blueTemp << "r" << redTemp << "g" << greenTemp <<"\n ";
            }
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