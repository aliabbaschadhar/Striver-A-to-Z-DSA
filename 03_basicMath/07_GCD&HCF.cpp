#include <bits/stdc++.h>
using namespace std;

//Brute Force
int GCD(int num1, int num2)
{
    int gcd = 1;
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

// Better approach
int findGcd(int n1, int n2)
{
    // Iterate from the minimum of
    // n1 and n2 down to 1
    // Start from the minimum of n1 and n2
    // because the GCD cannot
    // exceed the smaller number

    for (int i = min(n1, n2); i > 0; i--)
    {
        // Check if i is a common
        // factor of both n1 and n2
        if (n1 % i == 0 && n2 % i == 0)
        {
            // If i is a common factor,
            // return it as the GCD
            return i;
        }
    }
    // If no common factors are found,
    // return 1 (as 1 is always a
    // divisor of any number)
    return 1;
}
// Euclidean Algorithm
int findGcd(int a, int b)
{
    // Continue loop as long as both
    // a and b are greater than 0
    while (a > 0 && b > 0)
    {
        // If a is greater than b,
        // subtract b from a and update a
        if (a > b)
        {
            // Update a to the remainder
            // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else
        {
            // Update b to the remainder
            // of b divided by a
            b = b % a;
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if (a == 0)
    {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}

int main()
{
    int gcd = GCD(12, 36);
    cout << gcd;
    return 0;
}
