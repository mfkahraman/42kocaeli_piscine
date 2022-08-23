/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:42:38 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 16:43:07 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
int	plusfive(int nb)
{
	nb += 5;
	return(nb);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*nums;

	nums = (int *)malloc(length * sizeof(int));
	if (!nums)
		return (0);
	i = 0;
	while (i < length)
	{
		nums[i] = f(tab[i]);
		i++;
	}
	return (nums);
}
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int	tab[] = {1, 2, 3, 4, 5};
	int	len = 5;
	int	(*p_f)(int) = plusfive;
	int *result = ft_map(tab, len, p_f);
	
	while (i < len)
	{
		printf("num%d: %d\n",i,result[i]);
		i++;
	}
	return (0);
}
*/
