#include <bits/stdc++.h>

using namespace std;

int numberofDigits(int n)
{
    // int count=0;
    // while (n>0)
    // {
    //     int lastdigit = n%10;
    //     count++;
    //     n = n/10;
    // TIME COMPLEXITY: O(log10 n)rev
    // }
    // return count;

    int cnt = (int)log10(n) + 1; // TIME Complexity  & space --> O(1)
    return cnt;
}
int main()
{
    int number = 8989;
    cout << "Digits are: " << numberofDigits(number);

    return 0;
}