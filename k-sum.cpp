#include <iostream>
using namespace std;

int k_sum(int *myarr, int k, int size) {
    int i, j, count;
    i = count = 0;
    j = size - 1;

    while(i < j) {
        int sum = myarr[i] + myarr[j];
        if(sum == k) {
            count++;
            i++;
            j++;
        }
        else if(sum > k)
            j --;
        else
            i++;
    }
    return count;

}
int main(){
    int myarr[] = {1,2,3,4,5,6,7,8,9,10};
    int k;
    int arrSize = sizeof(myarr)/sizeof(myarr[0]);
    cout << "Enter sum (k):" << endl;
    cin >> k;

    cout<< "counts of pairs: "<< k_sum(myarr,k,arrSize)<<endl;

    return 0;
}
