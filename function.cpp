//functions syntax
//returntype functionname(type1,type2...){
// do
//}
//function solves redundancy problem
//every function is stored in stack memory in the form of stack frames/call stack






#include<iostream>
using namespace std;
int sum(int a, int b){//parameters
    int s=a+b;
    return s;
}

int minof2(int a, int b){//parameters
    if(a<b){
    return a;
    }else{
        return b;
    }
}


//questions
//calculate sum of numbers from 1 to n

int sumN(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
    sum+=i;
  }
  return sum;
}


//calculate n factorial
int factorialN(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
  fact*=i;
  }
  return fact;
}


//pass by value

int pass(int a,int b){
  return a+b;
}
//example main function for pass by value
//int main(){
  //int x=5,y=4;
  //cout<<pass(x,y)<<endl;
  //return 0;
//}

//count the sum of digits
int sumofdigits(int num){
  int digsum=0;
  while(num>0){
    int lastdig=num%10;
    num/=10;
    digsum += lastdig;
  }
  return digsum;
}

//calculate the binomial co-efficient for n and r
// this problem shows show main function call one function and that function calls another function

int factorial(int n){
  int fact=1;
  for(int i=1;i<=n;i++){
  fact*=i;
  }
  return fact;
}

int nCr(int n, int r){
  int fact_n=factorial(n);
  int fact_r=factorial(r);
  int fact_nmr=factorial(n-r);

  return fact_n/(fact_r*fact_nmr);
}


//UNIVERSAL MAIN FUNCTION, USE THIS TO GET THE OUTPUT ACCORDINGLY
  int main(){
    int n=8,r=2;
    cout<<nCr(n,r)<<endl;//arguments
    
    return 0;
  }





