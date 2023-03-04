/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmorv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:45:37 by mathmorv          #+#    #+#             */
/*   Updated: 2023/02/19 18:52:02 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int board[6][6]);
void	backtrack(int board[6][6], int row, int col, int *count);
int		error(void);
int		ft_strlen(char *str);

int	check_input(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 31)
		return (0);
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
			i++;
		else
			return (0);
		if (argv[1][i] == ' ')
			i++;
		else if (i != 31)
			return (0);
	}
	return (1);
}

void	first_row_clues(char **argv, int board[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < 5)
	{
		board[0][j] = argv[1][i] - '0';
		i += 2;
		j++;
	}
}

void	last_row_clues(char **argv, int board[6][6])
{
	int	i;
	int	j;

	i = 8;
	j = 1;
	while (j < 5)
	{
		board[5][j] = argv [1][i] - '0';
		i += 2;
		j++;
	}
}

void	first_column_clues(char **argv, int board[6][6])
{
	int	i;
	int	j;

	i = 16;
	j = 1;
	while (j < 5)
	{
		board[j][0] = argv[1][i] - '0';
		i += 2;
		j++;
	}
}

void	last_column_clues(char **argv, int board[6][6])
{
	int	i;
	int	j;

	i = 24;
	j = 1;
	while (j < 5)
	{
		board[j][5] = argv[1][i] - '0';
		i += 2;
		j++;
	}
}
