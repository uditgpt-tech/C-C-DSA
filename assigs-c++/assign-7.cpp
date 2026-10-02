
void findhcf();
void volume(int , int,int);
void volume(int, int);
void volume(int);

void substring(int start_ind, int end_ind=6);
//void substring(int )

#include<iostream>
using namespace std;
int main(){
    //findhcf();
    // int radius;
    // cout<<"enter radius";
    // cin>>radius;
    // volume(radius);

    // int L,B,H;
    // cout<<"enter l,b,h";
    // cin>>L>>B>>H;
    // volume(L,B,H);

    int start,end;
    cout<<"enter starting and end index";
    cin>>start>>end;
    substring(start);
    

}
void findhcf(){
    int a,b;
    cout<<"enter a,b";
    cin>>a>>b;
    int hcf=1;
    for(int i=1; i<= (a>b?b:a);i++){
        if(a%i==0 && b%i==0){

            hcf=i;
        }
    }
    cout<<hcf;
}

void volume(int l, int b, int h){ //cuboid

    int vol;
    cout<<(vol=l*b*h);
}
void volume(int r, int h){  //cone
    float vol;
    vol=(1/3)*3.14*r*r*h;
    cout<<vol;
}
void volume(int r){  //sphere
    float vol;
    vol=(4*r*r*r)/3.0;
    cout<<vol<<"pie";
}


void substring(int start_ind ,int end_ind){ //agar def. ke andar default value set karni hai
    /*TO jahan call kiya hai usse pehele iski body banao jisse compiler ke pass
     default value ki info ho so vo error na de ki pehele value do ,becoz declaration
     ke according koi default value set nahi hai to compiler mangega value do second wale 
     ke liye  since hum function call mai ek hee value pass karre hai*/
    int arr[]={1,2,3,4,5,6};

    for(int i= start_ind; i< end_ind;i++){
        cout<<arr[i];
    }

}