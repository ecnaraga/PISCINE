#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
		{
			count++;
			i++;
		}
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, int	n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int	i;
	int	count_wd;
	char	**strs;
	int	k;
	int	count_let;

	if (!str)
		return (NULL);
	count_wd = count_words(str);
	strs = malloc(sizeof(char *) * (count_wd + 1));
	if (!strs)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i])
	{
		count_let = 0;
		while (str[i] && str[i] == ' ')
			i++;
		while (str[i] && str[i] != ' ')
		{
			i++;
			count_let++;
		}
		if (count_let > 0)
		{
			strs[k] = malloc(sizeof(char) * (count_let + 1));
			strs[k] = ft_strncpy(strs[k], str + (i - count_let), count_let);
		}
		k++;
	}
	strs[k] = NULL;
	return (strs);
}
printf("Test 1");str + (i - count_let)
int	main(int ac, char **av)
{
	int	i;
	char	**strs;
	int	count_wd;
	char	*str;

	if (ac == 2)
	{
		str = av[1];
		strs = ft_split(str);
		count_wd = count_words(str);
		i = count_wd - 1;
		while (i >= 0)
		{
			ft_putstr(strs[i]);
			ft_putchar(' ');
			free(strs[i]);
			i--;
		}
		free(strs);
	}
	ft_putchar('\n');
	return (0);
}
