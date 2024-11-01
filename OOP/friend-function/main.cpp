#include "basedclass.h"

/**
 * main - Check the code
 * 
 * Description: using friend function in a basedclass
 * 
 * Return: Always 0.
 */

int main (void)
{
    basedclass based(40, "idowu");

    basedclassFriend(based);

    return (0);
}