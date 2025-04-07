#include<iostream>
using namespace std;

class Rectangle{
    private:
    float width;
    float height;

    public:
    float a,b;
    void setData(float w,float h){
        width=w;
        height=h;
    }

    void calculateArea(){
        float area;
        area=width*height;
        cout<<"The area of the rectangle is: "<<area<<endl;
    }

    void calculatePerimeter(){
        float per;
        per=2*(width+height);
        cout<<"The perimeter of the rectangle is: "<<per<<endl;
    }

    void display(){
        cout<<"Height = "<<height<<endl;
        cout<<"Width = "<<width<<endl;
        cout<<"Area = "<<width*height<<endl;
        cout<<"Perimeter = "<<2*(width+height)<<endl;
    }
    
    bool isSquare(float a,float b);
};

bool Rectangle::isSquare(float a, float b){
        if(a==b)
        return true;
        else
        return false;
}

int main(){
    Rectangle r1;
    Rectangle r2;
    
    float a,b;
    cout<<"width=";
    cin>>a;
    cout<<"height=";
    cin>>b;

    r1.setData(a,b);

    cout<<"\nFor rectangle 1:\n";
    r1.calculateArea();
    r1.calculatePerimeter();

    float c,d;
    cout<<"\nwidth=";
    cin>>c;
    cout<<"height=";
    cin>>d;

    r2.setData(c,d);

    cout<<"\nFor rectangle 2:\n";
    r2.calculateArea();
    r2.calculatePerimeter();

    cout<<"\nDetails of rectanle 1 are:\n";
    r1.display();

    cout<<"\nDetails of rectangle 2 are:\n";
    r2.display();

    Rectangle r3;
    float e,f;
    cout<<"\nwidth=";
    cin>>e;
    cout<<"height=";
    cin>>f;
    if(r3.isSquare(e,f)){
        cout<<"\nThe rectangle is a square rectangle\n";
    }
    else
        cout<<"It is not a square."<<endl;

    return 0;
}    