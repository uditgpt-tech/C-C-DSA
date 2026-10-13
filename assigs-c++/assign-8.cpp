


#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
//q1
class complex{
    private:
        int a , b; //instance member variable

    public:
        void input();   //instance member functions
        void display();
          
    
};

void complex::input(){
    cout<<"enter values for real and img part";
    cin>>a>>b;


}

void complex::display(){
    cout<<"these are the values of complex";
    cout<<a<<"+"<<b<<"i";


}



//q2
class time{
    private:
        int hr;
        int min;
        int sec;
    
    public:

        void input();
        void display();

};
void time::input(){
    cout<<"enter hr";
    cin>>hr;
    cout<<"enter min";
    cin>>min;
    cout<<"enter sec";
    cin>>sec;

}

void time::display(){
    cout<<hr<<" "<<min<<" "<<sec;


}


//q3,q4
class date{
    private:
        int day;
        int month;
        int yr;
    
    public:

        void input();
        void display();
        char* mon_lang();

};
void date::input(){
    cout<<"enter day";
    cin>>day;
    cout<<"enter month";
    cin>>month;
    cout<<"enter yr";
    cin>>yr;
    
  
}
char* date::mon_lang(){
        int x=month;
        static char *p;
        switch(x){
        case 1:{
            static char arr[]="january";  //static esliye banaya jisse function ke baad bhi memory rHe
            p=arr;
            break;
        }
        case 2:{
            static char arr[]="febuary";
            p=arr;
            break;
        }
        case 3:{
            static char arr[]="march";
            p=arr;
            break;
        }

        case 4:{
            static char  arr[]="april";
            p=arr;
            break;}

        case 5:{
            static char arr[]="may";
            p=arr;
            break;}

        case 6:{
            static char arr[]="JUNE";
            p=arr;
            break;}

        case 7:{
            static char arr[]="july";
            p=arr;
            break;}
        case 8:{
            static char arr[]="august";
            p=arr;
            break;}
        case 9:{
            static char arr[]="sept";
            p=arr;
            break;}
        case 10:{
            static char arr[]="oct";
            p=arr;
            break;}

        case 11:{
            static char arr[]="nov";
            p=arr;
            break;}

        case 12:{
            static char arr[]="dec";
            p=arr;
            break;}

        default:
            cout<<"not correct input";
        }        
        

  
        return p;



    
}

void date::display(){
    cout<<day<<" "<<month<<" "<<yr<<endl;
    cout<<day<<"-"<<month<<"-"<<yr<<endl;
    char *point= mon_lang();

    cout<<day<<"-";
    for(int i=0;point[i];i++){
        cout<<point[i];
    }
    cout<<"-"<<yr;

}

class circle{
    private:
        float radius;
    
    public:
        void circum();
        void area();

};
void circle::circum(){
    float c;
    cout<<"enter radius";
    cin>>radius;    
    c=2*3.14*radius;
    cout<<c;


}
void circle::area(){
    float a;
    cout<<"enter radius";
    cin>>radius;
    a=3.14*pow(radius,2);
    cout<<a;

}
int main(){

    // complex c1, c2;  //instance variable or obejcts
    // c1.input();
    // c1.display();

    // time c3;
    // c3.input();
    // c3.display();

    // date c;
    // c.input();
    // c.display();

    circle c;
    c.circum();
    c.area();
}

