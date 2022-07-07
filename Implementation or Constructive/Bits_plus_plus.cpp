#include <iostream>
#include <string>
using namespace std;

int x = 0;

class solution
{
public:
    int execute(string instruction)
    {
        if (instruction == "X++")
            x++;
        else if (instruction == "++X")
            ++x;
        else if (instruction == "X--")
            x--;
        else if (instruction == "--X")
            --x;

        return x;
    }
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        string instruction;
        cin >> instruction;

        solution obSol;

        x = obSol.execute(instruction);
    }

    cout << x << endl;
    return 0;
}