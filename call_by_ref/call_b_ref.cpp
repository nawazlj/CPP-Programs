// Manually create a call-by-reference using a pointer.
#include <iostream.h>
#include <conio.h>
void neg(int *i);
int main()
{
clrscr();
int x;
x = 10;
cout << x << " negated is ";
neg(&x);
cout << x << "\n";
getch();
return 0;
}
void neg(int *i)
{
*i = -*i;
}
/*In this program, neg() takes as a parameter a pointer to the integer whose sign it
will reverse. Therefore, neg() must be explicitly called with the address of x. Further,
inside neg() the * operator must be used to access the variable pointed to by i. This is
how you generate a "manual" call-by-reference in C++, and it is the only way to obtain
a call-by-reference using the C subset. Fortunately, in C++ you can automate this
feature by using a reference parameter.

To create a reference parameter, precede the parameter's name with an &. For
example, here is how to declare neg() with i declared as a reference parameter:
void neg(int &i);
For all practical purposes, this causes i to become another name for whatever argument
neg() is called with. Any operations that are applied to i actually affect the calling
argument. In technical terms, i is an implicit pointer that automatically refers to the
argument used in the call to neg() . Once i has been made into a reference, it is no
longer necessary (or even legal) to apply the * operator. Instead, each time i is used, it
is implicitly a reference to the argument and any changes made to i affect the
argument. Further, when calling neg(), it is no longer necessary (or legal) to precede
the argument's name with the & operator. Instead, the compiler does this
automatically. Here is the reference version of the preceding program:

// Use a reference parameter.
#include <iostream.h>
#include <conio.h>

//void neg(int &i); // i now a reference
void neg(int &i)
{
i = -i; // i is now a reference, don't need *
}

int main()
{
int x;
x = 10;
cout << x << " negated is ";
neg(x); // no longer need the & operator
cout << x << "\n";
return 0;
}
*/

