//reverse a string with pointers
#include <stdio.h>
reverse(char *str)
{
    int i,j,len;
    while(str[i]!='\0')
    {
        i++;
    }
    while(str[j]!='\0')
    {
        j++;
    }
   len=i-j;
   for(i=0,j=len-1;i<j;i++,j--)
    {
        str[i]=str[i]^str[j];
        str[j]=str[i]^str[j];
        str[i]=str[i]^str[j];
    }
}
int main()
{
    char str[100];
    printf("enter the string\n");
    scanf("%s",str);
    reverse(str);
    printf("%s",str);
    return 0;
}