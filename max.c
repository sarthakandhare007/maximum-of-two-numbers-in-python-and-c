void main()
{

    int x,y;
    printf("Enter two Numbers:");
    scanf("%d %d",&x,&y);

    if (x>y)
    {

        printf("%d is greater..!",x);
    }
     else if (y>x)
     {
         printf("%d is greater..!",y);
     }
     else
     {

         printf("%d and %d both are equal..!",x,y);
     }



    getch();
}
