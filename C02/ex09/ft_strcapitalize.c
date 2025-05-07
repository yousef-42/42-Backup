/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:23:52 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/23 19:22:28 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i])
	{
		if (_isalnum(str[i - 1]) == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (_isalnum(str[i - 1]) == 1 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include <unistd.h>
// #include <string.h>
// int main(void)
// {
// 	char ello[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	write(1,ft_strcapitalize(ello),strlen(ello));
// 	return (0);
// }