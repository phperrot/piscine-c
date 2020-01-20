#include <stdio.h>

int match(char *s1, char *s2);

int pos_star(char *str, int pos);

int ft_stars(char *s2);

int		main(void)
{
	char *s1;
	char *s2;
	s1 = "bonjour";
	s2 = "bon*iour";
	printf("\n %d", ft_stars(s2));
	printf("\n %d \n", match(s1, s2));
	printf("\n %d \n", pos_star(s2, 1));

	return(0);
}
