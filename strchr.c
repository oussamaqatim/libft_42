#include<stdio.h>
#include<string.h>
char *ft_strchr(const char* s,int c)
{
    int i;
    i = 0;
    char *str = (char *) s;
    while(str[i] != '\0')
    {   
        if(str[i] == c) 
        {
            return(&str[i]);
        }
        i++;
    }
    return(NULL);
}
int main ()
{
    char b[8] = "oussama";
    printf("%s",ft_strchr(b,'u'));
    return(0);
}