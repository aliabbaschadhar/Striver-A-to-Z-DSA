#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num)
{
    int revnumber = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        revnumber = (revnumber * 10) + lastDigit;
        num = num / 10;
    }
    return revnumber;
    // TC--> O(log10N) space-->O(1)
}
int main()
{
    int n = 480900;
    cout << reverseNumber(n);
    return 0;
}