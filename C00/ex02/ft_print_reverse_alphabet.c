/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:56:52 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/18 20:31:16 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	int		i;

	i = 'z';
	while (i >= 'a')
	{
		a = i;
		write(1, &a, 1);
		i--;
	}
}

// int main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return(0);
// }