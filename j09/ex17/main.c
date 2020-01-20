#include <stdio.h>
int ft_max(int *tab, int length);

int	main(void)
{
	int	tab[3];
	tab[0] = 2;
	tab[1] = 500000;
	tab[2] = 2100;

	printf("%d", ft_max(tab, 3));
}
