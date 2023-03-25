#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[30];
    printf("enter the string");
    gets(s);
    i=strlen(s);
    printf("the length of string is %d",i);
    return 0;
}
