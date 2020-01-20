#include <stdio.h>

int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2)
{
	int		difference;
	int		i;

	difference = 0;
	i = 0;
	while (difference == 0 && i <= ft_strlen(s1))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			difference = s1[i] - s2[i];
		}
	}
	return (difference);
}

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
char		**ft_split_whitespaces(char *str);

int	main(int argc, char **argv)
{
	char **str;
	int (*f)(char *, char *);
	int i;
	(void)argc;
	i = 0;
	f = &ft_strcmp;
	str = ft_split_whitespaces(argv[1]);
	while (++i < 10)
		printf("%d-%s\n",i, str[i]);
	(ft_advanced_sort_wordtab(str, f));
	i = -1;
	while (++i < 10)
		printf("%d+%s\n",i,  str[i]);
	return (1);
}
