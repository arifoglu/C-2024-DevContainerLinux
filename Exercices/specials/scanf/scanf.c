#include <stdio.h>

int main()
{
    // solution works only if the input string has no spaces => "asdfasf 34"
    // it ignores the input until the next space or newline.if you write %*d it will ignore integers
    int a;
    scanf("%*s %d", &a);
    printf("Input value read : a=%d", a);
    return 0;
}