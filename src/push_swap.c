/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkullana <wkullana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 09:25:52 by wkullana          #+#    #+#             */
/*   Updated: 2025/01/15 11:45:05 by wkullana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int visualizer(char *argv)
// {
// 	int		i;
// 	int		j;

// 	while (argv)
// 	ft_printf("%s", LINE);
// 		Init a and b:
// 	2
// 	1
// 	3
// 	6
// 	5
// 	8
// 	_ _
// 	a b
// 	ft_printf("%s", LINE); 
// }

int main(int argc, char **argv)
{
	(void) argc;

	while (*argv)
		ft_printf("%s", *argv++);
	// char	*a;
	// char	*b;
	// while (1)
	// {
	// 	visualizer(&argv);
	// }
	return (0);
}
