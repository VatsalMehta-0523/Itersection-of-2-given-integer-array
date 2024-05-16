#include <stdio.h>

int main(){
    int n , m ;     // n & m are sizes for array 1 % 2
    printf("enter size for 1st array : ");
    scanf("%d",&n);
    printf("enter elements for first array of size %d : ",n);

    int arr1[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter size for 2nd array : ");
    scanf("%d",&m);
    printf("enter elements for first array of size %d : ",m);

    int arr2[m];
    for (int i = 0 ; i < m ; i++){
        scanf("%d",&arr2[i]);
    }

    printf("\nintersection between two given array is : ");
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if ( arr1[i] == arr2[j]){
                printf("%d , ", arr1[i]);

            }
        }
    }


    return 0 ;
}
