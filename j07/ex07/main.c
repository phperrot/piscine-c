#include <stdio.h>
int		ft_putchar(char c);

void	ft_putstr(char *str);

char **ft_split(char *str, char *charset);

int	main(void)
{
	char *str;
	char **res;
	char *charset;
	int i;
	int j;
	
	str = "bonjour                  comment ca";
	charset = "o";
	res = ft_split(str, charset);
	i = 0;
	j = 0;
	while (i < 3)
	{
		while (res[i][j] != '\0')
		{
			ft_putchar(res[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
