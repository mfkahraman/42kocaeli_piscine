/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:12:19 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/06 16:45:50 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	str = (char *) malloc (len + 1);
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char	*src;
 	src = "ecole42";
	printf("%s",ft_strdup(src));
}
*/
