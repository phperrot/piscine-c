#include "ft_stock_par.h"
#include <stdio.h>

struct s_stock_par *ft_param_to_tab(int ac, char **av);

int    main(int argc, char **argv)
{
	printf("%s", ft_param_to_tab(argc, argv)[1].str);
	return (0);
}
