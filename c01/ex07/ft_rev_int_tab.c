/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:42:40 by galambey          #+#    #+#             */
/*   Updated: 2023/02/10 13:11:14 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	nb;

	i = 0;
	while (i < (size / 2))
	{
		nb = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = nb;
		i++;
	}
}
