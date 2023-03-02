/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:06:09 by galambey          #+#    #+#             */
/*   Updated: 2023/03/01 15:17:23 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *copy, char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	stock;
	t_stock_str	*tab;
	int			i;
	int			j;

	i = 1;
	j = 0;
	if (ac == 0)
		return (NULL);
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		stock.size = ft_strlen(av[i]);
		stock.str = av[i];
		stock.copy = ft_strdup(stock.copy, stock.str);
		tab[j] = stock;
		i++;
		j++;
	}
	tab[j].str = NULL;
	return (tab);
}
