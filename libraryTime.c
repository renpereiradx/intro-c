#include <stdio.h>
#include <time.h>

time_t begin, end;

int main ()
{
    begin = time(NULL);
    for (int i = 0; i < 6000000000; i++);
    end = time(NULL);
    printf("La duracion total del programa fue: %f\n", difftime(end, begin));
    
    return 0;
}