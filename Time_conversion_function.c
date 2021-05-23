#include<stdio.h>
#include<math.h>

 int Timeconversion(int hrs,int mins)
 {

     return (hrs*60)+mins;


 }

   int main()

 {
     int hrs,mins;

     int totaltime;

     printf("Enter the hours:");

     scanf("%d" , &hrs);

     printf("Enter the minutes:");

     scanf("%d" , &mins);

     totaltime = Timeconversion(hrs,mins);

     printf ("The hours and minutes in seconds = %d " , totaltime);

     return 0;

 }
