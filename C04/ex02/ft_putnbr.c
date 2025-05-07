/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:31:27 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/28 15:18:07 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

// #include <stdio.h>
// int main()
// {
//     alt_ft_putnbr(42);
//     write(1,"\n",2);
//     alt_ft_putnbr(-42);
//     write(1,"\n",2);
//     alt_ft_putnbr(0);
//     write(1,"\n",2);
// 	ft_putnbr(2131);
//     return 0;
// }
