#include <iostream>
using namespace std;

int main()
{
    int temp, num, digit, inverted = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    temp = num;

    while(num != 0)
    {
        digit = num % 10;
        inverted = (inverted * 10) + digit;
        num = num / 10;
    } 

    cout << " The reverse of the number is: " << inverted << endl;

    if (temp == inverted)
        cout << " The number is a palindrome.";
    else
        cout << " The number is not a palindrome.";

    return 0;
}