/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:14:19 by galambey          #+#    #+#             */
/*   Updated: 2023/02/13 17:30:26 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strcapitalize.c"

int	main()
{
	char src[] = "salut, cOmment tu vas ? 42mots quarante-deux; cinquante+un";

	printf("%s\n", src);
	ft_strcapitalize(src);
	printf("%s\n", src);
}
