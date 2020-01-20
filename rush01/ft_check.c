/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:14:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/14 22:16:47 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(int **grid, int row, int col)
{
	int j;

	j = -1;
	while (j++ < 8)
	{
		if (grid[row][j] == grid[row][col] && j != col)
			return (0);
	}
	return (1);
}

int		check_col(int **grid, int row, int col)
{
	int i;

	i = -1;
	while (i++ < 8)
	{
		if (grid[i][col] == grid[row][col] && i != row)
			return (0);
	}
	return (1);
}

int		check_square(int **grid, int row, int col)
{
	int i;
	int j;

	i = row - row % 3;
	j = col - col % 3;
	while (i++ < (i + 3))
	{
		while (j++ < (j + 3))
		{
			if (grid[i][j] = grid[row][col] && (i != row && j != col))
				return (0);
		}
	}
}

int		ft_check(int **av)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (i++ < 8)
	{
		while (j++ < 8)
		{
			if ((av[i][j] != 0) && (check_square(av, i, j) *
				check_row(av, i, j) * check_column(av, i, j) == 0))
				return (0);
		}
	}
	return (1);
}
