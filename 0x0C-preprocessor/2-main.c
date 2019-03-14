#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include "holberton.h"

/**
 * main -  prints the name of the file it
 * it was compiled from, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
printf("%s\n", __BASE_FILE__);
return (0);
}
#endif
