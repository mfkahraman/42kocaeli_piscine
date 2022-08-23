/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 23:30:17 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/04 17:02:36 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		else if (x >= 46341)
			return (0);
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(144));
}
*/
