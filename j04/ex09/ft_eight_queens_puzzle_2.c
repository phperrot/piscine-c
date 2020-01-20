/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:51:57 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/18 16:03:15 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print(int *board)
{
	int i = 0;

	while (i < 7)
	{
		printf("%d", board[i]);
		i++;
	}
	printf("\n");
}

int ft_checkcell(int row,int filloption, int *board)
{
	int i;
	i = 0;
	printf("\nentering checkcell for option #%d \n", filloption);

	while (i < row)
	{
		if (board[i] == filloption) // ligne
			{
			printf("\nA, %d\n", i);
			printf("board[i]= %d\n", board[i]);
			printf("board[row]= %d", board[row]);
				return (0);
			}
		if (i - board[i] == row - filloption)//diagonal 
		{
			printf("\nB, %d\n", i);	
			return (0);
		}
		if (i + board[i] == row + filloption)//diagonale /
		{
			printf("\nC, %d\n", i);
			printf("i=%d\n", i);
			printf("board[i] = %d\n", board[i]);
			printf("board[row] = %d\n", board[row]);	
			return (0);
		}
		i++;
	}
	return(1);
}

int ft_fill(int row, int *board)
{
	int filloption;

	printf("entering ft_fill for column # %d\n\n", row);
	filloption = 1;
	if (row > 7)
	{
		ft_print(board);
		return (1);
	}
	while (filloption <= 8)
	{
		if (!(ft_checkcell(row, filloption, board)))
		{	
			filloption++;	
		}
		else
		{
			board[row] = filloption;
			printf("checkcell reussi\n");
			if(ft_fill(row+1, board))
				return (1);
		}
	}
	return (0);

}

void ft_eight_queens_puzzle_2(void)
{
	int board[8];
	int i = 0;

	while (i < 8)
	{
		board[i] = 0;
		i++;
	}
	ft_fill(0, board);
}
