/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:02:00 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/20 15:58:51 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *b;
	*b = *a;
	*a = temporary;
}

// #include <unistd.h>
// int main(void)
// {
// 	int num1 = 4;
// 	int num2 = 8;
// 	int *numP1 = &num1;
// 	int *numP2 = &num2;

// 	char dig1 = '0' + *numP1;
// 	char dig2 = '0' + *numP2;

// 	write(1,"Before:\n",7+2);
// 	write(1,"num1: ",6);
// 	write(1,&dig1,1);
// 	write(1,"\n",2);
// 	write(1,"num2: ",6);
// 	write(1,&dig2,1);
// 	write(1,"\n",2);

// 	ft_swap(numP1, numP2);

// 	dig1 = '0' + *numP1;
// 	dig2 = '0' + *numP2;

// 	write(1,"\n",2);
// 	write(1,"After:\n",6+2);
// 	write(1,"num1: ",6);
// 	write(1,&dig1,1);
// 	write(1,"\n",2);
// 	write(1,"num2: ",6);
// 	write(1,&dig2,1);
// 	write(1,"\n",2);
// 	return 0;
// }