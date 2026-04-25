#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the value in a:\n");
    scanf("%d",&a);
    printf("Enter the value in b:\n");
    scanf("%d",&b);
    printf("Enter the value in c:\n");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("large:%d\n",a);
        if(b>c)
        {
            printf("mid:%d\n",b);
            printf("small:%d\n",c);
        }
        else
        {
            printf("mid:%d\n",c);
            printf("small:%d\n",b); 
        }
    }
    else if(b>c&&b>a)
    {
    printf("large:%d\n",a);
        if(b>c)
        {
            printf("mid:%d\n",b);
            printf("small:%d\n",c);
        }
        else
        {
            printf("mid:%d\n",c);
            printf("small:%d\n",b); 
        }
    }
    else
    {
      printf("large:%d\n",c);
        if(a>b)
        {
            printf("mid:%d\n",a);
            printf("small:%d\n",b);
        }
        else
        {
            printf("mid:%d\n",b);
            printf("small:%d\n",a); 
        }  
    }
    return 0;
}