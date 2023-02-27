/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:40:28 by galambey          #+#    #+#             */
/*   Updated: 2023/02/25 16:02:11 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_position(char c, char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_len_newstr(long int nb, char *base)
{
	int	count;
	int	len;

	count = 0;
	len = ft_strlen(base);
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb >= 1)
	{
		nb = nb / len;
		count++;
	}
	return (count);
}

char	*ft_itoa_base(long int n, char *base, char *nbr_new, int i)
{
	int	len;

	len = ft_strlen(base);
	if (n < 0)
	{
		n = -n;
		nbr_new[0] = '-';
	}
	if (n < len)
		nbr_new[i] = base[n];
	if (n >= len)
	{
		ft_itoa_base(n / len, base, nbr_new, i - 1);
		nbr_new[i] = base[n % len];
	}
	return (nbr_new);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	char		*nbr_new;
	int			len;

	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	len = ft_len_newstr(nb, base_to);
	nbr_new = malloc(sizeof(char) * (len + 1));
	if (nbr_new == NULL)
		return (NULL);
	nbr_new = ft_itoa_base(nb, base_to, nbr_new, (len - 1));
	nbr_new[len] = '\0';
	return (nbr_new);
}
