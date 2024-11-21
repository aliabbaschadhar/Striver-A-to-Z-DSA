#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is a palindrome
bool palindrome(int num)
{
    // Store the original number
    int duplicate = num;

    if (num < 0)
        return false;

    // Handle negative numbers
    if (num < 0)
        return false;

    // Convert the number to positive
    int reverse = 0;
    num = abs(num);
    while (num > 0)
    {
        // Get the last digit
        int lastDigit = num % 10;

        reverse = (reverse * 10) + lastDigit;

        // Remove the last digit from the original number
        num = num / 10;
    }

    // Compare the reversed number with the original
    return reverse == duplicate;
}

int main()
{
    // Test the function with a sample number
    int num = 6873;
    cout << boolalpha << palindrome(num);
    return 0;
}
