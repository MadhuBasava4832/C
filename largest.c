//#include <stdio.h>
//
//int main(void) {
//	// your code goes here
//    int a,b,c;
//    scanf("%d %d %d",&a,&b,&c);
//    if(a>b && a>c){
//        printf("Largest: %d",a);
//    }else if(b>c && b>a){
//        printf("Largest: %d",b);
//    }else{
//        printf("Largest: %d",c);
//    }
//}




//#include <stdio.h>
//
//int main() {
//    int a, b;
//    // Take inputs and complete the code
//    scanf("%d%d",&a,&b);
//    int x=a+b;
//    if(x%2==0){
//        printf("YES");
//    }else{
//        printf("NO");
//    }
//    return 0;
//}




//#include <stdio.h>
//
//int main() {
//    while (1) {
//        printf("Hello");
//        break;
//    }
//    return 0;
//}



//Write a C program that takes an integer as input and prints its reverse. Use a while loop for the reversal process.


//#include <stdio.h>
//int main(void) {
//	// your code goes here
//    int x,remainderr,tostore=0;
//    scanf("%d",&x);
//    while(x!=0){
//        remainderr=x%10;		//x % 10 gets the last digit of num and stores it in remainder.
//        tostore=tostore*10+remainderr; 		//tostore * 10 + remainder appends the last digit to tostore.
//        x=x/10;		//x / 10 removes the last digit from num.
//    }
//    printf("%d",tostore);
//}
//





//Given a positive integer N, find sum of its digits.

//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    // Complete the code
//    int sum=0;
//    while(n>0){
//        sum+=n%10;
//        n=n/10;
//    }
//    printf("%d",sum);
//}













