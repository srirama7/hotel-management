#include <stdio.h>
#include<stdlib.h>

int main()
{struct paint{
    int type;
    int color;
}p1,p2;
p1.type=1;
p1.color=5;
if(sizeof(p1)==sizeof(p2))
{
    printf("same");
}
else
{
    printf("differe"); 
}
return 0;
}