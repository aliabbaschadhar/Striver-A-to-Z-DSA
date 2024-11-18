#include <iostream>
#include <climits>

using namespace std;

int numberOfDigits(int n)
{
    int count;
    while (n > 0)
    {
        int lastNumber = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}
int main()
{
    int number = 8937;
    cout << "Number of digits in " << number << "are : " << numberOfDigits(number) << endl;
    return 0;
}