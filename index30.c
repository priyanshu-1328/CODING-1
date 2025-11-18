#include<stdio.h>
int main() {
    int arr[5]={10,25,30,45,50};
    int i, key,found=0;
    printf("enter the element to be search:");
    scanf("%d" , &key);
    for(i=0 ; i<5 ; i++) {
        if(arr[i]==key) {
            found=1;
            break;
        }
    }
    if(found)
        printf("element %d found at postion %d\n", key, i+1);
    else
        printf("element %d not found in the array\n", key);
    return 0;
}