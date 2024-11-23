#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime using brute force approach
// TimeComplexity--> O(n)
bool isPrime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    return count == 2 ? true : false;
}
// Optimal aproach
// O(sqrt(n))
bool OptimalIsPrime(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if (i != num / i)
            {
                count++;
            }
        }
    }
    return count == 2 ? true : false;
}

int main()
{
    cout << "Testing isPrime function:" << endl;
    cout << "Is 7 prime? " << boolalpha << isPrime(7) << endl;
    cout << "Is 8 prime? " << boolalpha << isPrime(8) << endl;
    cout << "Is 11 prime? " << boolalpha << isPrime(11) << endl;
    cout << "Is 100 prime? " << boolalpha << isPrime(100) << endl;

    // Test cases for OptimalIsPrime function
    cout << OptimalIsPrime(7);

    return 0;
}