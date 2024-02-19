#include<iostream>

// Bubble Sort = if an element in index 0 is larger than an element in index 1,
//               put it in a temporary variable and put the smaller one in 
//               index 0. Finally, take the larger element in previous container
//               and put it in index one (we just swapped the two elements).
//               Repeat the process until we reach the end.

void sort(int numbers[], int size);

int main() {
    int numbers[]={10, 8, 6, 4, 2, 1, 3, 5, 7, 9};
    int size=sizeof(numbers)/sizeof(numbers[0]);

    sort(numbers, size);

    for(int element:numbers){
        std::cout<<element<<' ';
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i=0; i<size - 1; i++){    
        for(int j=0; j<size - i - 1; j++){
            if(array[j]>array[j+1]){   // if value array[1] > value array[2] :
                temp = array[j];       // 1. put value array[1] in temp.
                array[j] = array[j+1]; // 2. put value array[2] in array[1]. 
                array[j+1] = temp;     // 3. put value array[1] (temp) in array[2].
            }
        } 
    }
}

//  How it works: 
//  "i<size - 1" is written because the larger value is naturally gravitate towards the end of the array.
//  "j<size - i - 1" is written because once the larger value is switched to the right, we did not need
//                   to sort it again.
//  Next, if an index is > than index+1, switch it. Done!