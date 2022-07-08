#include <iostream>
using namespace std;

class solution
{
public:
    int find_meet_point(int f1, int f2, int f3)
    {
        int total_distance;
        if ((f1 < f2 && f1 > f3) || (f1 > f2 && f1 < f3))
        {
            total_distance = abs(f2 - f1) + abs(f3 - f1);
        }
        else if ((f2 < f1 && f2 > f3) || (f2 > f1 && f2 < f3))
        {
            total_distance = abs(f2 - f1) + abs(f2 - f3);
        }
        else if ((f3 < f2 && f3 > f1) || (f3 > f2 && f3 < f1))
        {
            total_distance = abs(f3 - f1) + abs(f3 - f2);
        }

        return total_distance;
    }
};

int main()
{

    int friend_one, friend_two, friend_three;
    cin >> friend_one >> friend_two >> friend_three;

    solution obSol;

    int total_distance = obSol.find_meet_point(friend_one, friend_two, friend_three);
    cout << total_distance << endl;

    return 0;
}