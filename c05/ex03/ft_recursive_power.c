/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:03:58 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/04 16:47:36 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	rs;

	rs = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (rs);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_recursive_power(2, 5));
}
*/
