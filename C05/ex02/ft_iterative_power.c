/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:27:28 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/30 13:01:52 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	num = 1;
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%i",ft_iterative_power(1, 0));
// 	return (0);
// }