/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:07:06 by yasmail           #+#    #+#             */
/*   Updated: 2025/05/04 18:16:20 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*original = "Hello, World!";
// 	char	*duplicate;

// 	duplicate = ft_strdup(original);

// 	if (duplicate)
// 	{
// 		printf("Original: %s\n", original);

// 		printf("Duplicate: %s\n", duplicate);

// 		free(duplicate);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return (0);
// }
