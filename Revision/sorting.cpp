// // sorting algorithm
// // 1- Bubble sorting
// i=0 to n-1 outer loop n-1 times me array sort ho ja rha h (n=size=4,n-1=3 pass me array sort)
// j=0 to n-1-i

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,4,3,2,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n-1-i; j++) // here use -i becoz addtional checking is going.
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 // swap(arr[j],arr[j+1]);
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0; i<n;i++)
//     {
//         cout<<arr[i ]<<" ";
//     }
// }



// // here we apply chech mark also it tell us aur array is sorted or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {3, 5, 2, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n - 1; i++)
//     {
//         // check mark
//         bool flag=true; // true means our array is already sorted
//         for (int j = 0; j < n - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 flag=false;
//             }
//         }
//        if(flag==true)
//         {
//             break;
//         }
//     }
//      for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }



// sort a string after removed values smaller than d.

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s="aksccccjdfh";
//     string str=" ";
//     for(int i=0; i<s.length(); i++)
//     {
//         if(s[i]>='d') {str.push_back(s[i]);}
//     }
//         sort(str.begin(),str.end());
//         cout<<str;
//     }



// // move all zeros at the end while maintaining relative order

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,0,5,0,0,0,6,0,0,6,5,0,3,0,0,0,54,56,00,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n-1-i; j++)
//         {
//             if(arr[j]==0)
//             swap(arr[j],arr[j+1]);
//         }
//     }
//       for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }



// // move all zeros at the starting while maintaining relative order

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,0,5,0,0,0,6,0,0,6,5,0,3,0,0,0,54,56,00,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n-1-i; j++)
//         {
//             if(arr[j]!=0)
//             swap(arr[j],arr[j+1]);
//         }
//     }
//       for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }


// selection sorting 

// FIRST FIND MINIMUM ELEMENT FROM THE ARRAY AND SWAP THEM ARRAY'S FIRST ELEMENT

// #include<iostream>
// #include<climits>

// using namespace std;
// int main()
// {
//   int arr[]={2,1,4,3,5};
//   int n= sizeof(arr)/sizeof(arr[0]);
//   for(int i=0; i<n; i++)
//   {
//      cout<<arr[i]<<" ";
//   }

//   cout<<endl;

//   for(int i=0; i<n-1; i++)
//   {
//     int min=INT_MAX;
//     int mindx=-1;
//     for(int j=i; j<n; j++)
//     {
//         if(arr[j]<min)
//     {
//          min=arr[j];
//          mindx=j;
//     }
//     }
//     // swaping index ki hoti hai
//     swap(arr[i],arr[mindx]);
//   }
  
//   for(int i=0; i<n; i++)
//   {
//      cout<<arr[i]<<" ";
//   }

// }
// // 2 1 4 3 5 
// // 1 2 3 4 5



// selection sort -> find minimum ele of the array and swap them array's first ele.
// n=size=4, 3 pass me array sort ho ja rha h means outer loop(i) vo chalega n-1 tk
// inner loop j chalega n tk and start j=i(becoz every time min ele swap ho rha h array ke 1st ele se) 

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={3,2,5,4,1};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=0; i<n-1; i++) // outer loop - for passes
//     {
//         int min=INT_MAX;
//         int mindex=-1;
//         for(int j=i; j<n; j++) // inner loop - for check no. and swap
//         {
//           if(arr[j]<min)
//           {
//           min=arr[j];
//           mindex=j;
//         }
//     }
//     // swaping index ke bich me hota h , swapping index ka hota h naki ele ki swapping hoti hai...
//     swap(arr[i],arr[mindex]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// // output-:
// // 3 2 5 4 1 
// // 1 2 3 4 5



// insertion sorting -> means ele insert to left afer swapping 
// ele index start from 1 (2nd ele)
//  if 1st ele > 2nd ele than swap kar do 
// if 1st ele<2nd ele break;
#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // outer loop - it traverse in the array 
    for(int i=1; i<n; i++)
    {
        // inner loop - it checks the ele which is greater or small a/c to swap
        int j=i;
        while(j>=1)
        {
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1])
            
            swap(arr[j], arr[j-1]);
            j--;
    }
    }
        for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}