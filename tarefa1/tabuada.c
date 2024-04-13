#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mult(int a, int b){
    int result;
    result = a * b;
    return (result);
}
int main() {
	
    int x;
    int result1,result2,result3,result4,result5,result6,result7,result8,result9;
    scanf("%d",&x);

    result1 = mult(x,1);
    result2 = mult(x,2);
    result3 = mult(x,3);
    result4 = mult(x,4);
    result5 = mult(x,5);
    result6 = mult(x,6);
    result7 = mult(x,7);
    result8 = mult(x,8); 
    result9 = mult(x,9);    

    
    
    printf("%d X 1 = %d\n",x,result1);
    printf("%d X 2 = %d\n",x,result2);
    printf("%d X 3 = %d\n",x,result3);
    printf("%d X 4 = %d\n",x,result4);
    printf("%d X 5 = %d\n",x,result5);
    printf("%d X 6 = %d\n",x,result6);
    printf("%d X 7 = %d\n",x,result7);
    printf("%d X 8 = %d\n",x,result8);
    printf("%d X 9 = %d\n",x,result9);

    
    return 0;
}