#include <iostream>
#include <climits>

using namespace std;

/*
 * Pattern 1: Prints a square pattern of stars
 * For n = 3, output:
 * * * *
 * * * *
 * * * *
 */
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
 * Pattern 2: Prints a right-angled triangle pattern of stars
 * For n = 3, output:
 * *
 * * *
 * * * *
 */
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
 * Pattern 3: Prints a right-angled triangle pattern of numbers
 * Each row starts from 1 and goes up to row number
 * For n = 3, output:
 * 1
 * 1 2
 * 1 2 3
 */
void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 4: Prints a right-angled triangle pattern of numbers
 * Each row is filled with the row number
 * For n = 3, output:
 * 1
 * 2 2
 * 3 3 3
 */
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 5: Prints an inverted right-angled triangle of stars
 * For n = 3, output:
 * * * *
 * * *
 * *
 */
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*
 * Pattern 6: Prints an inverted right-angled triangle of numbers
 * Each row starts from 1 and goes up to n-i
 * For n = 3, output:
 * 1 2 3
 * 1 2
 * 1
 */
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 7: Prints a pyramid pattern of stars
 * Each row has:
 * 1. (n-i-1) spaces on the left
 * 2. (2*i+1) stars in the middle
 * 3. (n-i-1) spaces on the right
 * For n = 3, output:
 *   *
 *  ***
 * *****
 */
void pattern7(int n)
{
    for (int i = 0; i < n; i++)

    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 8: Prints an inverted pyramid pattern of stars
 * Each row has:
 * 1. i spaces on the left
 * 2. (2*n-(2*i+1)) stars in the middle
 * 3. i spaces on the right
 * For n = 3, output:
 * *****
 *  ***
 *   *
 */
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 9: Prints a diamond pattern of stars
 * Combines pattern 7 and pattern 8
 * First half: increasing pyramid
 * Second half: decreasing pyramid
 * For n = 3, output:
 *   *
 *  ***
 * *****
 *  ***
 *   *
 */
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int i = 0; i < n - i - 1; i++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 10: Prints a triangle pattern with varying number of stars
 * Number of stars increases up to n, then decreases
 * Uses a single loop running from 1 to 2*n-1
 * For n = 3, output:
 * *
 * **
 * ***
 * **
 * *
 */
void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // i-->rows
        int stars = i;
        if (i >= n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
 * Pattern 11: Prints a binary pattern
 * Each row alternates between starting with 0 and 1
 * Adjacent numbers in each row are different
 * For n = 3, output:
 * 1
 * 01
 * 101
 */
void pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

/*
 * Pattern 12: Prints a pattern with numbers and spaces
 * Each row has:
 * 1. numbers from 1 to i
 * 2. 2*(n-i) spaces
 * 3. numbers from i to 1
 * For n = 3, output:
 * 1      1
 * 12    21
 * 123  321
 */
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        // reverse numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
 * Pattern 13: Prints a pattern with increasing numbers
 * Each row has numbers from 1 to i+1
 * For n = 3, output:
 * 1
 * 1 2
 * 1 2 3
 */
void pattern13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

/*
 * Pattern 14: Prints a pattern with alphabets
 * Each row has alphabets from 'A' to 'A'+i
 * For n = 3, output:
 * A
 * AB
 * ABC
 */
void pattern14(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 15: Prints a pattern with alphabets
 * Each row has alphabets from 'A' to 'A'+(n-i-1)
 * For n = 3, output:
 * ABC
 * AB
 * A
 */
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

/*
 * Pattern 16: Prints a pattern with alphabets
 * Each row has alphabets from 'A' to 'A'+i
 * All alphabets in each row are the same
 * For n = 3, output:
 * A
 * BB
 * CCC
 */
void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= i + 'A'; ch++)
        {
            cout << (char)('A' + i) << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 17: Prints a pyramid pattern with alphabets
 * Each row has:
 * 1. (n-i-1) spaces on the left
 * 2. (2*i+1) alphabets in the middle
 * 3. (n-i-1) spaces on the right
 * Alphabets in each row increase and then decrease
 * For n = 3, output:
 *   A
 *  BAB
 * CBA C
 */
void pattern17(int n)
{
    for (int i = 0; i < n; i++)

    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // chars
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 18: Prints a pattern with decreasing alphabets
 * Each row has alphabets from 'E'-i to 'E'
 * For n = 3, output:
 * E
 * DE
 * CDE
 */
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 19: Prints a pattern with stars and spaces
 * Each row has:
 * 1. (n-i) stars
 * 2. 2*i spaces
 * 3. (n-i) stars
 * For n = 3, output:
 * ***   ***
 * **     **
 * *       *
 * 
 * Then it prints the reverse pattern
 */
void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
 * Pattern 20: Prints a pattern with two pyramids
 * Each row has:
 * 1. stars
 * 2. spaces
 * 3. stars
 * Number of stars increases up to n, then decreases
 * For n = 3, output:
 * *       *
 * **     **
 * ***   ***
 * **     **
 * *       *
 */
void pattern20(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}

/*
 * Pattern 21: Prints a hollow square pattern
 * For n = 3, output:
 * ***
 * * *
 * ***
 */
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

/*
 * Pattern 22: Prints a pattern with numbers
 * Each number is the minimum distance from the border
 * For n = 3, output:
 * 222
 * 211
 * 222
 */
void pattern22(int n)
{
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            // pattern 22
            // logic:
            // for each space print the number which is the minimum of
            // its distance from top, bottom, left and right border
            int top = i;
            int left = j;
            int right = (2 * n - 1) - 1 - j;
            int bottom = (2 * n - 1) - 1 - i;
            // Finding the minimum of all the distances above mentioned
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{

    int n;
    while (cin >> n)
    {
        pattern22(n);
    }

    // int t;
    // cin>>t;

    // for (int i = 0; i < t; i++)
    // {
    //     int n;
    //     cin >> n;
    //     pattern1(n);
    // }

    return 0;
}