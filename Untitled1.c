#include<stdio.h>
int main(){

int n,i,t;
scanf("%d", &n);
int a[n];
int flag = 0;
for(i = 0; i<n ; i++)
    scanf("%d", &a[i]);

for(i = 0; i<n ; i++)
    printf("%d ", a[i]);

//linear
printf("\nenter your target");
scanf("%d", &t);
for(i = 0; i<n ; i++){

    if(a[i]==t){
        printf("found at %d", i);
        flag = 1;
        break;
    }




}
if(flag == 0){
    printf("not found");
}







}
