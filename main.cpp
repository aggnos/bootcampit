#include <iostream>

using namespace std;

int mergeSort(int myArray[]);
int mergingFun(int arr[], int arra[]);

int mergeSort( int myArray[] ){
    int arrayLength = sizeof(myArray)/sizeof(myArray[0]);
    if (arrayLength < 1)
        return *myArray;
    int firstHalf[arrayLength/2];
    int secondHalf[arrayLength/2];
    for(int i = 0; i < arrayLength/2; i++) {
        firstHalf[i] = myArray[i];
    }
    for(int i = 0; i < arrayLength/2; i++) {
        secondHalf[i] = myArray[arrayLength/2 + (i+1)];
    }

    mergeSort(firstHalf);
    mergeSort(secondHalf);

    return mergingFun(firstHalf, secondHalf);
}

int mergingFun( int myArrayOne[], int myArrayTwo[] ){
    int third[3];

    int lengthOne = sizeof(myArrayOne) / sizeof(myArrayOne[0]);
    int lengthTwo = sizeof(myArrayTwo) / sizeof(myArrayTwo[0]);
    int leng;
    lengthOne < lengthTwo ? leng = lengthTwo : leng = lengthOne;

    while (lengthOne != 0 && lengthTwo != 0) {

    }
    return 1;
}



int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
