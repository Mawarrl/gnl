#include "get_next_line.h"

static  unsigned int    ft_strnlen(char *str, char c)
{
	unsigned int i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static char    *save_line(char *buff1, char **nextline, int *tmp)
{
	unsigned int count;

	*tmp = *tmp * 2;
	count = ft_strnlen(buff1, '\n');
	//	printf("save_line function\n");
	*nextline = ft_strsub((const char*)buff1, count + 1, ft_strlen(buff1) - (count + 1));
	//      printf("Memory allocated in save_line\n");
	buff1[count] = '\0';
	return (buff1);
}

static int	read_line(char **buff1, char **buff2, char **line, char **nextline, int fd)
{
	int tmp;
	//	printf("function read_line\n");
	tmp = BUFF_SIZE;
	if (ft_strlen(*nextline) > 0)
	{
		*buff2 = ft_strsub((const char*)*nextline, 0, ft_strnlen(*nextline, '\n'));
		if (ft_strlen(*buff2) < ft_strlen(*nextline))
		{
			save_line(*nextline, buff1, &tmp);
			*nextline = ft_strdup(*buff1);
		}
		else
		{
			*nextline[0] = '\0';
			tmp = tmp * 2;
		}

	}
	while (tmp == BUFF_SIZE)
	{
		tmp = read(fd, *buff1, BUFF_SIZE);
		//		printf("Resultat de read : %s\n", *buff1);
		//		if (tmp != BUFF_SIZE)
		//			tmp = 0;
		//		printf("tmp apres read = %d\n", tmp);
		if (tmp < 0)
			return (-1);
		if (ft_strnlen(*buff1, '\n') < ft_strlen((const char*)*buff1))
			*buff1 = save_line(*buff1, nextline, &tmp);
		*buff2 = ft_strjoin((const char*)*buff2, (const char*)*buff1);
	}
	*line = ft_strdup(*buff2);
	//	printf("buff2 = %s\n", *buff2);
	//	printf("line = %s\n", *line);
	free (*buff2);
	free (*buff1);
	//	printf("tmp = %d\n", tmp);
	return (tmp);
}

int	get_next_line(int fd, char **line)
{
	char *buff1;
	char *buff2;
	static char *nextline = NULL;
	int tmp;

	if (!nextline)
	{
		if (!(nextline = ft_memalloc(BUFF_SIZE)))
			return (-1);
	}
	//	printf("\nNEXTLINE CONTENT = %s\n\n", nextline);
	if (!(buff2 = ft_memalloc(1)))
		return (-1);
	if (!(buff1 = ft_memalloc(BUFF_SIZE)))
		return (-1);
	//	printf("MEMORY ALLOCATED\n");
	tmp = read_line(&buff1, &buff2, line, &nextline, fd);
	if (tmp == 0)
		free (nextline);
	return (tmp);
}

/*int				main(void)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	char		*filename;
	int			errors;

	filename = "gnl3_3.txt";
	fd = open(filename, O_RDONLY);
	if (fd > 2)
	{
		count_lines = 0;
		errors = 0;
		line = NULL;
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			if (count_lines == 0 && strcmp(line, "1234567890abcde") != 0)
				errors++;
			if (count_lines == 1 && strcmp(line, "fghijklmnopqrst") != 0)
				errors++;
			if (count_lines == 2 && strcmp(line, "edcba0987654321") != 0)
				errors++;
			if (count_lines == 3 && strcmp(line, "tsrqponmlkjihgf") != 0)
				errors++;
			count_lines++;
			if (count_lines > 50)
				break ;
		}
		close(fd);
		if (count_lines != 4)
			printf("-> must have returned '1' four times instead of %d time(s)\n", count_lines);
		if (errors > 0)
			printf("-> must have read \"1234567890abcde\", \"fghijklmnopqrst\", \"edcba0987654321\" and \"tsrqponmlkjihgf\"\n");
		if (count_lines == 4 && errors == 0)
			printf("OK\n");
	}
	else
		printf("An error occured while opening file %s\n", filename);
	return (0);
}*/

///////////// MAIN INITIAL
/*int     main(int argc, char **argv)
  {
  int fd;
  char *line;
  int tmp;
  tmp = 1;
  fd = open("./gnl7_2.txt", O_RDONLY);
  if (fd == -1)
  {
  printf("OPEN ERROR\n");
  return (0);
  }
  while ((tmp = get_next_line(fd, &line)) > 0)        
  {
//		tmp = get_next_line(fd, &line);
if (!(line))
{
printf("ERROR\n");
return (0);
}
ft_putchar('|');
ft_putstr(line);
ft_putchar('|');
ft_putchar('\n');
if (tmp == 0)
printf("| LECTURE DONE |");
}
//      tmp = get_next_line(fd, &line);
//      ft_putstr(line);
if (tmp < 0)
printf("ERROR IN GNL\n");

close(fd);
return (0);
}*/


//////////////////TEST 20
/*int                             main(void)
  {
  char            *line;
  int                     fd;
  int                     ret;
  int                     count_lines;
  char            *filename;
  int                     errors;

  filename = "gnl7_2.txt";
  fd = open(filename, O_RDONLY);
  if (fd > 2)
  {
  count_lines = 0;
  errors = 0;
  line = NULL;
  while ((ret = get_next_line(fd, &line)) > 0)
  {
  if (count_lines == 0 && strcmp(line, "1234567") != 0)
  errors++;
  if (count_lines == 1 && strcmp(line, "abcdefgh") != 0)
  errors++;
  count_lines++;
  if (count_lines > 50)
  break ;
  printf("ret = %d\nline = %s\n", ret, line);
  }
  close(fd);
  if (count_lines != 2)
  printf("-> must have returned '1' twice instead of %d time(s)\n", count_lines);
  if (errors > 0)
  printf("-> must have read \"1234567\" and \"abcdefgh\"\n");
  if (count_lines == 2 && errors == 0)
  printf("OK\n");
  }
  else
  printf("An error occured while opening file %s\n", filename);
  return (0);
  }*/
