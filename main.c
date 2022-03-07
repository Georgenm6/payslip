
#include <stdio.h>

int main() {
    char empname[20], empno[6], krapin[20];
    int hoursworked;
    int taxpaid,overtime,netincome,normalpay,rate,excess;
    rate=1000;

   printf("Enter the employees name: ");
   scanf("%s", empname);

   printf("Enter your employees number: ");
   scanf("%s", empno);

   printf("Enter your kra pin: ");
   scanf("%s", krapin);

   printf("Enter the hours worked: ");
   scanf("%d", &hoursworked);


   if ( hoursworked <= 40 )
   {
     normalpay=rate*hoursworked;
     printf("normal pay;%d\n",normalpay);
     taxpaid=normalpay*0.3;
     printf("tax;%d\n",taxpaid);
     netincome=normalpay-taxpaid;
      printf("netincome;%d\n",netincome);

   }
   else {
       excess=hoursworked-40;
       overtime=1.5*rate*excess;
        printf("overtime;%d\n",overtime);
        taxpaid=overtime*0.3;
        printf("tax;%d\n",taxpaid);
        netincome=overtime-taxpaid;
      printf("netincome;%d\n",netincome);


    }



    return 0;
}
