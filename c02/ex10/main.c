/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:14:19 by galambey          #+#    #+#             */
/*   Updated: 2023/02/13 20:10:32 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/bsd.h>
#include "ft_strlcpy.c"

int	main()
{
	char	src[] = "oiugfdfghj";
	char	dest[] = "Mateo";
	char	dest1[] = "Mateo";
	char	dest2[] = "Mateo";
	char	dest3[] = "Mateo";
	unsigned int	n;

	n = 0;
	ft_strlcpy(dest, src, n);
	printf("moi :\n%s\n%s\n", src, dest);
	strlcpy(dest1, src, n);
	printf("strlcpy :\n%s\n%s\n", src, dest1);
	printf("moi %d\n", ft_strlcpy(dest2, src, n));
	printf("strlcpy %ld\n", strlcpy(dest3, src, n));
	return(0);
}
