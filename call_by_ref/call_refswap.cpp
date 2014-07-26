#include <iostream.h>
#include <conio.h>
void swap(int &i, int &j);
int main()
{
clrscr();
int a, b, c, d;
a = 1;
b = 2;
c = 3;
d = 4;
cout << "a and b: " << a << " " << b << "\n";
swap(a, b); // no & operator needed
cout << "a and b: " << a << " " << b << "\n";
cout << "c and d: " << c << " " << d << "\n";
swap(c, d);
cout << "c and d: " << c << " " << d << "\n";
getch();
return 0;
}
void swap(int &i, int &j)
{
int t;
t = i; // no * operator needed
i = j;
j = t;
}