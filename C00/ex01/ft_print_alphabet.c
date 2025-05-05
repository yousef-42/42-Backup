/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:12:24 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/18 20:22:05 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	int		num;

	num = 'a';
	while (num <= 'z')
	{
		c = num;
		num++;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }