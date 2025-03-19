#include <stdio.h>
int main (void) {

int a = 4;
double b = 5.7;
int c, d;

printf("%d %f\n", a, b);
c = 3;
d = a + 2;

printf("%d %d\n", c, d);
a = 2;
b = c + d;  //  6 + 3 = 9  b = 9, a = 2 c = 3 d = 6              9 2 3 6

printf("%d %f\n", a, b);
printf("%d %d\n", c, d);

return 0;
}