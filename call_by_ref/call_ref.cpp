// Use a reference parameter.
#include <iostream.h>
#include <conio.h>
void neg(int &i); // i now a reference
int main()
{
clrscr();
int x;
x = 10;
cout << x << " negated is ";
neg(x); // no longer need the & operator
cout << x << "\n";
getch();
return 0;
}
void neg(int &i)
{
i = -i; // i is now a reference, don't need *
}