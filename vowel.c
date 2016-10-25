#include <stdio.h>
int main()
{
    char n;
    printf("\n Enter your character:");
    scanf("%c",&n);
    if(n=="a"||n=="e"||n=="i"||n=="o"||n=="u"||n=="A"||n=="E"||n=="I"||n=="O"||n=="U")
    {
    printf("\n character is vowel");
    }
    else
    {
    printf("\n character is consonant");
}
return 0;
}
