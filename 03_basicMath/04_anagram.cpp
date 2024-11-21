#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is an anagram
bool isArmstrong(int num)
{
    // Store the original number
    int duplicate = num;

    if (num < 0)
        if (num < 0)
        {
            return false;
        }

    // Handle negative numbers
    if (num < 0)
    {
        return false;
    }

    // Convert the number to string to get its length
    int count1 = to_string(num).length();

    // Initialize variable to store the powered sum
    int poweredNum = 0;
    int count1 = to_string(num).length();

    // Calculate the powered sum of digits

    while (num > 0)
    {
        // Get the last digit
        int lastDigit = num % 10;

        // Add the last digit raised to its position to the powered sum
        poweredNum = (pow(lastDigit, count1)) + poweredNum;

        // Remove the last digit from the original number
        num = num / 10;

        // Check for overflow after each power operation
        if (poweredNum > INT16_MAX || poweredNum < INT16_MIN)
        {
            return false;
        }
    }

    return duplicate == poweredNum;
}

int main()
{
    // Test the function with a sample number
    int num = 371;
    cout << isArmstrong(num);
    return 0;
}
