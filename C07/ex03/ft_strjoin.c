/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:55:55 by yasmail           #+#    #+#             */
/*   Updated: 2025/05/04 18:30:29 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	get_lengths(int size, int *length, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		*length += ft_strlen(strs[i]);
		if (i < size - 1)
			*length += ft_strlen(sep);
		i++;
	}
}

char	*convert_text(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		k = 0;
		while (k < ft_strlen(strs[i]))
		{
			result[j++] = strs[i][k++];
		}
		k = 0;
		while (k < ft_strlen(sep) && i < size - 1)
		{
			result[j++] = sep[k++];
		}
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		length;

	length = 0;
	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	get_lengths(size, &length, strs, sep);
	result = malloc(length + 1);
	result[length] = '\0';
	return (convert_text(size, strs, sep, result));
}

// #include <stdio.h>
// int main(void)
// {
// 	char *strs[] = {"one", "two", "three"};
// 	char *sep = ", ";
//     char *hi = ft_strjoin(3, strs, sep);

// 	printf("%s",hi);
// 	free(hi);
// 	return (0);
// }