/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:15:07 by galambey          #+#    #+#             */
/*   Updated: 2023/02/23 17:32:46 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi_base.c"

int	main(int argc, char ** argv)
{
//	char	*str;
	char	*base;

	
	base = argv[1];
	if (argc == 2)
	{
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     -0158fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("    - -158fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     +-158fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     --158fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("-158fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("158fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     -0i15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     -i15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     -1000fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     -1i15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     158fi15s", base));
		printf("ft_atoi_base resul : %d\n", ft_atoi_base("     -80000000j15s", base));
		

	}
	return (0);
}
