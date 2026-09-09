#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j,k;
    char arrstr[200][201];
    int len1;
    printf("Enter your string array size:");
    scanf("%d",&n);
    printf("Enter your String element:");
    for(i=0;i<n;i++){
        scanf("%s",arrstr[i]);
    }
    len1=strlen(arrstr[0]);
   printf("Your string array is :");
   for(i=0;i<n;i++){
       printf("\"%s\"", arrstr[i]);
       if(i<n-1){
       printf(",");
       }
   }
   printf("\nLongest String prefix is: ");

for(k = 0; k < len1; k++) {

    int same = 1;

    for(i = 1; i < n; i++) {
        if(arrstr[0][k] != arrstr[i][k]) {
            same = 0;
            break;
        }
    }

    if(same)
        printf("%c", arrstr[0][k]);
    else
        break;
}
}
