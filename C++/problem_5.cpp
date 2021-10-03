#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 1;
    
    while (!(
        (num % 11 == 0) &&
        (num % 12 == 0) &&
        (num % 13 == 0) &&
        (num % 14 == 0) &&
        (num % 15 == 0) &&
        (num % 16 == 0) &&
        (num % 17 == 0) &&
        (num % 18 == 0) &&
        (num % 19 == 0) &&
        (num % 20 == 0)
    ))
    {
        ++num;
    }
    
    cout << num << endl;
}