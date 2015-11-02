/*Problem : Find an i, such that, A1+A2...Ai-1 =Ai+1+Ai+2...An.

Input Format 
The first line contains T, the number of test cases. For each test case, the first line contains N, the number of elements in the array A. The second line for each test case contains N space-separated integers, denoting the array A.

Output Format 
For each test case print YES if there exists an element in the array, such that the sum of the elements on its left is equal to the sum of the elements on its right; otherwise print NO.

Constraints 
1≤T≤10 
1≤N≤105 
1≤Ai ≤2×104 
1≤i≤N
*/
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
