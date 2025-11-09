#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char src[] = "The Worst Things to eat before you sleep";
    char dst[100];
    
    strcpy(dst,src);//대상,원문순서. 
    
    printf("copied string: %s\n",dst);
    
    
    system("PAUSE");
    return 0;

}
