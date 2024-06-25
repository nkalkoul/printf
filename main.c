/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 19:34:45 by nkalkoul          #+#    #+#             */
/*   Updated: 2024/06/25 20:33:25 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	main(void)
{
	int				o;
	int				v;
	char			q;
	int				d;
	int				p;
	char			*str = {NULL};
	unsigned int	po;

	po = 5;
	o = 25;
	v = 1;
	q = 'm';
	d = ft_printf("je suis nassim et j ai %d ans. Je fais %d %c, %s %ufois\n", o, v, q, str, po);
	p = printf("je suis nassim et j ai %d ans. Je fais %d %c, %s %ufois\n", o, v, q, str, po);
	printf("\n%d", p);
	printf("\n%d", d);
	return (0);
}
