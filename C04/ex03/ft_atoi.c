/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:47:52 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/28 15:43:27 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t'
		|| *str == '\n' || *str == '\r'
		||*str == '\v' || *str == '\f')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int ac,char **av)
// {
// 	if (ac == 2)
// 	{
// 		int result = ft_atoi(av[ac - 1]);
// 		int officialresult = atoi(av[ac - 1]);
// 		printf("%i%s",result,"\n"); // my result
// 		printf("%i",officialresult); // official result
// 	}
//     return (0);
// }