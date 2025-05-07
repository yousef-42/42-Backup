/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:13:24 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/30 13:04:01 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	num;

	i = 0;
	num = nb;
	while (ft_is_prime(num) == 0)
	{
		num++;
	}
	return (num);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%i",ft_find_next_prime(1));
// 	return (0);
// }