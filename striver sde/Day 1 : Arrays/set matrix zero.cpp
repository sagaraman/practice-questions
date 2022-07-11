#include <iostream>
using namespace std;
int main()
{
    cout << "enter row size\n";
    int rowsize;
    cin >> rowsize;
    cout << "enter column size\n";
    int columnsize;
    cin >> columnsize;
    int mat[rowsize][columnsize];
    cout << "enter values\n";
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            cin >> mat[i][j];
            cout << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            if (mat[i][j] == 0)
            {
                for (int k = 0; k < rowsize; k++)
                {
                    for (int l = 0; l < columnsize; l++)
                    {
                        if (i == k || j == l)
                        {
                            mat[k][l] = -1;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            if (mat[i][j] == -1)
            {
                mat[i][j] == 0;
            }
        }
    }
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
