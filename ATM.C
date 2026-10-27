#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredpin;
    int choice;
    float balance = 5000;
    float amount;
    
    printf("===== WELCOME TO ATM =====\n");
    
    printf("Enter your pin: ");
    scanf("%d", &enteredpin);
    
    if (enteredpin != pin);
    {
       printf("Invalid pin!\n");
       return 0;
    }
    
    printf("\nlogin successful!\n");
    
    do
    {
       printf("\n===== ATM MENU =====\n");
       printf("1. Check Balance\n");
       printf("2. Deposit Money\n");
       printf("3. withdraw Money\n");
       printf("4. Exite\n");
       
       printf("Enter Your choice: ");
       scanf("%d", &choice);
       
       switch (choice)
       {
           case 1:
               printf("Your Balance: Rs. 5.2f\n",balance);
               break;
               
           case 2:
               printf("Enter deposit amount: ");
               scanf("%f", &amount);
               
               if (amount > 0)
               {
                  balance = balance + amount;
                  printf("Money Deposited successfully!\n");
                  printf("New Balance: Rs. %.2f\n", balance);
               }
               else
               {
                  printf("Invalid Amount!\n");
               }
               break;
               
          case 3:
              printf("Enter Withdrawal amount: ");
              scanf("%f", &amount);
              
              if (amount < 0)
              {
                 printf("Ivalid Amount!\n");
              }
              else if (amount <= balance)
              {
                  balance = balance - amount;
                  printf("please Collect Your Cash.\n");
                  printf("Remaining Balance: Rs. %.2f\n", balance);
              }
              else
              {
                  printf("Insufficient Balance!\n");
              }
              break;
              
         case 4:
             printf("Thank You for Using ATM!\n");
             break;
         
         default:
             printf("Invalid Choice!\n");
      }        
      
   } while (choice != 4);
   
   return 0;   
}    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    