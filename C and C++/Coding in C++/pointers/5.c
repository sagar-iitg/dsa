#include <stdio.h>
int main()
{
int *i;
int *ii;

ii=&i;



printf("%u\n",*i);
printf("%u\n",i);
printf("%u\n",ii);
printf("%u\n",*ii);

return 0;
}
