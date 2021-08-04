#include <stdio.h>
#include <stdlib.h>

int printArr(int array[], int size){
    for (int loop = 0; loop < size; loop++){
    printf("%d",array[loop]);
    }
    printf("\n");
    return(0);
}


void insert_into_array(int array[], unsigned int cur_size,
                       unsigned int total_size, int value){

                           // find the smallest number in the array
                            //for(int i = (cur_size - 1);i < total_size;i++){
                                array[cur_size - 1] = value;
                           //}
                       }

                           
                        
int findNextSmallest(int sourceArray[],int indx,int size,int previousSmallest){
int currSmallest;
for(int i = 0;i < size; i++){
    if (sourceArray[i] > previousSmallest) {
        currSmallest = sourceArray[i];
    }
}
    if (indx == 0){
        for(int i = 0;i < size; i++){
             if (sourceArray[i] < currSmallest) {
                 currSmallest = sourceArray[i];
             }}
             } 
    else {
        for (int i = 0;i < size; i++){
             if (sourceArray[i] > previousSmallest && sourceArray[i] < currSmallest) {
                 currSmallest = sourceArray[i];
             }
    }}
    return currSmallest;

}

void sort(int source_array[], int dest_array[], unsigned int size){

    int previousSmallest = source_array[0];

    for(int i = 0;i < size;i++){

        previousSmallest = findNextSmallest(source_array,i,size,previousSmallest);
        printf("%s","previousSmallest");
        printf("%d", previousSmallest);
        printf("%d", i);
        printf("%s", "\n");
        insert_into_array(dest_array,i+1,size,previousSmallest);
    }

    printArr(source_array,size);
    printArr(dest_array,size);


}


int main() {
    int myArr[] = {1,7,2,2,4,8};
    int myArr2[] = {2,8,1,3,9};
    int emptyArr[5];

    sort(myArr2,emptyArr,5);

}