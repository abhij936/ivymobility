#include <stdio.h>  
   
int main()  
{  
    //Initialize array   
    int arr[] = {6, 7, 3, 3, 4, 5};   
        //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
    printf("Elements of given array present on even position: \n");  
    //Loop through the array by incrementing value of i by 2  
    //Here, i will start from 1 as first even positioned element is present at position 1.  
    for (int i = 0; i < length; i = i++) {   
        if(arr[i]==i){
        printf("%d\n", arr[i]);   
    }   }
    return 0;  
}
