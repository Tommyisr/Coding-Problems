// https://www.codechef.com/NOV21C/problems/CHEAPFUEL

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
int diesel = 0;
int petrol = 0;

int t = 0;
int x,y,a,b,k;

scanf("%d",&t);

while(t>0){
    
    scanf("%d %d %d %d %d",&x,&y,&a,&b,&k);
    
    petrol = x + k*a;
    diesel = y + k*b;
    if(petrol < diesel) printf("PETROL\n");
    else if (diesel < petrol) printf("DIESEL\n");
    else printf("SAME PRICE\n");
    t--;
    
    
    
}
    return 0;
}
