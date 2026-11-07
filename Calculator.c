// THIS IS A SIMPLE CALCULATOR PROGRAM IN C LANGUAGE
// CODED BY: DAKSH GOSWAMI ( A CS MAJOR AT GALGOTIAS UNIVERSITY )

#include<stdio.h>
  int main () {
    int a, b, choice;  
      printf("enter first number\n");
              scanf("%d",&a);
          printf("enter second number\n");
              scanf("%d",&b);
          printf("enter operation ( 1-add , 2-subtract , 3-multiply , 4-divide )\n");
              scanf("%d",&choice);

    switch(choice){   
        case 1 : 
            printf("The sum is : %d\n",a+b);
                break;
        case 2:
            printf("The differnce is : %d\n",a-b);
                break;
        case 3:
            printf("The product is : %d\n",a*b);
                break;
        case 4:
            if (b!=0){
                printf("the quotient is : %.2f\n",(float)a/b);
        }   else {
                printf("Error: Division by zero is not allowed.\n");
            }       break;
    
        default:
            printf("Invalid operation choice.\n");
        }
        
    return 0;
}
