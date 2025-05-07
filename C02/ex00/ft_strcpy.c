/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:39:59 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/21 16:49:29 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *ello = "hello people";
// 	char des[strlen(ello)];

// 	ft_strcpy(des, ello);
// 	write(1,&des,strlen(ello));
// 	return (0);
// }