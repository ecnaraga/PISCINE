/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:20:04 by galambey          #+#    #+#             */
/*   Updated: 2023/02/12 15:49:02 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_number(int a, int b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = (size - 1);
	while (i > 0)
	{
		if (ft_check_number(tab[i], tab[i - 1]) == 1)
		{
			n = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = n;
			i = size - 1;
		}
		else
			i--;
	}
}

int	ft_check_number(int a, int b)
{
	if (a < b)
		return (1);
	else
		return (0);
}
