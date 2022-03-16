#include <stdio.h>
#include <stdlib.h>
#include<md5.h>

int main ()
{
    int i;
    for (i=1; i<1000; i++)
    {
         int fd; char*buf
         MD5File(fd, &buf );
         printf ("%p", buf);
    }


    fclose( fd );
    return 0;
}
