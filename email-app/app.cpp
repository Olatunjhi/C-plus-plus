#include <iostream>
using namespace std;

/**
 * main - Check the code
 * @emailaddress: string - To hold emailaddress
 * @indexOfAtgmail: int - To hold index no of @ for gmail.com address
 * @indexOfAtgmail: int - To hold index no of @ for yahoo.com address
 * 
 * Description: checking email address either valid or not
 * 
 * Return: Always 0.
 */

int main (void)
{
    string emailaddress;
    int indexOfAtgmail;
    int indexOfAtyahoo;

    cout << "Enter your email address : " << endl;
    cin >> emailaddress;

    indexOfAtgmail = emailaddress.find("@gmail.com");
    indexOfAtyahoo = emailaddress.find("@yahoo.com");

    // checking email address

    if (indexOfAtgmail == emailaddress.length() - 10)
    {
        cout << "Your gmail address is valid" << endl;
    }
    else if (indexOfAtyahoo == emailaddress.length() - 10)
    {
        cout << "Your yahoo mail address is valid" << endl;
    }
    else
    {
        cout << "Your mail is not valid check the spelling well !!" << endl;
    }

    return (0);
}