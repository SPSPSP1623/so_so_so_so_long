/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: speladea <speladea@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-17 15:13:53 by speladea          #+#    #+#             */
/*   Updated: 2024-06-17 15:13:53 by speladea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_get_txt(char *buffer, char *bookmark, int fd)
{
	size_t	bytes_read;
	char	*tmp;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		if (!bookmark)
			bookmark = ft_strdup("");
		tmp = bookmark;
		bookmark = ft_strjoin(tmp, buffer);
		free (tmp);
		if (!bookmark)
			return (NULL);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (bookmark);
}

static char	*ft_get_bookmark(char *get_txt)
{
	char	*bookmark;
	int		i;

	i = 0;
	if (!get_txt)
		return (NULL);
	while (get_txt[i] != '\0' && get_txt[i] != '\n')
		i++;
	if (get_txt[i] == '\0')
		return (NULL);
	i++;
	bookmark = ft_substr(get_txt, i, ft_strlen(get_txt) - i);
	if (!bookmark || *bookmark == 0)
	{
		free (bookmark);
		bookmark = NULL;
	}
	get_txt[i] = '\0';
	return (bookmark);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*get_txt;
	static char	*bookmark[FILES_DESCRIPTOR];

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free (bookmark[fd]);
		bookmark[fd] = NULL;
		free (buffer);
		buffer = NULL;
		return (NULL);
	}
	get_txt = ft_get_txt(buffer, bookmark[fd], fd);
	free (buffer);
	buffer = NULL;
	if (!get_txt)
		return (NULL);
	bookmark[fd] = ft_get_bookmark(get_txt);
	return (get_txt);
}

/* int	main(void)
{
	int		fd;
	int		fd2;
	int		fd3;
	char	*line;
	char	*line2;
	char	*line3;

	fd = open("mali.txt", O_RDONLY);
	fd2 = open("mali2.txt", O_RDONLY);
	fd3 = open("mali3.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("line = %s", line);
		if (!line)
			break ;
		free(line);
		line2 = get_next_line(fd2);
		printf("line2 = %s", line2);
		if (!line2)
			break ;
		free(line2);
		line3 = get_next_line(fd3);
		printf("line3 = %s", line);
		if (!line)
			break ;
		free(line3);
	}
	close (fd);
	close (fd2);
	close (fd3);
} */
