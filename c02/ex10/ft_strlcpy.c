/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:56:10 by mukahram          #+#    #+#             */
/*   Updated: 2022/07/30 12:18:25 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}
/*
int main ()
{
	char src[] = "furkn";
	char dest[7];

	printf("------");
	printf("src_len: %d\n",ft_strlcpy(dest,src,7));

	int i = 0;
	while (dest[i] != '\0')
	{
		printf("%c\n--",dest[i]);
		i++;
	}
}
*/
