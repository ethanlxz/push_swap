/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:17:10 by etlaw             #+#    #+#             */
/*   Updated: 2023/04/20 17:15:53 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

void	errormsg(char *msg)
{
	ft_printf("%s\n", msg);
	exit(0);
}

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	while (i >= 0)
		free(arr[i--]);
}

char	*ps_strjoin(char const *s1, char const *s2, char const *s3)
{
	char	*news;
	char	*result;

	news = ft_strjoin(s1, s3);
	result = ft_strjoin(news, s2);
	free(news);
	free((void *)s1);
	return (result);
}
