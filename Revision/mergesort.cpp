// #include<iostream>
// #include<vector>
// using namespace std;
// void finalmerge(vector<int>&a,vector<int>&b, vector<int>&res)
// {
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size())
//     {
//         if(a[i]<=b[j])
//         {
//           res[k]=a[i];
//           k++;
//           i++;
//         }
//         else // (b[j]<a[i])
//         {
//             res[k]=b[j];
//             k++;
//             j++;
//         }
//     }
    
//         if(i==a.size())
//         {
//             while(j<b.size())
//             {
//               res[k]=b[j];
//               k++;
//               j++;
//             }
//         }
//         if(j==b.size())
//         {
//             while(i<a.size())
//             {

//                 res[k]=a[i];
//                 k++;
//                 i++;
//             }
//         }

//     }

// void merge(vector<int>&v)
// {
//     int n=v.size();
//     if(n==1) return;
//     // divide and conquer means our array divide into two parts
//     int n1=n/2;
//     int n2=n-n/2;
//     // now push into vector
//     vector<int>a(n1); // vector name a 
//     vector<int>b(n2);
    
//     for(int i=0; i<n1; i++)
//     {
//         a[i]=v[i];
//     }
//     for(int i=0; i<n2; i++)
//     {
//         b[i]=v[i+n1];
//     }

//     // magic
//     merge(a); // calling
//     merge(b); // calling itself

//     finalmerge(a,b,v);
// }
// int main()
// {
//     int arr[]={3,4,2,5,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     // array push in the vector 
//     vector<int>v(arr,arr+n);
//     for(int i=0; i<v.size();i++)
//     {
//        cout<<v[i]<<" ";
//     }

//     cout<<endl;

//     merge(v);

//      for(int i=0; i<v.size();i++)
//     {
//        cout<<v[i]<<" ";
//     }


// }



// practice merge sort
// use algorithm - divide and conquer

#include<iostream>
#include<vector>
using namespace std;
void mergesort(vector<int>&a,vector<int>&b,vector<int>&res)
{
   int i=0;
   int j=0; 
   int k=0;
   while(i<a.size() && j<b.size())
   {
    if(a[i]<=b[j])
    {
        res[k]=a[i];
        k++;
        i++;
    }
    else // b[j]<a[i]
    {
        res[k]=b[j];
        k++;
        j++;
    }
   }
   if(i==a.size()) // i at the end
   {
    while(j<b.size())
    {
        res[k]=b[j];
        k++;
        j++;
    }
   }
   if(j==b.size()) // j at the end
   {
    while(i<a.size())
    {
        res[k]=a[i];
        k++;
        i++;
    }
   }
   

}
void merge(vector<int>&v)
{
    int n=v.size(); // vector size
    // base case 
    if(n==1) return ;
    int n1=n/2; // divide into two subvector n1,n2
    int n2=n-n/2;
    // now store n1 and n2 in vectors
    vector<int>a(n1);
    vector<int>b(n2);

    for(int i=0; i<n1;i++)
    {
        a[i]=v[i];
    }
    for(int i=0; i<n2; i++)
    {
        b[i]=v[i+n1];
    }

    // magic
    merge(a);
    merge(b);

    // sort a and b 
    mergesort(a,b,v);

}
int main()
{
    int arr[]={1,4,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // array stored in vector
    vector<int>v(arr,arr+n);
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    merge(v);// call
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}


























