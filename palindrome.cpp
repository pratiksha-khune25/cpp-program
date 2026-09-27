#include <iostream>
using namespace std;
int main()
{
    int n, temp, reverse = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while(n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(temp == reverse)
    {
    	cout << temp << " is a Palindrome Number";
	}
    else
    {
    	cout << temp << " is not a Palindrome Number";
	}
    return 0;
}
