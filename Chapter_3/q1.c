 //Write a program to check if a given number is Armstrong number or not.
 #include<stdio.h>
 int main()
 {
    int n,armstrong=0,orgnl_val,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    orgnl_val=n;  //intitalis value of n to seprate variable, cause val. of n is going to change.
    while(n>0){
    r=n%10;       
    armstrong = (r*r*r)+armstrong;
    n=n/10; 
    }
    if(orgnl_val==armstrong)
    {
        printf("Number %d is Amstrong",orgnl_val);
    }
    else{
        printf("Number %d is Not Armstrong",orgnl_val);
    }
    return 0;
 }