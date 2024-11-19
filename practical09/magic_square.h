#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n)
{

    // Eliminate the case where 'n' is negative
    if(n < 0)
    {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    int RowSum = 0;
    int ColSum = 0;

    // Checking that rows and columns each add up to M
    for (i = 0; i < n; i++)
    {
        RowSum = 0;
        ColSum = 0;
        for (j = 0; j < n; j++)
        {
            RowSum += square[i][j];
            ColSum += square[j][i];
        }
        if (RowSum != M || ColSum != M)
        {
            return 0;
        }
    }





    // Checking that the main and secondary diagonals each add up to M
    int DiagSum = 0;
    int DiagSum2 = 0;
    for (i = 0; i < n; i++)
    {
        DiagSum += square[i][i];
        DiagSum2 += square[i][n - i - 1]; 
    }
    if (DiagSum != M || DiagSum2 != M)
    {
        return 0;
    }


    // If passed all checks, it is a magic square


    return 1;
}

