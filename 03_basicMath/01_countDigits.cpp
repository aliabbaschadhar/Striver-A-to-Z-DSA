#include <iostream>
#include <climits>

using namespace std;

int numberofDigits(int n){
    int count=0;
    while (n>0)
    {
        int lastdigit = n%10;
        count++;
        n = n/10;
    }
    return count;
    
}
int main()
{
    int number =89893;
    cout<<"Digits are: "<<numberofDigits(number);

        return 0;
}