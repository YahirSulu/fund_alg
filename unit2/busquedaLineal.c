#include <stdio.h>
#include <stdlib.h>

int linearySearch(int arr[], int sizeArr, int valueToFind) {
    printf("funcion ejecuta\n");
    for (int index = 0; index < sizeArr; index ++ ){
        printf("currenct Index: %d:  arregloData: %d\n",index, arr[index]);
        if ( arr[index] == valueToFind) {
            return index;
        }
    }
    return -1;
};

int main( int argc, char ** argv){
    int arr[5] = {50, 5, 1, 37, 4};
    int indexFound = linearySearch(arr, 5, atoi(argv[1]));
    printf("index found: %d\n", indexFound);
    return 0;
}

