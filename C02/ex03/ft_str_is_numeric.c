/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:46:05 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/21 18:33:58 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	contains;

	i = 0;
	contains = 1;
	while (str[i] && contains == 1)
	{
		if (str[i] >= '0' && str[i] <= '9')
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
// 	char *ello = "1221";

// 	printf("%s%s",check(ft_str_is_numeric(ello))," numeric");
// 	return (0);
// }