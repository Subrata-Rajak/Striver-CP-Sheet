#include <iostream>
#include <algorithm>
using namespace std;

class solution
{
public:
    int max_toasts(int f, int b, int d, int l, int p, int s, int dpf, int spf)
    {
        int max_toasts_for_drink = (b * d) / dpf;
        int max_toasts_for_salt = s / spf;
        int max_toasts_for_limes = (l * p);

        int min_possibility_of_max_toasts = min(min(max_toasts_for_drink, max_toasts_for_limes), max_toasts_for_salt);

        return min_possibility_of_max_toasts / f;
    }
};

int main()
{
    int friends, bottles, drink, limes, limes_piece, salt, drink_per_friends, salt_per_friends;
    cin >> friends >> bottles >> drink >> limes >> limes_piece >> salt >> drink_per_friends >> salt_per_friends;

    solution obSol;

    int max_toasts = obSol.max_toasts(friends, bottles, drink, limes, limes_piece, salt, drink_per_friends, salt_per_friends);

    cout << max_toasts << endl;

    return 0;
}