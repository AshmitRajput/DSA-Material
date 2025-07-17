/*bitwise operators (& | ^ ~ )
and how they work. they work on bit level.
 the negation(~) of a number will become negative and we can find the number by
 taking two's compliment. XOR gives 1 as output if both the bits are same and 0 as output if
 both the bits are different. left shift(<<) shifts all the bits to left if done once and 
 usually multiplies the number with 2 and right shift (>>) shifts all bits to the right
 and gives the output, usually the output is the number divided by two. similarly,
 multiplied by 4 and divided by 4 if done twice. IF THE NUMBBER IS LARGE ENOUGH THEN IT TURNS
 INTO A NEGATIVE NUMBER BY LEFT SHIFT. THE PADDING TO THE SHIFTING IN CASE OF
 POSITIVE NUMBERS IS 0 BY DEFAULT AND DEPENDS ON COMPILER IN CASE OF NEGATIVE NUMBERS  */

 /* for(initialization; condition; updation){ body} and none of the conditions are compulsory
 for the loop to run efficiently so we caan also write for(;;) but this loop does not know 
 when to stop so we will have to give a break statement or a condition in the loop to 
 tell this for loop when to stop. we can initialize multiple integers in the loop syntax 
 and give multiple conditions, using logical operations in it  and also givr multiple 
 updation statements for as many integers as required.*/

 #include <iostream>
 using namespace std;

 int main(){
    /*
    int n;

    cout<<"Enter number:\n";
    cin>>n;

    bool prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime = 0;

        }

    }
    if(prime==0){
        cout<<"The number is not Prime\n";
    }
    else{
        cout<<"The number is prime\n";
    }
    */
   /*use of continue and break statements, for loop, variables and their scopes, global and 
   local, operator precedence same as C */

/* COUNT NUMBER OF ONES IN THE DECIMAL FORM OF A NUMBER */
   int n,count=0;
   cout<<"Enter the number:\n";
   cin>>n;
   
   while (n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;
   }
   cout<<"the given number has " <<count<<" ones in binary representation";


 }
