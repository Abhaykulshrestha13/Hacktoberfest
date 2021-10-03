#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sumOfSquares = 0, squareOfSum = 0;
    
    for (int number = 1; number <= 100; ++number)
    {
        sumOfSquares += (number * number);
        squareOfSum += number;
    }
    squareOfSum *= squareOfSum;

    cout << (squareOfSum - sumOfSquares) << endl;
}