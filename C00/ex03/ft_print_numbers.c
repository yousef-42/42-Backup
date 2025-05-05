/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:12:04 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/18 20:32:05 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;
	int		i;

	i = '0';
	while (i <= '9')
	{
		num = i;
		write(1, &num, 1);
		i++;
	}
}

// int main(void)
// {
// 	ft_print_numbers();
// 	return(0);
// }