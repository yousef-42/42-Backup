/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:46:09 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/21 19:03:01 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	contains;

	i = 0;
	contains = 1;
	while (str[i] && contains == 1)
	{
		if (str[i] >= 32 && str[i] <= 127)
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
// 	char *ello = "h\nello";

// 	printf("%s%s",check(ft_str_is_printable(ello))," printable");
// 	return (0);
// }