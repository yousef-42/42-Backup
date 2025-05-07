/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:38:37 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/21 18:45:26 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	contains;

	i = 0;
	contains = 1;
	while (str[i] && contains == 1)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
// 	char *ello = "HELLO";

// 	printf("%s%s",check(ft_str_is_uppercase(ello))," Upper");
// 	return (0);
// }