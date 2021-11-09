#include<stdio.h>
#include<string.h>

void *ft_memchr(const void* s, int c,size_t n)
{
    int j;
    char *atr;

    // if(s == NULL) // if(!s)
    //     return(NULL);
    atr = (char *) s;
    j = 0;
    while( s && atr[j] != '\0' )
    {
        if(j < n)
        {
            if(atr[j] == c)
            {
                return(&atr[j]);
            }
        }
        j++;
    }
    return(NULL);
}

int main()
{
    char s[] = "oussama";
    printf("%s\n",memchr(s,'z',300));
    return(0);
} 
