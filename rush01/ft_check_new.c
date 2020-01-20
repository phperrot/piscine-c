/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 21:14:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/15 00:42:04 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_grid(int **grid)
{
	int cell;

	cell = 0;
	while (cell++ < 81)
	{
		col = cell % 3;
		row = cell / 3;
		if (grid[row][col] != 0
		col_block = col - col % 3;
		row_block = row - row % 3;
		while (i++ < 9)
		{
			if (grid[row][i] == grid[row][col] || grid[i][col] == grid[row][col] ||
					grid[row_block + i % 3][col_block + i/3] == grid[row][col])
			return(0)
		}
	}
}

int     ft_check_cell(int **grid, int cell, int n)
{
	int i;
	int col;
	int row;	
	int col_block;
	int row_block;

	i = -1;
	col = cell % 3;
	row = cell / 3;
	col_block = col - col % 3;
	row_block = row - row % 3;	
	while (i++ < 9)
	{
		if (grid[row][i] == n || grid[i][col] == n || 
				grid[row_block + i % 3][col_block + i/3])
			return(0)
	}
	return (1);
}
