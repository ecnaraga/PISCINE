/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmorv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:45:37 by mathmorv          #+#    #+#             */
/*   Updated: 2023/02/19 18:51:38 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int board[6][6]);
void	backtrack(int board[6][6], int row, int col, int *count);
int		error(void);
int		check_input(int argc, char **argv);
void	first_row_clues(char **argv, int board[6][6]);
void	last_row_clues(char **argv, int board[6][6]);
void	first_column_clues(char **argv, int board[6][6]);
void	last_column_clues(char **argv, int board[6][6]);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	board[6][6];
	int	i;
	int	j;
	int	errors;

	i = -1;
	errors = 1;
	while (++i < 6)
	{
		j = -1;
		while (++j < 6)
			board[i][j] = 0;
	}
	if (!check_input(argc, argv))
		return (error());
	first_row_clues(argv, board);
	last_row_clues(argv, board);
	first_column_clues(argv, board);
	last_column_clues(argv, board);
	backtrack(board, 1, 1, &errors);
	if (errors != 0)
		write(1, "Error\n", 6);
	return (0);
}
