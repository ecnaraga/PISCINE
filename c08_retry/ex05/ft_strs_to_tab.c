/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:06:09 by galambey          #+#    #+#             */
/*   Updated: 2023/03/02 09:38:34 by galambey         ###   ########.fr       */
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

char	*ft_strdup(char *str)
{
	int	i;
	int	len;
	char	*copy;

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
	t_stock_str	*tab;
	int			j;

	j = 0;
	if (ac <= 0)
		return (NULL);
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (j < ac)
	{
		tab[j].size = ft_strlen(av[j]);
		tab[j].str = av[j];
		tab[j].copy = ft_strdup(tab[j].str);
		j++;
	}
	tab[j].str = 0;
	return (tab);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	t_stock_str *tab;
	int	i;

	i = 0;
	tab = ft_strs_to_tab(ac - 1, av + 1);
	printf("test 2\n");
	while (i < ac - 1)
	{
		printf("test 3\n");
		printf("%s\n%d\n%s\n", tab[i].str, tab[i].size, tab[i].copy);
		free(tab[i].copy);
		i++;
		printf("test 1\n");
	}
	free(tab);
	return (0);
}
