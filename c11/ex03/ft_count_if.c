/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:59:19 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 17:59:43 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	rt;

	i = 0;
	rt = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			rt++;
		i++;
	}
	return (rt);
}
/*
int	isnumeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main (int argc, char **argv)
{
	int (*p_f)(char*) = isnumeric;

	if (argc > 1)
	printf("%d",ft_count_if(argv, argc, p_f));
}
*/
