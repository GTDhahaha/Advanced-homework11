#include<stdio.h> 
#include<string.h> 
int main()
{
 
  char sp1[10];  //special prize
  char sp2[10];  
  char jp1[10]; //jackpot 
  char jp2[10]; 
  char jp3[10];
  char six1[5];//the extra six prizes
  char six2[5];
  char number[10]; 

  printf("Please enter the number of the special prize:");
  fgets(sp1,10,stdin); 
 
  printf("Please enter the number of the prize:");
  fgets(sp2,10,stdin);
 
  printf("Please enter the number of the jackpot (1):");
  fgets(jp1,10,stdin);
 
  printf("Please enter the number of the jackpot (2):");
  fgets(jp2,10,stdin); 
 
  printf("Please enter the number of the jackpot (3):");
  fgets(jp3,10,stdin);
 
  printf("Please enter the number of the sixth prize (1):");
  fgets(six1,5,stdin);
 
  printf("Please enter the number of the sixth prize (2):");
  fgets(six2,5,stdin);
 
  printf("Please enter the invoice number:\n"); 
  
 while(fgets(number,10,stdin)) 
 {
        if (strcmp(number,sp1)==0) 
        {
           printf("Congratulations on your special prize! The amount is 10 million Taiwan dollars!\n");
        }
 
        else if (strcmp(number,sp2)==0) 
        {
           printf("Congratulations on your special prize! The amount is NT$2 million!\n");
        }
 
        else if (strcmp(number,jp1)==0)
        {
            printf("Congratulations on winning the jackpot! The amount is NT$200,000!\n");
        }
 
        else if (strcmp(number,jp2)==0) 
        {
            printf("Congratulations on winning the jackpot! The amount is NT$200,000!\n");
        }
 
        else if (strcmp(number,jp3)==0)
        {
            printf("Congratulations on winning the jackpot! The amount is NT$200,000!\n");
        }
 
        else if (strncmp(&number[1],&jp1[1],7)==0)
        {
            printf("Congratulations on your second prize! The amount is NT$40,000!\n");
        }
 
        else if (strncmp(&number[1],&jp2[1],7)==0)
        {
            printf("Congratulations on your second prize! The amount is NT$40,000!\n");
        }
 
        else if (strncmp(&number[1],&jp3[1],7)==0) 
        {
            printf("Congratulations on your second prize! The amount is NT$40,000!\n");
        }
 
        else if (strncmp(&number[2],&jp1[2],6)==0)
        {
            printf("Congratulations on winning three prizes! The amount is NT$10,000!\n");
        }
 
        else if (strncmp(&number[2],&jp2[2],6)==0)
        {
            printf("Congratulations on winning three prizes! The amount is NT$10,000!\n");
        }
 
        else if (strncmp(&number[2],&jp3[2],6)==0)
        {
            printf("Congratulations on winning three prizes! The amount is NT$10,000!\n");
        }
 
        else if (strncmp(&number[3],&jp1[3],5)==0) 
        {
            printf("Congratulations on your winning four prizes! The amount is NT$4,000!\n");
        }
 
        else if (strncmp(&number[3],&jp2[3],5)==0) 
        {
            printf("Congratulations on your winning four prizes! The amount is NT$4,000!\n");
        }
 
        else if (strncmp(&number[3],&jp3[3],5)==0) 
        {
            printf("Congratulations on your winning four prizes! The amount is NT$4,000!\n");
        }
 
        else if (strncmp(&number[4],&jp1[4],4)==0) 
        {
            printf("Congratulations on your winning five prizes! The amount is NT$1,000!\n");
        }
 
        else if (strncmp(&number[4],&jp2[4],4)==0) 
        {
            printf("Congratulations on your winning five prizes! The amount is NT$1,000!\n");
        }
 
        else if (strncmp(&number[4],&jp3[4],4)==0) 
        {
            printf("Congratulations on your winning five prizes! The amount is NT$1,000!\n");
        }
 
        else if (strncmp(&number[5],&jp1[5],3)==0) 
        {
            printf("Congratulations on your winning six prizes! The amount is 200 Taiwan dollars!\n");
        }
 
        else if (strncmp(&number[5],&jp2[5],3)==0) 
        {
            printf("Congratulations on your winning six prizes! The amount is 200 Taiwan dollars!\n");
        }
 
        else if (strncmp(&number[5],&jp3[5],3)==0) 
        {
            printf("Congratulations on your winning six prizes! The amount is 200 Taiwan dollars!\n");
        }
 
        else if (strncmp(&number[5],&six1[0],3)==0) 
        {
            printf("Congratulations on your winning the extra six prizes! The amount is 200 Taiwan dollars!\n");
        }
 
        else if (strncmp(&number[5],&six2[0],3)==0) 
        {
            printf("Congratulations on your winning the extra six prizes! The amount is 200 Taiwan dollars!\n");
        }
 
        else
        {
            printf("Sorry,you didn't win!! Thank you for your patronage!!\n");
        }
 
        printf("Please enter the invoice number:");
 }
        return 0;
}
