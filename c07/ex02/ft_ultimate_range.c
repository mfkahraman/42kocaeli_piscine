/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 01:19:53 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/07 01:20:11 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(size *(sizeof(int)));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
/*
#include <stdio.h>
int main()
{
	int min = 0;
	int max = 5;
	int	*tab;
	int size=ft_ultimate_range(&tab,min,max);
	int i = 0;
	while(i < size)
	{
		printf("i%d: %d\n",i,tab[i]);
		i++;
	}
	printf("result: %d\n",size);
	return (0);
}
*/
