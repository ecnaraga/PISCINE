#include <stdlib.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

unsigned int    ft_lenght(int size, char **strs, char *sep)
{
        int                             i;
        int                             len_sep;
        unsigned int    len_total;

        i = 0;
        len_total = 0;
        while (i < size)
        {       
                len_total = len_total + ft_strlen(strs[i]);
                i++;
        }
	len_sep = ft_strlen(sep);
        len_total = len_total + len_sep * (size - 1);
        return (len_total);
}

char    *ft_strcat(char *dest, char *src)
{
        int     i;
        int     j;

        i = 0;
        j = ft_strlen(dest);
        while (src[i])
        {
                dest[j + i] = src[i];
                i++;
        }
        dest[j + i] = '\0';
        return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
        int                             i;
        char                    *str_join;

        if (size == 0)
	{
                str_join = malloc(sizeof(char));
		if (!str_join)
			return (NULL);
		str_join = 0;
		return (str_join);
	}
        str_join = malloc(sizeof(char) * ft_lenght(size, strs, sep) + 1);
        if (str_join == NULL)
                return (NULL);
        i = 0;
        str_join[0] = '\0';
        while (i < size)
        {
                ft_strcat(str_join, strs[i]);
                if (i < (size - 1))
                        ft_strcat(str_join, sep);
                i++;
        }
        return (str_join);
}
