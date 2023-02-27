/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:38:02 by galambey          #+#    #+#             */
/*   Updated: 2023/02/27 12:04:14 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strjoin.c"

int	main(void)
{
	char	*sep;
	char	*str;
	char 	*strs[] = {"Hello", "42"};

	sep = "***";
	str = ft_strjoin(1, strs, sep);
	printf("|%s|\n", str);
	free(str);
	return (0);
}
