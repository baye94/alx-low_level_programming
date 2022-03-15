#include <unistd.h>

/**
 *_putcar - writes char c to stdout
 *Return: 1 on sucess
 */

int _putchar(char c)
{
  return (write(1, &c,1));
}
