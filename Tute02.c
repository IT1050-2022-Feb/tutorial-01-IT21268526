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

int main() 
{
  float r_amount,t_amount, tempAmount;
  int r_dist, dist=0;

  printf("Enter the distance: ");
  scanf("%d",&dist);

  if (dist >= 30)
  {
    r_dist= dist-30;
    tempAmount = r_dist*40.00;
    t_amount=30*50 + tempAmount;

    printf("Amount is: %.2f", t_amount);
   
  }
  else
  {
    t_amount=dist*50.00;
    printf("Amount is: %.2f", t_amount);

  }
  return 0;
}



  

