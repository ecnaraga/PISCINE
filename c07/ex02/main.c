/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:13:36 by galambey          #+#    #+#             */
/*   Updated: 2023/02/27 15:12:28 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_ultimate_range.c"

int	main(void)
{
	int	*array;
	int	min;
	int	max;
	int	i;

	min = -1;
	max = -1;
	i = 0;
	printf("size of range: %d", ft_ultimate_range(&array, min, max));
	while (i < max - min)
	{
		printf("%d ", array[i]);
		i++;
	}
	i = 0;
	free(array);
	return (0);
}
