#include <iostream>
using namespace std;

const int sor = 100;

int main()
{
    int matrix[sor][sor];
    int n;
    int sum = 0;


    cout << "Enter the size of the square matrix: ";
    cin >> n;


    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            {
            cout << "Enter element matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    for (int i = 0; i < n; ++i)
        {
        sum += matrix[i][i];
    }


    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}
