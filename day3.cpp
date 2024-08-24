#include <iostream>
using namespace std;
int main(){
    //1.sum of n natural numbers
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum = 0;
    int fact = 1;
    for(int i=1;i<=n;i++){
        sum = sum+i;
        fact = fact*i;
    }
    cout<<"Sum of "<<n<<"natural number is: "<<sum<<endl;
    //2.factorial of number
    cout<<"factorial of "<<n<<" is: "<<fact<<endl;
    //3.multiplication table
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}