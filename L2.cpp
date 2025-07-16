#include<iostream>
using namespace std;
int main(){

                    /*To make a pattern of 1
                                           23
                                           345
                                           4567
                                           56789 
int n,rows=1;
cout<<"Enter no. of rows: \n";
cin>>n;

while(rows<=n){
    int col=1;

    while(col<=rows){
        cout<<col+rows-1;
        col=col+1;
    }
    cout<<"\n";
    rows=rows+1;
}
*/
                            /*To make a pattern of A
                                                   BB
                                                   CCC
                                                   DDDD
int r;
cout<<"Enter no. of rows \n";
cin>>r;
int row=1;
while(row<=r){
    int col=1;
    while(col<=row){
        char v= 64+row;
        cout<<v;
        col = col+1;
        }
    cout<<"\n";
    row=row+1;   
 
}
*/

/*

               To make Pattern D
                               CD
                               BCD
                               ABCD                                    
int n;
cout<<"Enter no. of rows \n";
cin>>n;
int rows = 1;
while (rows<=n)
{
    int j=1;
    while (j<=rows)
    {
        char x = 'D'+j-rows;
        cout<< x;
        j = j+1;
    }
    cout<<"\n";
    rows = rows+1;

}
*/

/*                                  To print a pattern   *
                                                        **
                                                       ***
                                                      ****  
int n;
cout<<"enter no. of rows \n";
cin>>n;
int row=1;
while (row<=n)
{
    int space=n-row;
    while (space)
    {
        cout<<" ";
        space = space -1;
    }
    int j=1;
    while (j<=row)
    {
        cout<<"*";
        j = j+1;
    }
    cout<<" \n";
    row = row+1;
    
}

*/
/*                            To make the pattern   ****
                                                     ***
                                                      **
                                                       * 
int n;
cout<<"enter no. of rows \n";
cin>>n;
int row = 1;
while (row<=n)
{
    int space = row-1;
    while (space)
    {
        cout<<" ";
        space = space-1;
    }
    int j=n+1-row;
    while (j)
    {
       cout<<"*";  /*Putting space after the * commpletely changes the pattern
       j = j-1; 
    }
    cout<<"\n";
    row = row+1;
    
}

*/
             /*To print the pattern     1234554321
                                        1234**4321
                                        123****321
                                        12******21
                                        1********1  */

int n;
cout<<"enter no. of rows\n";
cin>>n;

int row=1;
while(row<=n){
    int j=n-row+1;
    int start = 1;
    while(j){
        cout<<start;
        start = start+1;
        j = j-1;
    }
    int star=row-1;
    while (star)
    {
        cout<<"*";
        star = star-1;
    }
    int starr=row-1;
    while (starr)
    {
        cout<<"*";
        starr = starr-1;
    }
    int triangle4 = n-row+1;
    while (triangle4)
    {
        cout<<triangle4;
        triangle4 = triangle4-1;
    }
    
    cout<<"\n";
    row = row+1;

}




}