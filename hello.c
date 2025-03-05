//#include<stdio.h>
//int main()
//{
//	int a,b,c;
//	printf("enter the values :");
//	scanf("%d %d",&a,&b);
//	printf("addition is : %d",a+b);
//}


#include <stdio.h>

int main() {
    int X,Y;
    scanf("%d %d",&X,&Y);
    int z = 0;
    int distance = 0;
    while(distance+X < Y){
        distance += X;
        z++;
    }
    printf("%d",z);
    
    return 0;
}


