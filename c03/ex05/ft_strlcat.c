/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galambey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:53:36 by galambey          #+#    #+#             */
/*   Updated: 2023/02/20 10:00:28 by galambey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	i = 0;
	if ((size == 0 || len_dest >= size))
		return (len_src + size);
	if (size != 0)
	{
		j = len_dest;
		while (src[i] && i < (size - 1 - len_dest))
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (len_src + len_dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
