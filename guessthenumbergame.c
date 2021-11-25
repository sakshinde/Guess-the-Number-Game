#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (void)
{   
    int i,num,guess,attempts=0;
    srand(time(0));
    num = rand() % 100 + 1;   

 for( i=0;i<10;i++)
{
    
     printf("Go ahead and guess any number between 1 and 100 \n");
     scanf("%d",&guess);
     attempts++;  

 if(abs(num-guess)>=30)
{
     printf("Too far away \n");
}
 else if (abs(20>num-guess)>30)
{
    printf("Getting Closer !\n"); /* code */
}
 else if (abs(10>num-guess)>20)
 {
    printf("Quite Close \n"); /* code */
 }
 else if (0<abs(num-guess)<=10)
 {
    printf("Very Close !\n"); /* code */
 }
 else if (guess = num)
 {
    printf("BRAVO ! Guessed it right in %d attempts !",attempts); /* code */
 break;
 }
 else if (attempts>10)
 {
  printf("Sorry,you lost.");   /* code */
 }
}

return 0;
}
