    #include<stdio.h>
    int main()


    {
        int a;
        printf("Enter The Number You Want Multiplication Table Of: ");
        scanf("%d",&a);

        for(int i=1;i<=10;i++)
        {
            printf("%2d x %2d = %3d\n",a,i,a*i);
        }
        return 0;
    }
