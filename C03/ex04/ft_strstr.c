/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:56:07 by yasmail           #+#    #+#             */
/*   Updated: 2025/04/23 20:12:57 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_exist(char *str, char *exi, int id)
{
	int	i;

	i = 0;
	while (exi[i] && str[id + i] == exi[i])
		i++;
	return (exi[i] == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		if (_exist(str, to_find, i))
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
