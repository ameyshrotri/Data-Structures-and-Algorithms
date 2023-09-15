//BinarySearch Program
#include <iostream>
using namespace std;
int binarysearch(int arr[],int key,int size){
int     min = 0;
int     max = size-1;
int mid = (min+max)/2;
 
while(min<=max){
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        max = mid-1;
    }
    else if(arr[mid]<key){
        min = mid+1;
    }
    else{
        return -1;
    }
    
    mid = (min+max)/2;
}
}
int main() {
    int a[] = {2,4,6,8,12,18};
  int index =   binarysearch(a,4,6);
    cout<<index<<endl;
    return 0;
}
