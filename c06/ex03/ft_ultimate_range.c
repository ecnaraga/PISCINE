/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:28:51 by galambey          #+#    #+#             */
/*   Updated: 2023/02/23 13:57:13 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	i;
	long int	size;

	size = max - min;
	*range = NULL;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (NULL);
}

int	main(void)
{
	int	*array;
	int	min;
	int	max;

	min = -1;
	max = 4800;
	ft_ultimate_range(&array, min, max);
}
