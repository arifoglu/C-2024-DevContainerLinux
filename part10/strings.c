#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "hello";
    printf("%s \n",a);                                // hello
    printf("%c%c%c%c%c \n",a[0],a[1],a[2],a[3],a[4]); // hello

    for (int i = 0 ; i < sizeof(a); i++)              // hello
    {
        printf("%c",a[i]);
    }

    return 0;
}