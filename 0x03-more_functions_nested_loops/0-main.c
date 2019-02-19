#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  int _isupper(int c);
  char c;

  c = 'A';
 if (isupper(c))
  printf("%c: %d\n", c, _isupper(c));
  c = 'a';
  printf("%c: %d\n", c, _isupper(c));
  return (0);
}
