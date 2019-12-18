#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class point
{
    double x,y;
    public :
    point(double m=0,double n=0)
    {
        x=m;
        y=n;
    }

    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
    double distance(point p)
    {
        double x1 = getx();
        double x2 = p.getx();
        double y1 = gety();
        double y2 = p.gety();
        double  w = pow((x2-x1),2);
        double  x = pow((y2-y1),2);
        double d  =  sqrt(w+x);
        return d;
    }
};
class rectangle
{
    point a,b,c,d;
    public :
    rectangle(point p,point q,point r,point s)
    {
        a=p;
        b=q;
        c=r;
        d=s;
    }
    double area()
    {
        double h= b.distance(c);
        double w= d.distance(c);
        double P= h*w;
        return P;

    }

};


int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4;
    cout<<"Enter the value of x coordinate for p point: " ;
    cin>>x1;
    cout<<"Enter the value of y coordinate for p point: " ;
    cin>>y1;

    cout<<"Enter the value of x coordinate for q point: " ;
    cin>>x2;
    cout<<"Enter the value of y coordinate for q point: " ;
    cin>>y2;

    cout<<"Enter the value of x coordinate for r point: " ;
    cin>>x3;
    cout<<"Enter the value of y coordinate for r point: " ;
    cin>>y3;
    cout<<"Enter the value of x coordinate for s point: " ;
    cin>>x4;
    cout<<"Enter the value of y coordinate for s point: " ;
    cin>>y4;


    point p(x1,y1);
    point q(x2,y2);
    point r(x3,y3);
    point s(x4,y4);

    cout<<"Distance between calling object and received object(PQ) :  "<< p.distance(q)<<endl;
    cout<<"Distance between calling object and received object(QR) :  "<< q.distance(r)<<endl;
    cout<<"Distance between calling object and received object(RS) :  "<< r.distance(s)<<endl;
    cout<<"Distance between calling object and received object(SR) :  "<< s.distance(r)<<endl;


    rectangle ob(p,q,r,s);
    cout<<"The area of the Rectangle is : " <<ob.area();

    getch();
}


