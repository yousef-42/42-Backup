/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:55:10 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/23 17:16:05 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	contains;

	i = 0;
	contains = 1;
	while (str[i] && contains == 1)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			contains = 1;
		else
			contains = 0;
		i++;
	}
	return (contains);
}

// #include <stdio.h>
// char	*check(int num)// ignore
// {
// 	char *ello;
// 	if (num == 1)
// 		ello = "does only contain";
// 	else
// 		ello =  "doesn't only contain";

// 	return (ello);
// }
// int main(void)
// {
// 	char *ello = "hello";

// 	printf("%s%s",check(ft_str_is_alpha(ello))," alphabetical");
// 	return (0);
// }