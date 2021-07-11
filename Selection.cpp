#include<iostream>
using namespace std;

int i, j;  

int main()
{   //        0 1 2  3 4 5
    int a[6]={7,4,10,8,3,1};
    int n = 6;
    for (i = 0; i < n-1; i++)
    {
        int min = i; //jeheto i=0 index, min = 0, j= 1 , j=2, j3,j4,j5
        for (j = i+1; j < n; j++) //loop n porjonto cholbe
        {
            //    1  <   0
            //    4  <  7
            //    10 <  4 Condition False
            //    8  < 4 false
            //    3  < 4
            //    1  < 3
             //   4  < 7
            //    10 < 4  false

            if (a[j] < a[min]) //1st Pass:if i=0,j=1 index||2nd Pass:j=2,min=1||3rd Pass: j=3||j=4,min4||
            {             //1 indx min index er value tekhe choto hole

                min = j;
            //  min = 1
            //min =5;

            //  min = 1
            //  min = 4
            //  min = 5

            }
        }
        //  5   != 0
        if (min != i)
        {
            swap(a[i],a[min]); //1,4,10,8,3,7
        }
    }
    
    for (i = 0; i < 6 ; i++)
    {
        cout<<a[i]<<" ";
    }
    

    return 0;
}
