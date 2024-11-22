#include <bits/stdc++.h>
using namespace std;

// Function to find all divisors of a number using brute force approach
void divisors(int num)
{
    vector<int> vec;

    // Iterate through all numbers from 1 to num
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0) // Check if i is a divisor of num
        {
            vec.emplace_back(i); // Add divisor to the vector
        }
    }
    cout << "[";
    for (int x : vec)
    {
        cout << x << ", ";
    }
    cout << "]" << endl;
}

// Optimal approach
vector<int> divisorOptimal(int num)
{
    vector<int> vec;
    int sqrtN = sqrt(num);

    // Iterate up to sqrt(num) to optimize time complexity
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0) // Check if i is a divisor of num
        {
            vec.emplace_back(i); // Add divisor to the vector

            // Add corresponding divisor (num/i) if it's different from i
            if (i != num / i)
            {
                vec.emplace_back(num / i);
            }
        }
    }

    // Sort the divisors in ascending order
    // sorting the vector
    sort(vec.begin(), vec.end());
    return vec;
}

int main()
{
    int n = 36; // Test number

    // Find divisors using optimal approach
    vector<int> vec = divisorOptimal(n);
    vector<int> vec = divisorOptimal(n);

    // Print the divisors
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
