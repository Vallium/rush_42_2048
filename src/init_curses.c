/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_curses.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:51:49 by aalliot           #+#    #+#             */
/*   Updated: 2015/03/01 18:51:51 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_curses(t_win *win)
{
	win->boul = 1;
	initscr();
	start_color();
	keypad(stdscr, true);
	curs_set(0);
	signal(SIGINT, SIG_IGN);
}
