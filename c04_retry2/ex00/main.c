/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:53:02 by galambey          #+#    #+#             */
/*   Updated: 2023/02/16 19:49:56 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int	main (int argv, char **argc)
{
	if (argv == 2)
		printf("strlen : %d", ft_strlen(argc[1]));
	else
		printf("Cuidado!!!");
}
