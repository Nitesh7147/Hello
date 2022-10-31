#include <iostream>
#include <vector>
using namespace std;
int search(int a[], int n, int target){
    int start=0,end=n;
    while(start<=end){
        int mid= start+ (end-start)/2;
        if(a[mid]==target){
            return mid;
        }
        else if (a[mid]> target) end= mid-1;
        else start= mid+1;
    }
    return -1;
}

int main(){
    int a[]= {1,2,4,5,8,99};
    cout<< search(a,6,4) << endl;
}