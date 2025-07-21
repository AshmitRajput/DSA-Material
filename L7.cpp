 #include <iostream>
 using namespace std;

                                               //PRINTING ALL THE ELEMENTS OF AN ARRAY.
 /*
 void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}*/

                                               //GET MINIMUM IN AN ARRAY FUNCTION
 /*int getmin(int num[], int n){
    int mini = INT32_MAX;

    for (int i = 0; i <= n; i++)
    {
        mini = min(mini,num[i]);

        //if (num[i]<mini)
        //{
       //     mini = num[i];
       // }
        
    }
    return mini;

 }*/

                                            //GET MAXIMUM VALUE IN AN ARRAY FUNCTION
  /*int getmax(int num[], int n){
    int maxi = INT32_MIN;
    for (int i = 0; i <= n; i++)
    {
        maxi = max(maxi,num[i]);
         //if (num[i]>maxi)
        //{
       //     mini = num[i];
       // }
    }
    return maxi;
 }*/

                                                       //LINEAR SEARCH FUNCTION.
/* 
bool search(int arr[], int size, int key) {

    for( int i = 0; i<size; i++ ) {

        if( arr[i] == key) {
            return 1;
        }

    }
    return 0;
}*/

                                                       //REVERSE AN ARRAY FUCTION.
/*void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}*/

int main(){

                                  //INITIALIZE AN ARRAY WITH VALUE 2 USING FILL_N COMMAND
   /*int ar[10];
    fill_n(ar,10,2);          //fill_n(data type,number of values, value to fill with)
   for (int i = 0; i <= 10; i++)
    {
      cout << ar[i] << endl;
    }*/

                      //TAKE INPUT IN AN ARRAY AND FIND MAXIMUM AND MINIMUM VALUE IN IT
    /*
    int size;
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    
    int mini = getmin(num[100],size);
    cout<<"minimum value in array is:\n"<<mini;

    int maxi = getmax(num[100],size);
    cout<<"maximum value in array is:\n"<<maxi;
    */

                                        //FINIDNG SUM OF ALL ELEMENTS OF AN ARRAY
    /*

    int size;
    cout<<"Enter size of Array:\n";
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter value of element "<<(i+1);
        cin>>num[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += num[i];
    }
    cout<<"The sum of all elements in the array is:\n"<<sum;

    */


                             //CODE FOR LINEAR SEARCH IN AN ARRAY TO FIND ANY ELEMENT
   /* int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if( found ) {
        cout <<" Key is present "<< endl;
    }
    else{
        cout <<" Key is absent " << endl;
    }


    return 0;
    */

                                  //REVERSING THE ELEMENTS IN AN ARRAY AND PRINTING IT
   /*
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    */

   }
