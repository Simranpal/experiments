#include <iostream>
using namespace std;

int binarySearch(int *myarray, int value, int low, int high) {

    while(low <= high) {
        int mid = (low + high) / 2;

        if (myarray[mid] < value) {
            low = mid + 1;
        }
        else  if (myarray[mid] > value) {
            high = mid - 1;
        }

        else
            return mid;
    }
    return -1;
}
int main(){
    int myarr[] = {1,2,3,4,5};
    int n;
    int arrSize = sizeof(myarr)/sizeof(myarr[0]);
    cout << "Enter number to search in array:" << endl;
    cin >> n;

    cout<< "Number is present at index: "<< binarySearch(myarr,n,0,arrSize - 1)<<endl;

    return 0;
}
