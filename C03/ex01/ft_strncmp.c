/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:02:53 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/23 19:04:05 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	if (n < 1)
		return (0);
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str1 = "hello world";
// 	char *str2 = "hello";

// 	printf("%i",ft_strncmp(str1, str2,4));
// 	return 0;
// }