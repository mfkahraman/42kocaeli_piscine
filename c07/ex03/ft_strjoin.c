/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 09:53:59 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/07 09:54:52 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	concatenate(char *dest, char **src, char *sep, int size)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (src[i][j])
			dest[k++] = src[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		seplen;
	int		strslen;
	int		finallen;
	int		i;
	char	*join;

	strslen = 0;
	i = 0;
	while (i < size)
		strslen += ft_strlen(strs[i++]);
	seplen = ft_strlen(sep);
	finallen = strslen + (seplen * (size - 1) + 1);
	if (size == 0)
	{
		join = (char *)malloc(sizeof(char));
		join[0] = '\0';
		return (join);
	}
	join = (char *)malloc(sizeof(char) * finallen);
	if (!join)
		return (0);
	i = 0;
	concatenate(join, strs, sep, size);
	return (join);
}
/*
#include <stdio.h>
int main()
{
	char **strs;
	int	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[2] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "word1";
	strs[1] = "word2";
	strs[2] = "word3";
	char	sep[] = "--";
	printf("\nfinal string: %s\n",ft_strjoin(size, strs, sep));
}
*/
