/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:29:29 by galambey          #+#    #+#             */
/*   Updated: 2023/03/02 14:51:57 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i;
	t_stock_str	*tab;
	char **strs = NULL;

	(void) av;
	i = 0;
	tab = ft_strs_to_tab(ac - 1, strs);
	ft_show_tab(tab);
	i = 0;
	while (tab[i].str)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);
}
