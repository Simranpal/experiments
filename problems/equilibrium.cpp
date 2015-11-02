#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void equilibrium (int myArray[], int arr_size){
    int flag = 0;
    int sumBefore = 0, sumAhead = 0, sumTotal = 0;
    for(int i = 0; i< arr_size; i++) {
        sumTotal += myArray[i];
    }//cout <<sumTotal <<":sumTotal"<<endl;
    for(int i = 0; i < arr_size; i++) {
        sumBefore += myArray[i-1];
        sumAhead   = sumTotal - sumBefore - myArray[i];   // cout <<sumBefore <<":sumBefore  " <<sumAhead <<":sumAhead " <<endl;
        if (sumBefore == sumAhead) flag = 1;
    }
    
    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T, arr_size;
    cin >> T;
    for(int i = 1; i <=T ; i++) {
        cin >> arr_size;
        int inputArray[arr_size];
        for(int i = 0; i <arr_size; i++) {
            cin >> inputArray[i];
        }
        equilibrium (inputArray, arr_size);        
    }
    
    return 0;
}
