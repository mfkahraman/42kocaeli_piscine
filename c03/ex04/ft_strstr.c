/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:55:34 by mukahram          #+#    #+#             */
/*   Updated: 2022/07/30 23:56:11 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{	
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	if (to_find[0] == '\0')
		return (str);
	return (0);
}
/*
int main ()
{
	char x[] = "ecole42";
	char y[] = "ole";

	char *result = ft_strstr(x,y);
	printf("%s",result);
}
*/
