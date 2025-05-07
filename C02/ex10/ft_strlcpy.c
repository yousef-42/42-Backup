/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:56:10 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/23 18:45:03 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	if (size == 0)
		return (0);
	i = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *ello = "hello people";
// 	char des[strlen(ello)];

//     printf("%u%s",ft_strlcpy(des, ello,15),"\n");
//     printf("%s",des);

// 	return (0);
// }