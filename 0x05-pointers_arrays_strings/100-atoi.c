#include "main.h"

/**
* _atoi-convert a string to an integer.
* @s:char type string
* Return:integer converted
*/

int _atoi(char *s)
{
int i;
int res = 0;
int sig = -1;
int bbr = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sig = sig * -1;
if (s[i] >= '0' && s[i] <= '9')
{
res = res * 10;
res -= (s[i] - '0');
bbr = 1;
}
else if (bbr == 1)
break;
}
res = sig *res;
return (res);
}
