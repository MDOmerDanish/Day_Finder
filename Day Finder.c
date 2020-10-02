#include<stdio.h>
int func(int q,int m,int y)

    {      int h;
            if(m==1)
            {
                m=13;
                y--;
            }

            if(m==2)
            {
                m=14;
                y--;
            }

            h=q+(26*(m+1))/10+y+y/4+6*(y/100)+y/400;
            h=h%7;

            return h;

    }
main()
{
    int q,m,y,h;


    printf("enter the date :dd/mm/yy\n");

    scanf("%d/%d/%d",&q,&m,&y);

    h= func( q, m, y);

   switch(h)
   {
       case 0 :printf("the day is SATURDAY");
               break;
       case 1 :printf("the day is SUNDAY");
               break;
       case 2 :printf("the day is MONDAY");
               break;
       case 3 :printf("the day is TUESDAY");
               break;
       case 4 :printf("the day is WEDNESSDAY");
               break;
       case 5 :printf("the day is THURSDAY");
               break;
       case 6 :printf("the day is FRIDAY");
               break;


   }
        return 0;
}
