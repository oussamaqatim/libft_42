#include<stdio.h>
#include<string.h>
int len(char* str)
{
    int j;
    j = 0;
    while(str[j] != '\0')
    {
        j++;
    }
    return(j);
}
char* ft_strrchr(const char* s,int c)
{
    int o;
    char* ptr = (char *) s;
    o = len(ptr);
    while(o >= 0)
    {
        if(ptr[o] == c)
        {
            return(&ptr[o]);
        }
        o--;
    } 
    return(NULL);
}
int main()
{
    char o[8] = "oussama";
    printf("%s\n",ft_strrchr(o,'u'));
    return(0);
}
