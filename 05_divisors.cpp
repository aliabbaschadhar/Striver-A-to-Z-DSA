#include <bits/stdc++.h>
using namespace std;

// Brute force
void divisors(int num)
{
    vector<int> vec;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            vec.emplace_back(i);
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

void divisorOptimal(int num)
{
    vector<int> vec;
    for (int i = 1; i <sqrt(num);i++){
        
    }
}

int main()
{
    int n = 36;
    divisors(n);
    return 0;
}