/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:07:46 by etlaw             #+#    #+#             */
/*   Updated: 2023/02/17 13:02:03 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_free(char *buffer, char *buf)
{
	char	*temp;

	temp = gnl_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

char	*ft_next(char *buffer)
{
	int		i;
	char	*line;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	line = gnl_substr(buffer, i + 1, gnl_strlen(buffer) - i);
	free(buffer);
	return (line);
}

char	*ft_getline(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = gnl_substr(buffer, 0, i + 1);
	return (line);
}

char	*readfile(int fd, char *res)
{
	char	*buffer;
	int		byte_read;

	if (!res)
		res = gnl_substr("", 0, 0);
	buffer = (char *)malloc(BUFFER_SIZE + 1 * sizeof(char));
	byte_read = 1;
	while (!gnl_strchr(res, '\n') && byte_read != 0)
	{
		byte_read = read (fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
			break ;
		buffer[byte_read] = 0;
		res = ft_free(res, buffer);
	}
	free(buffer);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = readfile(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_getline(buffer);
	buffer = ft_next(buffer);
	return (line);
}
