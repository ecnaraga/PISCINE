/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:38:02 by galambey          #+#    #+#             */
/*   Updated: 2023/02/27 10:40:33 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strjoin.c"

int	main(int argc, char **argv)
{
	char	*sep;
	char	*str;

	sep = "***";
	if (argc > 15)
		return (0);
	str = ft_strjoin(10, argv + 1, sep);
	printf("|%s|\n", str);
	free(str);
	return (0);
}
