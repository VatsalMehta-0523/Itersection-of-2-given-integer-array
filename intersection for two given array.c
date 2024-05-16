#include <stdio.h>

void printArr( int arr[] , int n ) ;
void remove_dupplicates(int arr[] , int *n );


int main(){

    printf("this programme finds the intersection of two input arrays\n");
    int n , m ;     // n & m are sizes for array 1 % 2
    printf("enter size for 1st array : ");
    scanf("%d",&n);
    printf("enter elements for 1st array of size %d : ",n);

    int arr1[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter size for 2nd array : ");
    scanf("%d",&m);
    printf("enter elements for 2nd array of size %d : ",m);

    int arr2[m];
    for (int i = 0 ; i < m ; i++){
        scanf("%d",&arr2[i]);
    }



    printf("\nintersection between two given array is : ");
    int k = 0 ;
    int inter_array[n+m] ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if ( arr1[i] == arr2[j]) {

                inter_array[k] = arr1[i];
                k++;
            }
        }
    }



    //sort(arr);
    int temp ;
    for (int i = 0 ; i  < n ; i++){
        for (int j = i+1 ; j < n ; j++){
            if (inter_array[i] > inter_array[j]){
                temp = inter_array[i] ;
                inter_array[i] = inter_array[j];
                inter_array[j] = temp ;
            }

        }
    }

    remove_dupplicates( inter_array , &k );

    printArr(inter_array , k );
    printf("\n");



    return 0 ;
}



void printArr( int arr[] , int n ){  // function to print array
    for (int i = 0 ; i < n ; i++){
        printf("%d ", arr[i]);
    }
}

void remove_dupplicates(int arr[] , int *n ){  // function to remove duplicate elements from array
    int j = 0 ;
    for ( int i = 0 ; i < *n ; i++ ){
        if ( arr[i] != arr[i+1] ){
            // adding value to array only if adjacent values are not same
            arr[j++] = arr[i] ;
        }
    }
    *n = j ;   // updating size of array .
}
