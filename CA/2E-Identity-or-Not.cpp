#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3];
    bool identity = true;

    cout << "Enter elements of 3x3 matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && matrix[i][j] != 1)
                identity = false;

            if (i != j && matrix[i][j] != 0)
                identity = false;
        }
    }

    if (identity)
        cout << "The matrix is an Identity Matrix.";
    else
        cout << "The matrix is NOT an Identity Matrix.";

    return 0;
}
