#include<string.h>
#include<stdio.h>
#include<math.h>
int main()
{
    char s[100];
    int i,n;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='6')
        {
             s[i]='9';
             break;
        }
    }
    printf("%s",s);
    return 0;
}