/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:57:27 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/30 13:04:46 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		num *= i;
		i++;
	}
	return (num);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%i",ft_iterative_factorial(8));
// 	return (0);
// }