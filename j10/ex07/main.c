#include <stdio.h>
void ft_sort_wordtab(char **tab);
char		**ft_split_whitespaces(char *str);

int	main(int argc, char **argv)
{
	char **str;
	int i;
	(void) argc;
	i = -1;
	str = ft_split_whitespaces(argv[1]);
	while (++i < 15)
		printf("%d-%s\n",i, str[i]);
		(ft_sort_wordtab(str));
	i = -1;
	while (++i < 15)
		printf("%d+%s\n",i,  str[i]);
	return (1);
}
