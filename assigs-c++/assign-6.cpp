void rotate_string(int d=1 ,int n=1);
void lcm();
int isprime(int);
void prime_fact();
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
    int d,y=2;
    //rotate_string();
    //lcm();
    prime_fact();
}


void rotate_string(int d, int n){  //humne arguments func. declaration se liye hai
                                   // na ki main mai jo func. call kiya hai usse
    int arr[]={1,2,3,4,5};  
    n=2;
    
    int temp;

    int len= sizeof(arr)/sizeof(arr[0]);
    if(d==1){
        for(int i=0 ;i < n ;i++){

            temp=arr[len-1];
            for(int j=0; j <len -1; j++){
                
                arr[len-(j+1)]=arr[len-(j+2)];
            }
            arr[0]=temp;

        }
    }
    else if(d==-1){
        for (int i=0; i<n; i++){
            temp=arr[0];
            for(int j=0; j<len -1; j++){
                arr[j]=arr[j+1];
            }
            arr[len-1]=temp;
        }
    }    

    for(int i=0; i< len;i++){
        cout<<arr[i]<<endl;
    }
}

void lcm(){
    int a,b,lcmm;
    int common=1;
    cout<<"enter values of a b";
    cin>>a;
    cin>>b;
    
    for(int i=1; i<=(a<b?a:b) ;i++){
        if(a%i==0 && b%i==0){
            common=i;
        }
    }
    lcmm=(a*b)/common;
    cout<<lcmm;


}
int isprime(int x){
    int count=0;
    for(int j=1;j*j<=x;j++){
        if(x%j==0){
            count++;
        }
    }
    if(count==1){
        return 1;
    }
    else{
        return 0;
    }
}

void prime_fact(){
    int n=36;
    for(int i=2; i<=n; i++ ){

        if(n%i==0){
            if(isprime(i)){
                cout<<i<<" ";
            }
        }
    }
}