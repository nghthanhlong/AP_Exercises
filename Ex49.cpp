#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct Rectangle{
    int height;
    int length;

    Rectangle(): height(0), length(0){}

    Rectangle(int _height, int _length){
        height=_height;
        length=_length;
    }
    
    int getPerimeter(){
        return (height*2+length*2);
    }
    void print(){
        for(int i=0; i<height; i++){
            for(int j=0; j<length; j++){
                if(i==0 || i==height-1 || j==0||j==length-1){
                    cout<<"*";
                }
                else{
                    cout<<' ';
                }
            }
            cout<<endl;
        }
    }
};

int compare(Rectangle a, Rectangle b){
    int perA=a.getPerimeter();
    int perB=b.getPerimeter();
    if(perA>perB) return 1;
    else if(perA<perB) return -1;
    return 0;
}

int main(){
    Rectangle first, second;
    cin>>first.height>>first.length>>second.height>>second.length;
    cout<<first.getPerimeter()<<endl;
    cout<<second.getPerimeter()<<endl;
    first.print();
    cout<<endl;
    cout<<compare(first, second);
}