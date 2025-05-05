/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:59:40 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/20 17:26:35 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <unistd.h>
// int main(void)
// {
// 	int div;
// 	int mod;

// 	ft_div_mod(3, 2, &div, &mod);
// 	char dig1 = '0' + div;
// 	char dig2 = '0' + mod;

// 	write(1,"divide: ",6+2);
// 	write(1,&dig1,1);
// 	write(1,"\nmod: ",3+2+2);
// 	write(1,&dig2,1);
// 	write(1,"\n",2);
// 	return (0);
// }