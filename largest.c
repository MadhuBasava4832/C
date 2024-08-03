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


#include <stdio.h>

int main() {
    int a, b;
    // Take inputs and complete the code
    scanf("%d%d",&a,&b);
    int x=a+b;
    if(x%2==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
