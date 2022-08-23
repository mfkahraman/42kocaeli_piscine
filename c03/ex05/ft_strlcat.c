/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 01:05:33 by mukahram          #+#    #+#             */
/*   Updated: 2022/07/31 18:31:24 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	calclen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	dl = calclen(dest);
	sl = calclen(src);
	if (size == 0 || size <= dl)
		return (sl + size);
	j = dl;
	i = 0;
	while (src[i] != '\0' && i < size - dl - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (sl + dl);
}
