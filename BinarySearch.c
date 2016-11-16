#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

void bubbleSort(int item_list[]);
int binarySearch(int item_list[], int searchedItem, int upper, int lower, int temp);

int main()
{
    int items[SIZE] = {2, 2, 4, 5, 6, 7, 11, 17, 23, 45, 50};
    int searchedItem = 3;

    bubbleSort(items);
    int t = binarySearch(items, searchedItem, SIZE-1, 0, 0);

    for(int i=0; i<SIZE-1; i++){
        printf("%d  ", items[i]);
    }
    //printf("\n%d", 7<-27);
    if(t == -1){
        printf("\nItem: %d is Not In the Given List", searchedItem);
    }else{
    printf("\n%d is located at position %d ", searchedItem, t);
    }

    return 0;
}
void bubbleSort(int item_list[]){
        /*
        Sorting from the smallest to largest
    */
    int temp;
    for(int h=0; h<SIZE; h++){
        for(int i=0; i<SIZE-1; i++){
            if(item_list[i] > item_list[i+1]){
                temp = item_list[i+1];
                item_list[i+1] = item_list[i];
                item_list[i] = temp;
            }
    }
    }
}
int binarySearch(int item_list[], int searchedItem, int upper, int lower, int temp){
    /*
    function implementing Binary search
    If item being searched is less than item found; the upper bound
    should be decreased to (current position - 1);
    else if item being searched is larger than item found the lower bound
    should be raised to (current position + 1)
    */
    if(lower <= upper){

        temp = (upper + lower) / 2;

        if(item_list[temp] == searchedItem){
            return temp;
          }
        else if(item_list[temp] > searchedItem){
                upper = temp - 1;
                return binarySearch(item_list, searchedItem, upper, lower, temp);
        }
        else {
            lower = temp + 1;
            return binarySearch(item_list, searchedItem, upper, lower, temp);
        }
    }

    return -1;
}
