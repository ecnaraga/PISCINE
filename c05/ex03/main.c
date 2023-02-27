/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:00:49 by galambey          #+#    #+#             */
/*   Updated: 2023/02/25 10:31:16 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_power.c"

int	main(void)
{
	int	nb;
	int	power;

	nb = 0;
	power = 0;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}
