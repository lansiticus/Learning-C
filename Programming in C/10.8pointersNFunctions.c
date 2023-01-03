//Program to illustrate using pointers and functions

#include <stdio.h>

void test (int *int_pointer)
{
    *int_pointer = 100;
}

int main (void)
{
    void test (int *int_pointer);
    int i = 50, *p = &i;

    printf ("before the call to test i = %i\n", i);

    test(p);
    printf("after the call to test i = %i\n", i);

    return 0;

}