#include <stdio.h>
#include <string.h>
 
 char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
int main() 
{
  char S[] ="oussama rass tarro.com !";
  printf("%s\n",ft_strstr(S,"torro.com"));
  return 0;
}