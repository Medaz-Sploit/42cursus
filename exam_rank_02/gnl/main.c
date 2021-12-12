/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 06:39:03 by mazoukni          #+#    #+#             */
/*   Updated: 2021/10/28 10:39:12 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int main()
{
	char *line;

	line = NULL;
	while ((line = get_next_line(0)) != NULL)
	{
		printf("%s\n", line);
		free(line);
	}
}