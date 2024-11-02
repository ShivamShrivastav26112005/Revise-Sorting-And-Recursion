// here we use starting row,col,ending row,col
// er, ec is always fixed becoz our destination is always fixed
// onlt we change our path to reach them

// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec)
// {
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int right=maze(sr,sc+1,er,ec);
//     int down=maze(sr+1,sc,er,ec);
//     int result=right+down;
//     return result;
// }
// int main()
// {
//     cout<<maze(0,0,2,2);
// }
// o/p-6



// also print our ways 

// #include<iostream>
// using namespace std;
// void maze(int sr,int sc,int er,int ec,string s)
// {
//     if(sr>er || sc>ec) return ;
//     if(sr==er && sc==ec) 
//     {
//         cout<<s<<" ";
//         return;
//     }
//   maze(sr,sc+1,er,ec,s+'R');
//   maze(sr+1,sc,er,ec,s+'D');

// }
// int main()
// {
//    maze(0,0,2,2," ");
// }
// // o/p -  RRDD  RDRD  RDDR  DRRD  DRDR  DDRR 


// print no. of ways and ways itself also in one code

// #include<iostream> 
// using namespace std;
// int maze(int sr,int sc, int er, int ec)
// {
//     if(sr>er || sc>ec) return 0;
//     if (sr==er && sc==ec) return 1; 
//     int right=maze(sr,sc+1,er,ec);
//     int down=maze(sr+1,sc,er,ec);
//     int result=right+down;
//     return result;

// }

// void mazeways(int sr,int sc,int er,int ec,string s)
// {
//     if(sr>er || sc>ec) return ;
//     if(sr==er && sc==ec) 
//     {
//         cout<<s;
//         return;
//     }
//   mazeways(sr,sc+1,er,ec,s+'R');
//   mazeways(sr+1,sc,er,ec,s+'D');

// }
// int main()
// {
//     // cout<<maze(0,0,2,2);       3*3 matrix 
//     cout<<maze(1,1,3,3);      //  3*3 matrix 
//     cout<<endl;
//     mazeways(0,0,2,2," ");

// }

// // 6
// //  RRDD RDRD RDDR DRRD DRDR DDRR


// tower of hanoi

// #include<iostream>
// using namespace std;
// void toh(int n, char src, char help, char dest)
// {
//     if(n==0) return ;
//     toh(n-1,src,dest,help);
//     cout<<src <<" -> " <<dest<<endl;
//     toh(n-1,help,src,dest);
// }
// int main()
// {
//     toh(3,'a','b','c');
// }



// Traversing an array using different mathods

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3]={1,2,3};
//     // // traversing an array using for loop
//     // for(int i=0; i<3; i++)
//     // {
//     //     cout<<arr[i]<<" ";
//     // }

//     // // travesing an array using for-each loop
//     // for(int ele:arr)
//     // {
//     //     cout<<ele<<" ";
//     // }
// }



// travesing an array using recursion
// #include<iostream>
// using namespace std;
// void print(int arr[] , int size, int idx)
// {
//     if(idx==size) return ;
//     cout<<arr[idx]<<" ";
//     print(arr,size,idx+1);
// }
// int main()
// {
//     int arr[3]={1,2,3};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     print(arr,n,0);
// }


// travesing an arrya using recursion and store in vector also

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>&v, int idx)
// {
//     if(idx==v.size()) return ;
//     cout<<v[idx]<<" ";
//     print(v, idx+1);
// }
// int main()
// {
//     int arr[]={1,2,3};
//     int n= sizeof(arr)/ sizeof(arr[0]);
//     vector<int>v(n);
//     for(int i=0; i<v.size(); i++)
//     {
//     v[i]=arr[i];
//     }

//     // for(int i=0; i<v.size(); i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }
//     print(v,0);

// }



// // find maximum element in an array using bruth methods.

// #include<iostream>
// #include<climits>
// using namespace std;
// int max(int arr[], int n, int idx)
// {
//     if(idx==n) return 0;
//     int max=INT_MIN;
//     for(int i=0; i<n; i++)
//     {
//        if(arr[i]>max)
//        max=arr[i];  
//     }
//        return max;
//     }

// int main()
// {
//     int arr[]={1,2,300,5,2,0};
//     int n= sizeof(arr)/sizeof(arr[0]);
//    cout<<max(arr,n,0);

// }

// find maximum element in an array using recursion methods.
#include<iostream>
#include<climits>
using namespace std;
void max(int arr[], int n, int idx,int mx)
{
    if(idx==n) 
    {
        cout<<mx;
        return ;
    }
    if(mx<arr[idx]) mx=arr[idx];
    max(arr,n,idx+1,mx);
}

int main()
{
    int arr[]={1,2,300,5,2,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    max(arr,n,0,INT_MIN);

}