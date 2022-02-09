/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//diclare varibles
int main() 
{
 float total amount;
 int r_dist=0,dist=0;
//get inputs
 print("Enter the distance:");
 scanf("%f",&dist);

 if(dist>=30)
 {
   r-dist=dist-30;
   tempamount=r_dist*40;
   total amount=30*50+tempamount;

   printf("Amount is:%2f",total amount);
   
 }
 else
 {
   total amount=dist*50.00;
   printf("Amount is:%2f",total amount);
 }
//end of the diclaration
 return 0;
}




  

