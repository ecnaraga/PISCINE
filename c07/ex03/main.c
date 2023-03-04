/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 09:38:02 by galambey          #+#    #+#             */
/*   Updated: 2023/02/27 14:27:46 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strjoin.c"
/*
int	main(void)
{
	char	sep[0];
	char	*str;
	char 	*strs[0] = {"", "42", "4", "5"};

	str = ft_strjoin(1, strs, sep);
	printf("|%s|\n", str);
	free(str);
	return (0);
}
*/
int	main(int argc, char **argv)
{
	char	*sep;
	char	*str;

	if (argc == 25)
		return (1);
	sep = "...";
	str = ft_strjoin(14, argv + 1, sep);
	printf("|%s|\n", str);
	free(str);
	return (0);
}
