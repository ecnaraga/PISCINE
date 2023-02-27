/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmorv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:30:47 by mathmorv          #+#    #+#             */
/*   Updated: 2023/02/19 12:51:18 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(int board[6][6]);
int		ft_check_col_down(int board[6][6]);
int		ft_check_col_up(int board[6][6]);
int		ft_check_row_right(int board[6][6]);
int		ft_check_row_1eft(int board[6][6]);

int	ft_is_unique(int board[6][6], int row, int col, int c)
{
	int	i;

	i = 1;
	while (i < row)
	{
		if (board[i][col] == c)
			return (0);
		i++;
	}
	i = 1;
	while (i < col)
	{
		if (board[row][i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_final_check(int board[6][6])
{
	if (!ft_check_row_right(board))
		return (0);
	if (!ft_check_row_1eft(board))
		return (0);
	if (!ft_check_col_up(board))
		return (0);
	if (!ft_check_col_down(board))
		return (0);
	return (1);
}

void	backtrack(int board[6][6], int row, int col, int *count)
{
	int	block;

	block = 1;
	while (block < 5)
	{
		if (ft_is_unique(board, row, col, block))
		{
			board[row][col] = block;
			if (col < 4)
				backtrack(board, row, col + 1, count);
			else if (row < 4)
				backtrack(board, row + 1, 1, count);
			else if (row == 4 && col == 4)
			{
				if (ft_final_check(board) == 1)
				{
					ft_print(board);
					*count = 0;
				}
			}
		}
		block++;
	}
}
