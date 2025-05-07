/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmail <yasmail@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:59:24 by yasmail           #+#    #+#             */
/*   Updated: 2025/05/07 13:55:58 by yasmail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define TRUE	1
# define FALSE	0
# define SUCCESS	0
# define EVEN(number)	(number % 2 == 0)
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"	

#endif