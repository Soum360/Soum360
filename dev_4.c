#include <sys/types.h>
#include <stdlib.h>
#include <md5.h>

int main ()
{
    int fd; char*buf;
    MD5File(fd, &buf );
    printf ("%p", buf);
    fclose( fd );
    return 0;
}
