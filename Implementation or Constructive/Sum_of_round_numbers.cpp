#include <iostream>
#include <math.h>
using namespace std;

class solution
{
public:
    void sum_of_round_number(int num)
    {
        int round_num_count = 0, temp = num, reversed_num = 0, length = 0;

        while (temp)
        {
            if (temp % 10 != 0)
                round_num_count++;

            reversed_num += (temp % 10);
            reversed_num *= 10;
            temp /= 10;
            length++;
        }

        cout << round_num_count << endl;
        reversed_num /= 10;

        int i = length - 1;
        while (reversed_num)
        {
            if ((reversed_num % 10) != 0)
                cout << pow(10, i) * (reversed_num % 10) << " ";
            i--;
            reversed_num /= 10;
        }
        cout << endl;
    }
};

int main()
{
    int testcases;
    cin >> testcases;

    while (testcases--)
    {
        int num;
        cin >> num;

        solution obSol;
        obSol.sum_of_round_number(num);
    }
    return 0;
}