#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#include <graphics.h>
using namespace std;

void draw(int x1,int y1, int x2, int y2, int x3, int y3){
    line(320+x1,240-y1,320+x2, 240-y2);
    line(320+x2,240-y2,320+x3,240-y3);
    line(320+x3,240-y3,320+x1,240-y1);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm,"");
    
    line(0,240,640,240);
    line(320,0,320, 480);

    int x1,y1,x2,y2,x3,y3, choice;
    
    cout<<"Enter the first coordinator (x1 y1): ";
    cin>>x1>>y1;
    cout<<"Enter the second cordinator (x2 y2): ";
    cin>>x2>>y2;
    cout<<"Enter the third cordinator (x3 y3): ";
    cin>>x3>>y3;

    draw(x1,y1,x2,y2,x3,y3);

    int rx1, ry1, rx2, ry2, rx3, ry3;
    rx1=x1;
    ry1=-y1;

    rx2=x2;
    ry2=-y2;

    rx3=x3;
    ry3=-y3;

    draw(rx1,ry1,rx2,ry2, rx3,ry3);

    getch();
    closegraph();


    
    return 0;
}