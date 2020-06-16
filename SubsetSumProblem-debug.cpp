
// A recursive solution for subset sum problem 
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

int level = 0;

string arrayToStream(int array[], int n) {
    string output = "[";

    for(int i=0; i<n; i++) {
        output.append(to_string(array[i]));
        if (i != n-1) {
            output.append(", ");
        }
    }
    output.append("]");

    return output;
}

void print_vector(vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

string indent(int count) {
    string indentstr = "";
    while(count--) indentstr.append("  ->");

    return indentstr;
}

vector<int> subset;

// Returns true if there is a subset 
// of set[] with sum equal to given sum 
bool isSubsetSum(int set[], int n, int sum) 
{
    // cout << indent(level) << "isSubsetSum(" << arrayToStream(set, n) << ", " << n << ", " << sum << ")" << endl;
    // Base Cases 
    if (sum == 0) {
        print_vector(subset);
        return true;
    }
    if (n == 0 && sum != 0) 
        return false; 
  
    // If last element is greater than sum, 
    // then ignore it 
    // if (set[n - 1] > sum) {
    //     level++;
    //     bool result = isSubsetSum(set, n - 1, sum);
    //     level--;
    //     cout << indent(level) << "result = " << (result ? "true" : "false") << endl;
    //     return result;
    // }
  
    /* else, check if sum can be obtained by any  
of the following: 
      (a) including the last element 
      (b) excluding the last element   */
    level++;
    bool res_left = isSubsetSum(set, n - 1, sum);
    // cout << indent(level) << "result = " << (res_left ? "true" : "false") << endl;
    
    subset.push_back(set[n-1]);
    bool res_right = isSubsetSum(set, n - 1, sum - set[n - 1]);
    // cout << indent(level) << "result = " << (res_right ? "true" : "false") << endl;
    bool result = res_left || res_right;
    // cout << indent(level) << "result = " << (result ? "true" : "false") << endl;
    level--;
    subset.pop_back();

    return result;
} 
  
// Driver program to test above function 
int main() 
{ 
    int set[] = { 3, 4, 6, 2 }; 
    int sum = 9; 
    int n = sizeof(set) / sizeof(set[0]); 
    if (isSubsetSum(set, n, sum) == true)  {
        printf("Found a subset with given sum\n"); 
        print_vector(subset);
    } else
        printf("No subset with given sum"); 
    return 0; 
} 