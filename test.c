#include<stdio.h>
#include<string.h>
char *ft_strstr(char *str,char *ptr, size_t n)
{
    int i;
    int o;
    
    i = 0;
    while( i <  n && str[i] != '\0')
    {
        o = 0;
        while(str[i + o] == ptr[o])
        {
            o++;
            if(ptr[o] == '\0')
            {
                return(&str[i]);
            }
        }
        i++;
    }
    return(NULL);
}
int main() 
{
//   char S[] ="";
  char S[] ="ouss  oussam oussama!";
  printf("%s\n",ft_strstr(S,"oussama",30 ));
  return 0;
}