/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void stringConcatenate(char *p1,char *p2);

int main()
{
    char str[20] = "TNHB";
    char str2[20]="HIG";
    
    char str3[30];
    int i = 0;
    int k = 0;
    
    while(str[i]!='\0')
    {
        str3[i]=str[i];
        i++;
    }
    
    while(str2[k]!='\0')
    {
        str3[i] = str2[k];
        k++;
        i++;
    }
    str3[i] = '\0';
    printf("string is : %s \n",str3);
    
    stringConcatenate(str,str2);

    return 0;
}

void stringConcatenate(char *p1,char *p2)
{
    char *str1=p1;
    while(*str1!='\0')
    {
        str1++;
    }
    while(*p2!='\0')
    {
        *str1=*p2;
        str1++;
        p2++;
    }
    printf("string is :%s \n",p1);
    
    
}
