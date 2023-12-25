/*
1. Take array size input from user.
2. take array input from user.
3. Find the highest element
4. Diclear a new array with highest+1 size
5. Assign 0 to all value in highestSizeArray
6. find the available value and assign 1 to the highestSizeArray
7. do necessary as question

*/

#include<stdio.h>

int main(){
    // Step 1: take array size input
    int n;
    scanf("%d",&n);

    // Step 2: Take array input 
    int arr[n];

    for(int i =0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    // Step 3: Find the highest element
    int highest= arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>highest){
            highest= arr[i];
        }
    }

    //Step 4: Diclear a new array with highest+1 size

    int highestSizeArray[highest+1];

    // Step 5: Assign 0 to all value in highestSizeArray 

    for(int i =0; i<=highest;i++){
        highestSizeArray[i]=0;
    }

    //Step 6: find the available value and assign 1 to the highestSizeArray

    for(int i=0;i<n;i++){
        highestSizeArray[arr[i]]+=1;
    }

    // step 7: Print sorted array

    for(int i=0; i<=highest;i++){
        if(highestSizeArray[i]>0){
            printf("%d ", i);
        }
    }

    return 0;


}