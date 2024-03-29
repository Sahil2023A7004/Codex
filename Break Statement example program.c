//Break Statement example program

 #include<stdio.h>
 int main(){
    for(int i=1; i<=5; i++){
        if(i==4){
        break;
    }
    printf("%d\n",i);
 }
 printf("Statement down");
 return 0;
 }
 /*program explained*
 From for loop we provided data to compiler and we wanted to print i from 1 to 5
 but after we applied break statement we told compiler that at i =4 end the loop 
 and print "statement down" /