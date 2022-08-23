/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:08:53 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 17:09:45 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f (tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int	ft_islower(char *str)
{
	int	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int	i;
	int (*p_f)(char*) = ft_islower;
	char	**tab;
	tab = (char **)malloc(3);
	tab[0] = malloc(5);
	tab[0] = "ekoL";
	tab[1] = malloc(3);
	tab[1] = "42";
	tab[2] = NULL;

	printf("%d",ft_any(tab, p_f));
}
*/
