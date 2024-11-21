#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num)
{
    int revnumber = 0;
    // For negative numbers
    bool is_negative = num < 0;
    num = abs(num); // Making it positive
    while (num > 0)
    {
        int lastDigit = num % 10;
        revnumber = (revnumber * 10) + lastDigit; // reversing a number
        num = num / 10;
        // Checking for overflow and underflow
        if (revnumber > INT16_MAX || revnumber < INT_MIN)
        {
            return 0;
        }
    }
    // Making +ve again -ve again if it was -ve at first
    if (is_negative)
    {
        revnumber = -revnumber;
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