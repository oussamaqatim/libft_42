#include<stdio.h>
#include<string.h>
int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
int main()
{
	char chaine1[] = "oussama";
	char chaine2[] = "qatim";
	int test;
	test = ft_strncmp(chaine1,chaine2,2);
	printf("%d\n",test);
	return(0);
}