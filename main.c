/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaratas <akaratas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 00:24:21 by akaratas          #+#    #+#             */
/*   Updated: 2024/01/04 20:45:42 by akaratas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("file.txt", O_RDONLY);
	printf("getNextLine: %s\n", get_next_line(fd));
	printf("getNextLine: %s\n", get_next_line(fd));
	printf("getNextLine: %s\n", get_next_line(fd));
	printf("getNextLine: %s\n", get_next_line(fd));
	close(fd);
}
