#include <stdio.h>
void display(int arr[], int n){
    for(int i=0 ; i< n;i++){
        printf(" %d ", arr[i]);
    }
}
int main(){
    int arr[6]={6,3,9,5,2,8};
    display(arr,6);
    return 0;
}