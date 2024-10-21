// Fibonnaci Series
#include <stdio.h>
int main (void){
    int i,n , n1=0, n2=1, n3;
    printf("Enter no of Entries: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i<2) printf("%d ",i);
        else{
            n3 = n1+ n2;
            printf("%d ",n3);
            n1 =n2;
            n2=n3;
        }
    }
    return 0;
}