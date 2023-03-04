/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:14:19 by galambey          #+#    #+#             */
/*   Updated: 2023/02/13 11:44:08 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int	main()
{
	char	src[] = "Salut tu vas bien?";
	char	dest[100];
	char	dest1[100];
	unsigned int	n;

	n = 4;
	ft_strncpy(dest, src, n);
	printf("ft_strncpy :\n%s\n%s\n", src, dest);
	strncpy(dest1, src, n);
	printf("strncpy :\n%s\n%s", src, dest1);
}
