/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:40:01 by galambey          #+#    #+#             */
/*   Updated: 2023/02/21 14:37:29 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_tab(int tab[10])
{
	int	i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = tab[i] + 48;
		write(1, &c , 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_diag(int tab[10])
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			if (i != j && tab[j] == tab[j] + (j - i))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_absent(int tab[10], int c, int i)
{
	i = i - 1;
	while (i >= 0)
	{
		if (c == tab[i])
			return (0);
		i--;
	}
	return (1);
}

int	ft_backtrack(int tab[10], int i)
{
	int	c;
	int	count;

	c = 0;
	count = 0;
	while (c <= 9)
	{
		if (ft_absent(tab, c, i) == 1)
			tab[i] = c;
		if (tab[i] >= 0 && tab[i] <= 9 && i < 9)
			ft_backtrack(tab, i + 1);
		else if (tab[i] >= 0 && tab[i] <= 9 && i == 9)
		{
			if (check_diag(tab) == 1)
			{
				ft_print_tab(tab);
				count++;
			}
		}
		c++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i <= 9)
	{
		tab[i] = -1;
		i++;
	}
	i = 0;
	return (ft_backtrack(tab, i));
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
