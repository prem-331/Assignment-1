#include <stdio.h>
int main()
{
    char mailid[50];
    int i,p1,p2;
    p1=p2=0;
    printf("enter email id");
    scanf("%s", &mailid);

    for(i=0;mailid[i] != '\0' ; i++)
    {
        if(mailid[i]=='@')
        p1 = i;
        
        if(mailid[i]=='.')
        p2 = i;
    }
    if(p1>3 && (p2-p1)>3)
       printf("valid");
    else
       printf("invalid");

    printf("\n");
}