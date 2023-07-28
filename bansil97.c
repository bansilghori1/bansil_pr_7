/*Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/
#include<stdio.h>


addition(){
int i,j,k;
printf("Enter the first number => ");
scanf("%d",&i);
printf("Enter the second number => ");
scanf("%d",&j);

k=i+j;

printf("THE SUM IS %d\n",k);
}

substraction(){

int i,j,k;
printf("Enter the first number => ");
scanf("%d",&i);
printf("Enter the second number => ");
scanf("%d",&j);

k=i-j;

printf("THE SUBSTRACTION IS %d\n",k);
}
multiplication(){

int i,j,k;
printf("Enter the first number => ");
scanf("%d",&i);
printf("Enter the second number => ");
scanf("%d",&j);

k=i*j;

printf("THE MULTIPLICTION  IS %d\n",k);
}
division(){
int i,j,k;
printf("Enter the first number => ");
scanf("%d",&i);
printf("Enter the second number(SECOND NUMBER MUST BE  NATURAL NUMBER) => ");
scanf("%d",&j);

k=i/j;

printf("THE DIVISION IS %d\n",k);
}

modulo(){

int i,j,k;
printf("Enter the first number => ");
scanf("%d",&i);
printf("Enter the second number => ");
scanf("%d",&j);

k=i%j;

printf("THE MODULO IS %d\n",k);

}

a(){
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>Enter right choice<<<<<<<<<<<<<<<<<<<<<<<<");
}


int main(){
do{

printf("\n\n\n");
printf("press 1 for +\n");
printf("press 2 for -\n");
printf("press 3 for *\n");
printf("press 4 for /\n");
printf("press 5 for %\n");
printf("press 0 for the exit\n");

int choice;

printf("enter your choice:  ");
scanf("%d",&choice);




switch(choice){

case 1:
    addition();
    break;
case 2:
    substraction();
    break;

case 3:
    multiplication();
    break;

case 4:
    division();
    break;

case 5:
    modulo();
    break;

case 0:
    printf("You are exit from menu\n");
    break;

default:
 a();

   }
}while(1);

}