// calculate power using for loop
// #include<iostream>
// using namespace std;
// int power(int a, int b)
// {
//     int p=1;
//     for(int i=1; i<=b; i++)
//     {
//         p=p*a;
//     }
//         return p;
//     }
// int main()
// {
//    cout<<power(2,10);
// }




// calculate power using recursion

// #include<iostream>
// using namespace std;
// int power(int a, int b)
// {
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main()
// {
//    cout<<power(2,10);
// }


// write a program of fibonacci number
// #include<iostream>
// using namespace std;
// int fibonacci(int n)
// {
//     if(n==1 || n==2) return 1;
//     return fibonacci(n-1)+fibonacci(n-2);
  
// }
// int main()
// {
//     cout<<fibonacci(7);
// }

// also write in the form of left call and right call
// #include<iostream>
// using namespace std;
// int fibo(int n)
// {
//    if(n==1 || n==2) return 1;
//    int leftcall=fibo(n-1);
//    int rightcall=fibo(n-2);
//    int result= leftcall+rightcall;
//    return result;
// }
// int main()
// {
//    cout<<fibo(3);
// }

// power function a power b using recursion 

// #include<iostream>
// using namespace std;
// int power(int n, int m)
// {
//     if(m==0) return 1;
//     return n*power(n, m-1);
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter a ";
//     cin>>a;
//     cout<<"Enter b ";
//     cin>>b;
//    cout<<"a raised to the power of b is "<<power(a,b);
// }


// #include<iostream>
// using namespace std;
// int power(int a, int b)
// {
//     if(b==0) return 1;
//     if(b%2==0)
//     return  power(a,b/2)*power(a,b/2);
//     if(b%2!=0)
//     return  power(a,b/2)*power(a,b/2)*a;
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter a ";
//     cin>>a;
//     cout<<"Enter b ";
//     cin>>b;
//    cout<<"a raised to the power of b is "<<power(a,b);
// }



// #include<iostream>
// using namespace std;
// int pow(int a, int b)
// {
//     if(b==0) return 1;
//     int ans=pow(a, b/2);
//     if(b%2==0) 
//     return ans*ans;
//     else
//     return ans*ans*a;
// }
// int main()
// {
//     cout<<pow(2,4);
// }




// ************* stair path ( recursion build) *************
// [either we take one step or two steps]

// #include<iostream>
// using namespace std;
// int stair(int n)
// {
//     if(n==1) return 1; // base case
//     if(n==2) return 2; // base case 
//     return  stair(n-1)+stair(n-2); // fun calling itself
// }
// int main()
// {
//     cout<<stair(5);// here function calling and we hae 4 stair
// }



// [either we take one step or two step or three steps]

// #include<iostream>
// using namespace std;
// int stair(int n) // n means no. of stair
// {
//     // base case 
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 4;
//     // fun calling itself
//     return stair(n-1)+stair(n-2)+stair(n-3);
     
// }
// int main()
// {
//     cout<<stair(5);
// }




// ************* 2-D Array *************

// print 1 to 9 in the form of the matrix
// also take user input

// #include<iostream>
// using namespace std;
// int main()
// {
//     // int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0; i<3; i++) // i stands for row start from 0 index
//     {
//         for(int j=0; j<3; j++) // j stands for elements it picks the ele one by one 
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    

// }


// print a 2-D array and take input from the users.

// #include<iostream>
// using namespace std;
// int main()
// {

// //     int arr[][]; // array declaration 
// //     int arr[2][2]={1,2,3,4}; // declaration and initilization

// int arr[3][3];
// for(int i=0; i<3; i++)
// {
//     for(int j=0; j<3; j++)
//     {
//         cin>>arr[i][j];
//     }  
// }

// cout<<endl;

// for(int i=0; i<3; i++)
// {
//     for(int j=0; j<3; j++)
//     {
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;

// }

// }




// // take a 2*2 matrix add two matrix and store sum of another matrix
// // print sum and take both matrix from the user

// // in matrix we use 2 for loops one for (rows) and second for (elements(columns)) (it picks ele one by one)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int m;
//     int n;
//     cout<<"Enter rows of matrix1 :";
//     cin>>m;
//     cout<<"Enter columns of matrix1 :";
//     cin>>n;
//     cout<<"Enter elements of matrix1 "<<endl;
//    int mat1[m][n];

// // we take i/p of matrix1
//   for(int i=0; i<m; i++)
//   {
//     for(int j=0; j<n; j++)
//     {
//         cin>>mat1[i][j];
//     }
//   }
// cout<<"Display the matrix1 "<<endl;
// // we print matrix 1
// for(int i=0; i<m; i++)
// {
//     for(int j=0; j<n; j++)
//     {
//         cout<<mat1[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;
// cout<<endl;



//     int m1;
//     int n1;
//     cout<<"Enter rows of matrix2 :";
//     cin>>m1;
//     // cout<<endl;
//     cout<<"Enter columns of matrix2 :";
//     cin>>n1;
//     cout<<"Enter the elements of matrix2 :"<<endl;
//    int mat2[m1][n1];
// // we take i/p matrix 2
//     for(int i=0; i<m1; i++)
//   {
//     for(int j=0; j<n1; j++)
//     {
//        cin>>mat2[i][j];
//     }
//   }
// cout<<"Display the matrix2 "<<endl;
// // we print matrix 2
// for(int i=0; i<m1; i++)
// {
//     for(int j=0; j<n1; j++)
//     {
//         cout<<mat2[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;
// cout<<endl;

// cout<<"Sum of the two matrix is :"<<endl;
// int res[m][n];
// for(int i=0; i<m; i++)
// {
//     for(int j=0; j<n; j++)
//     {
//         res[i][j]=mat1[i][j]+mat2[i][j];

//     }
// }

// for(int i=0; i<m; i++)
// {
//     for(int j=0; j<n; j++)
//     {
//         cout<<res[i][j]<<" ";
//     }
//     cout<<endl;
// }

// }







// // Enter rows of matrix1 :3
// // Enter columns of matrix1 :3
// // Enter elements of matrix1
// // 1 2 3 4 5 6 7 8 9 
// // Display the matrix1
// // 1 2 3
// // 4 5 6
// // 7 8 9


// // Enter rows of matrix2 :3
// // Enter columns of matrix2 :3
// // Enter the elements of matrix2 :
// // 1 2 3 4 5 6 7 8 9 
// // Display the matrix2
// // 1 2 3
// // 4 5 6
// // 7 8 9


// // Sum of the two matrix is :
// // 2 4 6
// // 8 10 12 
// // 14 16 18



// find largest ele of the given array(1-D array)

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[6]={1,2,30,5,4,3};
//     for(int i=0; i<6; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


//     int max=INT_MIN;
//     for(int i=0; i<5; i++)
//     {
//         if(arr[i]>max) 
//         max=arr[i];
//     }
//     cout<<max;
//     cout<<endl;

//     int secmax=INT_MIN;
//     for(int i=0; i<6; i++)
//     {
//         if(arr[i]!=max && secmax<arr[i])
//         secmax=arr[i];

//     }
//     cout<<secmax;
//     cout<<endl; 

//     int thmax=INT_MIN;
//     for(int i=0;i<6; i++)
//     {
//         if(arr[i]!=max  && arr[i]!=secmax  && thmax<arr[i])
//         thmax=arr[i];
//     }
//     cout<<thmax; 
//     cout<<endl;

//     int fomax=INT_MIN;
//     for(int i=0; i<6; i++)
//     {
//         if(arr[i]!=max && arr[i]!=secmax && arr[i]!=thmax && arr[i]<thmax)
//         fomax=arr[i];
//     }
//     cout<<fomax;
// }




// find smallest elements
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[5]={1,4,3,2,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // smallest elements 

//     int min=INT_MAX;
//     for(int i=0; i<5; i++)
//     {
//         if(arr[i]<min)
//         min=arr[i];
//     }
//     cout<<min;
// }
