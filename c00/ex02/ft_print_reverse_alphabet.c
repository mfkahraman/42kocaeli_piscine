/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukahram <mukahram@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:01:21 by mukahram          #+#    #+#             */
/*   Updated: 2022/07/25 09:12:52 by mukahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	r;

	r = 'z';
	while (r >= 'a')
	{
		write(1, &r, 1);
		r--;
	}
}
