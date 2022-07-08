#include <iostream>
#include <vector>
using namespace std;

class io
{
public:
    vector<vector<int>> input()
    {
        vector<vector<int>> two_d_vec;

        for (int i = 0; i < 5; i++)
        {
            vector<int> one_d_vec;
            for (int j = 0; j < 5; j++)
            {
                int num;
                cin >> num;
                one_d_vec.push_back(num);
            }
            two_d_vec.push_back(one_d_vec);
        }

        return two_d_vec;
    }
};

class solution
{
public:
    int calculate_ops(vector<vector<int>> mat)
    {
        int x, y;

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (mat[i][j] == 1)
                {
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
        }

        return (abs(3 - x) + abs(3 - y));
    }
};

int main()
{
    vector<vector<int>> matrix;

    io obIo;
    matrix = obIo.input();

    solution obSol;
    int number_of_ops = obSol.calculate_ops(matrix);
    cout << number_of_ops << endl;

    return 0;
}
