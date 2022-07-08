#include <iostream>
#include <string>
using namespace std;

class solution
{
public:
    string invert(string num)
    {
        for (auto &digit : num)
        {
            if (digit > '4')
                digit = '9' - digit + '0';
        }

        if (num.front() == '0')
            num.front() = '9';

        return num;
    }
};

int main()
{
    string num;
    cin >> num;

    solution obSol;

    num = obSol.invert(num);

    cout << num << endl;
    return 0;
}