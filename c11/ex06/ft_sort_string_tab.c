/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:42:55 by mukahram          #+#    #+#             */
/*   Updated: 2022/08/11 20:32:50 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
				swap(&tab[j - 1], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
#include <unistd.h>
void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

#include <stdlib.h>
int	main()
{
	int	i;
	char **tab;
	tab = malloc(7);
	tab[0] = "11";
	tab[1] = "14";
	tab[2] = "10";
	tab[3] = "12";
	tab[4] = "15";
	tab[5] = "13";
	tab[6] = NULL;
	i = 0;
	ft_sort_string_tab(tab);
	while (tab[i])
	{
		putstr(tab[i]);
		i++;
	}
	return (0);
}
*/
