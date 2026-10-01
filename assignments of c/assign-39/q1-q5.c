// int f1(int arr[][] );
int duplicate(char arr[], int x);
void wordcount();


#include<stdio.h>
#include<string.h>
int main(){
    // int crr[]="aarchi";
    // int** mybrr=f1(crr);
    // for(int q=0;q<2;q++){
    //     for(int p=0;p<len(crr);p++){
    //         printf("%d",mybrr[q][p]);
    //     }
    // }
    wordcount();
    


}

// int f1(int arr[][],int k){
//     int count,k,duplicate=0;
//     int brr[50][2];
//     for(int k=0;k<leng(arr) ;k++){
        
//         for(int i=0; i<len(arr);i++){
//             if(arr[k]==arr[i]){
//                 count++;
//             }
            
//         }

//         for(int j=0; j<=k;j++){
//             if(brr[j][0]==arr[k]){
//                 duplicate=1;

//             }
//         }
//         if(duplicate=1){
//             continue;
//         }
       
        
//         brr[k][0]=arr[k];
//         brr[k][1]=count;




//     }
//     return brr;
// }

int duplicate(char arr[], int x){
    int temp=x;                       //iise pata chalega ki already to count bata to nahi diya iska
    for(int p=0; p< x; p++){
        if(arr[p]==arr[temp]){
            return 0;
        }
    }
    return 1;

}
//q2
void wordcount(){
    int count=0,n;
    char brr[]="amanapahsvdvf";
    n=strlen(brr);
    
    for(int i=0; i<n ;i++){
        count=0;
        if(duplicate(brr,i)){         //agar bata diya hoga toh skip karega else ki madad se ,other wise not
            for(int j=i ;j<=n;j++){
                if(brr[i]==brr[j]){
            
                    count++;
                }
            }
            printf("%c count is %d\n",brr[i],count);
        }
        else if(duplicate(brr,i)==0){
            continue;

            }
        
    }

}

//q2