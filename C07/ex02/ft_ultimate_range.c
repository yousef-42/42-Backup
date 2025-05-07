/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:54:06 by yasmail           #+#    #+#             */
/*   Updated: 2025/05/04 18:14:17 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

// #include <stdio.h>
// int main(void)
// {
// 	int *range;
// 	int	size = ft_ultimate_range(&range, 3, 9);

// 	for (int i = 0; i < size;i++)
// 		printf("%d ",range[i]);

// 	free(range);
// 	return (0);
// }