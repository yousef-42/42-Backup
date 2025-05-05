/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:47:56 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/22 12:16:12 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temporary;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				temporary = tab[i];
				tab[i] = tab[j];
				tab[j] = temporary;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// void printIt(int halo[],int size)
// {
// 	for (int i = 0; i < size;i++)
// 	{
// 		printf("%i", halo[i]);
// 		if (i < size)
// 		printf("%c", ' ');
// 	}
// }
// int main(void)
// {
// 	int halo[] = {1,3,5,2,10,6,9,7,4,8,0};
// 	int size = sizeof(halo) / sizeof(halo[0]);
// 	ft_sort_int_tab(halo, size);
// 	printIt(halo,size);
// 	return 0;
// }