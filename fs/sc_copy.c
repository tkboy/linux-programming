#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
	char c;
	int in, out;
	
	in = open("sc_copy", O_RDONLY);
	out = open("sc_copy.bak", O_WRONLY | O_CREAT, S_IRUSR|S_IWUSR);
	while(read(in, &c, 1) == 1)
		write(out, &c, 1);

	exit(0);
}
