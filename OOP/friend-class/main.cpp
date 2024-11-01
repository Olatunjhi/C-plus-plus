#include "nuclearFamily.h"

/**
 * main - Check the code
 * 
 * Description: making nuclear class friend of extended class so, object can be use to access
 * private variable
 * 
 * Return: Always 0.
 */

int main (void)
{
    nuclearFamily nucfam("sam", "mary");

    nucfam.display();

    return (0);
}