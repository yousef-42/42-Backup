/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 16:53:45 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/20 17:38:32 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <unistd.h>
// int main(void)
// {
// 	int a = 7;
// 	int b = 3;

// 	int *num1 = &a;
// 	int *num2 = &b;

// 	ft_ultimate_div_mod(num1, num2);

// 	int divide = '0' + *num1;
// 	int modulate = '0' + *num2;

// 	write(1,"divide: ",6+2);
// 	write(1,&divide,1);
// 	write(1,"\nmod: ",3+2+2);
// 	write(1,&modulate,1);
// 	write(1,"\n",2);
// 	return (0);
// }