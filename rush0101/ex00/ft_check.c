/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathmorv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:35:09 by mathmorv          #+#    #+#             */
/*   Updated: 2023/02/19 17:30:12 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_count_summits(int *tab, int n)
{
	int	max;
	int	i;
	int	summit;

	i = 1;
	summit = 1;
	max = tab[0];
	while (i < 4)
	{
		if (tab[i] > max)
		{
			max = tab[i];
			summit++;
		}
		i++;
	}
	if (summit != n)
		return (0);
	return (1);
}

int	ft_check_row_right(int board[6][6])
{
	int	tab[4];
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < 5)
	{
		j = 4;
		k = 0;
		while (j > 0)
		{
			tab[k] = board[i][j];
			j--;
			k++;
		}
		if (!ft_check_count_summits(tab, board[i][5]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_row_1eft(int board[6][6])
{
	int	tab[4];
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < 5)
	{
		j = 1;
		k = 0;
		while (j < 5)
		{
			tab[k] = board[i][j];
			j++;
			k++;
		}
		if (!ft_check_count_summits(tab, board[i][0]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_col_up(int board[6][6])
{
	int	tab[4];
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < 5)
	{
		j = 1;
		k = 0;
		while (j < 5)
		{
			tab[k] = board[j][i];
			j++;
			k++;
		}
		if (!ft_check_count_summits(tab, board[0][i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_col_down(int board[6][6])
{
	int	tab[4];
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < 5)
	{
		j = 4;
		k = 0;
		while (j > 0)
		{
			tab[k] = board[j][i];
			j--;
			k++;
		}
		if (!ft_check_count_summits(tab, board[5][i]))
			return (0);
		i++;
	}
	return (1);
}
