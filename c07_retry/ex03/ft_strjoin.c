/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:07:51 by galambey          #+#    #+#             */
/*   Updated: 2023/02/27 10:30:00 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_lenght(int size, char **strs, char *sep)
{
	int				i;
	int				len_sep;
	int				len_strs;
	unsigned int	len_total;

	i = 0;
	len_sep = ft_strlen(sep);
	len_strs = 0;
	printf("size : %d et len_sep : %d\n", size, len_sep);
	while (i < size/* && size > 1*/)
	{
		printf("test_3");
		len_strs = len_strs + ft_strlen(strs[i]);
		i++;
	}
	printf("size : %d et len_strs : %d et len_sep : %d\n", size, len_strs, len_sep);
	len_total = len_strs + len_sep * (size - 1) + 1;
	return (len_total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				i;
	unsigned int	len;
	char			*str_join;

	if (size < 0)
		return (NULL);
	len = ft_lenght(size, strs, sep);
	if (size == 0)
		str_join = malloc(sizeof(char));
	else
		str_join = malloc(sizeof(char) * len/* + 1*/);
	if (str_join == NULL)
		return (NULL);
	i = 0;
	str_join[0] = '\0';
	while (strs[i] && size != 0)
	{
		ft_strcat(str_join, strs[i]);
		if (i != (size - 1))
			ft_strcat(str_join, sep);
		i++;
	}
	return (str_join);
}
