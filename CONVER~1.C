/*This Project takes Any Integer as input and convert it to its Word form
  Ex:
  Input:342
  Output: Three Hundred and Fourty Two
 -By Chauhan Abhinay
 */

#include<stdio.h>
void d2word(int);
void check(int);
void position(int);

int main(){
int Ary[9],i=0;
long int num=0;
textbackground(4);
clrscr();
printf("Enter No.less than 10 digit ");
scanf("%ld",&num);
printf("\nYou Entered: %ld\n",num);
while(num>0&&i<9){
    Ary[i]=num%10;
    num=num/10;
    i++;
   // digit++;
}
//--i;
//Begning
printf("\n-------------------------------------------------------------------------------\n");
while(i>0){
    if (i%2==1&&i<10&&i>3){//1234
	check((Ary[i-1]*10)+Ary[i-2]);
	position(i);
	i=i-2;
       // digit-2;
    }
    else if(i%2==0&&i<10&&i>3){
	d2word(Ary[i-1]);
	position(i);
	i--;
    }
    else if(i==3){
    d2word(Ary[i-1]);
    position(i);
    i--;
    }
    else if(i==2){
    check((Ary[i-1]*10)+Ary[i-2]);
    //replace this line with check(Ary[i-1],Ary[i-2]);
    //position(i);
    i=i-2;
    }
    else if(i==1)
    {
    d2word(Ary[i-1]);
    i--;
    }
    else
    {
    printf("Error at if else ladder");
    i--;
    }
}
printf("\n-------------------------------------------------------------------------------\n");
getch();
return 0;
}

void check(int num){
    int d1=0,d2=0;
    if ((num<20&&num>0)||(num%10==0&&num>0&&num<100)){
	d2word(num);  }
    else if(num>=20&&num<100&&num%10!=0){
	d2=num%10;
	num=num/10;
	d1=num%10;
	d2word(d1*10);
	d2word(d2);
    }
    else{
	printf("Error at check");
    }
}
//module 3
void d2word(int num){
    switch(num){
	case 0:
	printf("Zero ");
	break;
	case 1:
	printf("One ");
	break;
	case 2:
	printf("Two ");
	break;
	case 3:
	printf("Three ");
	break;
	case 4:
	printf("Four ");
	break;
	case 5:
	printf("Five ");
	break;
	case 6:
	printf("Six ");
	break;
	case 7:
	printf("Seven ");
	break;
	case 8:
	printf("Eight ");
	break;
	case 9:
	printf("Nine ");
	break;
	case 10:
	printf("Ten ");
	break;
	case 11:
	printf("Eleven ");
	break;
	case 12:
	printf("Twelve ");
	break;
	case 13:
	printf("Thirteen ");
	break;
	case 14:
	printf("Fourteen ");
	break;
	case 15:
	printf("Fifteen ");
	break;
	case 16:
	printf("Sixteen ");
	break;
	case 17:
	printf("Seventeen ");
	break;
	case 18:
	printf("Eighteen ");
	break;
	case 19:
	printf("Ninteen ");
	break;
	case 20:
	printf("Twenty ");
	break;
	case 30:
	printf("Thirty ");
	break;
	case 40:
	printf("Fourty ");
	break;
	case 50:
	printf("Fifty ");
	break;
	case 60:
	printf("Sixty ");
	break;
	case 70:
	printf("Seventy ");
	break;
	case 80:
	printf("Eighty ");
	break;
	case 90:
	printf("Ninty ");
	break;
	default:
	printf("Error at d2word");
	break;
    }
}

//module 5
void position(int digit){
    switch(digit){
	case 9:
	printf("Crore ");

	break;
	case 8:
	printf("Crore ");
	break;
	case 7:
	printf("Lakh ");
	break;
	case 6:
	printf("Lakh ");
	break;
	case 5:
	printf("Thousand ");
	break;
	case 4:
	printf("Thousand ");
	break;
	case 3:
	printf("Hundred and ");
	break;
	case 0:
	printf(".0");
	break;
	default:
	printf(".0 position");
	break;

    }
}



//module4
//int tens(int d1,int d2){
//return d1*10+d2;
//}

       /* Rough work
    else if (i==7){
	check(Ary[i]*10+Ary[i-1])
	position(i);
	i-2;
       // digit-2;
    }
    else if(i==6){
	d2word(Ary[i]);
	position(i);
	i--;
	//digit--;
    }*/
