#include<stdio.h>
#include<string.h>
int ft_strncmp(const char *s1,const char *s2,size_t n)
{
    int i;
    i = 0;
     if( n == 0)
    {
        return(0);
    }
    while((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
    {
        i++;
    }
        return(s1[i]-s2[i]); 
}
int main()
{
    int test;
    char chaine1[] = "oossama";
    char chaine2[] = "oqtim";
    test = ft_strncmp(chaine1,chaine2,3);
    printf("%d\n",test);
    return(0);
}