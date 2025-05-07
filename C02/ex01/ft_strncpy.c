/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:33:14 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/23 18:42:12 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *ello = "hello people haha";
// 	char des[strlen(ello)];

// 	ft_strncpy(des, ello,strlen(ello));
// 	printf("%s",des);
// 	return (0);
// }