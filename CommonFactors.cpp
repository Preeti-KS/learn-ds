
    // Sample code to perform I/O:

    #include <iostream>

    using namespace std;

    int min(int num1, int num2){
        return num1 < num2 ? num1 : num2;
    }
    int max(int num1, int num2){
        return num1 > num2 ? num1 : num2;
    }
    int FindHCF(int num1, int num2) {
        int rem;
        int a = min(num1, num2);
        int b = max(num1, num2);

        while (rem != 0) {
            rem = b % a;
            b = a;
            a = rem;
        }

        return b;
    }

    int FindCommonFactors(int num1, int num2){
        int length = FindHCF(num1, num2);
        int factorsCount = 0;

        cout << "HCF:" << length << endl;

        for(int i=1 ; i<=length; i++) {
            if(num1%i == 0 && num2%i == 0){
                factorsCount = factorsCount + 1;
            }
        }
        return factorsCount;


    }

    int main() {
        int num1, num2;
        cin >> num1;
        cin >> num2; // Reading input from STDIN
        int result;
        result = FindCommonFactors(num1, num2);

        cout << result << endl;
    }

    // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


    // Write your code here

