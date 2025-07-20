/*USING A SWITCH-CASE STATEMENT AND UNDERSTANDING WHY CONTINUE STATEMENT DOESN'T 
  WORK IN A SWITCH CASE STATEMENT */

  #include<iostream>
  using namespace std;
  
                  //AP FUNCTION BODY.
 /* 
  int AP(int n)
{
  int ap=3*n+7;
  return ap;
}*/

             //SETBITS FUNCTION BODY.
/*

int bitsa(int a)
{
  int count = 0;
  while(a!=0)
  {
    if(a&1)
    {
      count++;
    }
    a=a>>1;
  }
  return count; 
}

int bitsb(int b)
{
  int count = 0;
  while(b!=0)
  {
    if(b&1)
    {
      count++;
    }
    b=b>>1;
  }
  return count; 
}
*/

                         //FIBONACCI SERIES FUNCTION BODY
/*
 int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 3; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    } 
      return b;
}
*/

  int main(){

                                         //EXAMPLE
   /* int n;
    cout<<"Enter a number from 1 to 3 :\n";
    cin>>n;

    switch (n)
    {
    case 1:
        cout<<"padh le bhai\n";
        break;
    case 2:
        cout<<"jaake bartan saaf kar\n";
        break;
    case 3:
        cout<<"jhadu maar room m \n";
        break;    
    
    default:
        cout<<"kuch bhi bhai\n";
    }
    */
                                        //MINI CALCULATOR 
    
    
    /*    int a,b;
    cout<<"Enter first number :\n";
    cin>>a;

    cout<<"Enter second number :\n";
    cin>>b;

    char op;
    cout<<"Enter a valid operator :\n";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"ans:\n"<<(a+b);
        break;
    case '-':
        cout<<"ans:\n"<<(a-b);
        break;
    case '%':
        cout<<"ans:\n"<<(a%b);
        break;
    case '/':
        cout<<"ans:\n"<<(a/b);
        break;        
    case '*':
        cout<<"ans:\n"<<(a*b);
        break;
    
    default:
        cout<<"kuch bhi bol raha h bhai\n";
    }
    */


                          //TO FIND THE NUMBER OF RS100, RS50, RS20 AND RS10 NOTES 
                        //REQUIRED FOR A CERTAIN AMOUNT USING SWITCH CASE.

  /*
  int amount;
  cout<<"Enter the amount";
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;
  cout<<"Enter Rs100,Rs50,Rs20 and Rs10 to find the number of notes required:";

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee notes required are="<<Rs100;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee notes required are="<<Rs50;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee notes required are="<<Rs20;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee notes required are="<<Rs1; 
                  
           }
           */
                                //FIND AP WALA QUESTION.
 /*
  int n;
  cin>>n;
  int ans=AP(n);
  cout<<"Answer is="<<ans<<endl;

  return 0;

*/

                            //BITS M 1 COUNT KARNE WALA QUESTION.
/*
  int a,b;
  cin>>a>>b;
  int ans1=bitsa(a);
  int ans2=bitsb(b);
  cout<<"Set bits of A="<<ans1<<endl;
  cout<<"Set bits of B="<<ans2<<endl;
  int ans=ans1+ans2;

  cout<<"Total set bits of A and B are ="<<ans<<endl;

  return 0;
*/
 


                            // PRINT FIBONACCI KA Nth TERM.
  /*
    int n;
    cin >> n;
    
    cout << "The " <<n<<"th term of the series is = "<< fibonacci(n) << endl;

    return 0;
*/    

   }