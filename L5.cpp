#include<iostream>
#include<cmath>
using namespace std;

int main(){

                                                      /* REVERSE AN  INTEGER */
    /*int n,ans=0;

    cout<<"Enter a number:";
    cin>>n;
    
    while (n!=0)
    {
        int digit = n%10;
        ans = ans*10 + digit;
        n = n/10;

    }

       if ((ans<INT32_MIN/10)||(ans>INT32_MAX/10))
    {
        return 0;
    }

    cout<<ans;*/

                       /*COMPLEMENT OF A BASE 10 INTEGER */

   /* int n;

    cout<<"Enter a number:";
    cin>>n;

    int m = n;
    int mask = 0;
    
    //KEEP EDGE CASE IN MIND.... 
    if (n == 0 )
    {
        cout<<"1";
    }

    while (m!=0)
    {
        mask = (mask << 1)|1;
        m= m>>1;
    }

    int ans = (~n)&mask;
    cout<<ans;
    */

                                          /* TO CHECK IF GIVEN INPUT IS IN POWER OF 2*/
    /*
   int n,ans=1;
   cout<<"Enter a number:";
   cin>>n;

   while(ans <= (pow(2,31)-1))
   {
    if (ans == n)
    {
        cout<<"yes\n";
        break;
    }
    ans = ans*2;
   }
     
       if (ans != n)
    {
        cout<<"no";
    }
   */

}