/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rand_number_ini.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-vill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:25:12 by ide-vill          #+#    #+#             */
/*   Updated: 2015/03/01 18:25:14 by ide-vill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rand_number_ini(void)
{
	int		nb;

	srand(time(NULL));
	nb = rand() % 100 >= 70 ? 4 : 2;
	return (nb);
}
