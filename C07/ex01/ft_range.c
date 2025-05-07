/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:21:39 by yasmail           #+#    #+#             */
/*   Updated: 2025/05/04 18:16:46 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ran;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ran = malloc(sizeof(int) * (max - min));
	if (!ran)
		return (NULL);
	while (min < max)
	{
		ran[i] = min;
		i++;
		min++;
	}
	return (ran);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	min = 3;
// 	int	max = 10;
// 	int	*range = ft_range(min, max);

// 	for (int i = 0; i < max - min;i++)
// 		printf("%d",range[i]);

// 	free(range);
// 	return (0);
// }