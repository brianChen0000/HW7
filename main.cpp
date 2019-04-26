//
//  main.cpp
//  homework7
//
//  Created by Mac on 2019/3/15.
//  Copyright © 2019年 Mac. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int a,b=0,c;
    cout<<"請輸入要累加的底數:";
    cin>>a;
    for(c=1;c<=a;c++)
    {
        b+=c;
    }
    cout<<a<<"到零的總和="<<b<<endl;
    system("PAUSE");
    return 0;
    }
