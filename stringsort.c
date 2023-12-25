/*
1. take input
2. Find the length o string
3. find the largest element from the string
4. Diclear a new array with highest+1 size
5. Assign 0 to all value in highestSizeArray
6. find the value of a string (str[i]-'a')+1
7. 
8. every time next largest value and the corresponding character  filter 

*/ 

#include <stdio.h>

int main()
{
    // Step 1: take input
    char str[1000];
    scanf("%s", str);

    // Step 2: find the length of input
    int i=0,n=0;

    while(str[i]!='\0'){
        i++;
        n++;
    }

    // Step 3: Find the highest element
    int largestElement= 26; 

    // Step 4: Diclear a new array with highest+1 size
    int freq[largestElement+1];

    // Step 5: Assign 0 to all value in highestSizeArray
    for(int i=1;i<=largestElement;i++){
        freq[i]=0;
    }

    // Step 6: find the available value and increment to the highestSizeArray
    for(int i=0;i<n;i++){
        freq[(str[i]-'a')+1]++;
    }
    // step 7: total iteration 
    int total=0;
    for(int i=1;i<= largestElement;i++){
        if(freq[i]>0){
            total++;
        }
    }

    // step 8: Print sorted array
    int nxt =0;
    while(nxt!=total){
        int max=-1,index=-1;
        char ch;

        for (int i = 1; i < largestElement; i++)
        {
            if (freq[i]>max){
                max = freq[i];
                ch= i+96;
                index=i;
            }  
        }
        // printf("Next greatest value - %d \n", max);
        // printf("Character - %c\n\n", ch);

        for(int i=1;i<=max;i++){
            printf("%c",ch);
        }

        freq[index]=0;
        nxt++;
    }

    return 0;
}