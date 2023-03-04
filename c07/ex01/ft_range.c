/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:34:25 by galambey          #+#    #+#             */
/*   Updated: 2023/02/22 20:22:28 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		j;
	int		size;

	size = max - min;
	tab = NULL;
	if (size <= 0)
		return (0);
	tab = malloc(size * sizeof(int));
	if (tab == NULL)
		return (0);
	i = 0;
	j = min;
	while (j < max)
	{
		tab[i] = j;
		i++;
		j++;
	}
	return (tab);
}
