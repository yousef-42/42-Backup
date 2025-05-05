/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:06:10 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/21 15:12:12 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tempor;

	i = 0;
	tempor = 0;
	size--;
	while (i < size)
	{
		tempor = tab[i];
		tab[i] = tab[size];
		tab[size] = tempor;
		i++;
		size--;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int halo[] = {1,2,3,4,5,6,7,8,9};
// 	int size = sizeof(halo) / sizeof(halo[0]);
// 	ft_rev_int_tab(halo, size);

// 	for (int i = 0; i < size;i++)
// 		printf("%i", halo[i]);
// 	return 0;
// }