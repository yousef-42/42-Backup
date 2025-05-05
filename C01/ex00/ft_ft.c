/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:47:53 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/21 15:22:11 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int	*nbr)
{
	*nbr = 42;
}

// #include <unistd.h>
// int main(void)
// {
// 	int nbr = 0;  
// 	ft_ft(&nbr); // convert to 42 (must contain * in par else 0)
// 	char digits[3]; //character array data type with 3 length maximum
// 	digits[0] = '0' + (nbr/10); //first digit
// 	digits[1] = '0' + (nbr%10); //second digit
// 	digits[2] = '\n'; //new line
// 	write(1, digits, 3); 
// 	return (0);
// }