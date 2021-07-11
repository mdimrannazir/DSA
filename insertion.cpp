#include<iostream>>
using namespace std;
int i, j, temp;
int main()
{
    //        0 1 2  3 4 5
    int a[6]={5,4,10,1,6,2};
    int n = 6;
    for (i = 1; i < n; i++)
    {
        temp = a[i]; //i =1, i =2
        //temp= 4
        // temp10
        j= i-1; //j=1-1=0; // j2-1
        //     0>=0 &&   5 > 4
        while (j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
        //  a[0+1] = 5
        //{?,5,10,1,6,2}
            j--; // j=-1
        }
        //a[-1+1] = 4
        //so, a[0]=4
        //{4,5,10,1,6,2}
        a[j+1] = temp;
    }
    
     for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}


