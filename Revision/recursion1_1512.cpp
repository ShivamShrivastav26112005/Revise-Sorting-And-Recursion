// // reverse an given array 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=n-1;i>=0;i--)
//     {
//         cout<<arr[i]<< " ";
//     }
// }


// print 1 t0 10 using given mathods direct, for loop, while loop and do - while loop, using recursion.

// #include<iostream>
// using namespace std;
// int main()
// {
//   // direct
// cout<<1<<endl;
// cout<<2<<endl;
// cout<<3<<endl;
// cout<<4<<endl;
// cout<<5<<endl;
// cout<<6<<endl;
// cout<<7<<endl;
// cout<<8<<endl;
// cout<<9<<endl;
// cout<<10<<endl;

// }

// for loop
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=10;i++)
//     {
//         cout<<i<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     // while loop
//     int i=1;
//     while(i<=10)
//     {
//         cout<<i<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     // do-while loop
//     int i=1;
//     do
//     {
//         cout<<i<<endl;
//         i++;
//     }
//     while(i<=10);
    
// }


// print 1 to 10 using recursion 
// recursion - function calling itself








// #include<iostream>
// using namespace std;
// void print()
// {
//     cout<<"hi"<<endl;
// }
// void show()
// {
//     cout<<"hi, my name is ss"<<endl;
//     cout<<2+5;
// }
// void add(int a, int b)
// {
//     cout<<a+b+3<<endl;
// }

// void count(int n)
// {
//     if(n==0) return ;
//     cout<<n<<endl;
//     count(n-1);
// }


// void display(int n)
// {
//     if(n==0) return;
//   display(n-1);
//   cout<<n<<endl;
// }
// int main()
// {
//     print();
//     print();
//     print();
//     print();
//     print();
//     print();
//     print();


// show();


// add(2,3);


// count(5);


// display(10);
// }




// we want to print no from 1 to 100 in ascending order using recursion 

// #include<iostream>
// using namespace std;
// void print(int n) // make a function named print which is call
// {
//    if(n==0) return ; // base case / base condition 
//    print(n-1); // calling ho rhi hai / kaam 
//    cout<<n<<endl; // printing 
// }
// int main()
// {
//     // it is a function 
//     print(100); // function calling and pass only one argument
// }


// print 100 to 1 using recursion 

// #include<iostream> 
// using namespace std;
// void display(int n)
// {
//     if(n==0) return ;
//     cout<<n<<endl;
//     display(n-1);
// }
// int main()
// {
//     display(100);
// }




// print 1 to 100 only even no
// #include<iostream>
// using namespace std;
// void print(int n)
// {
//   if (n==0) return;
//   print(n-2);
//   cout<<n<<endl;
// }
// int main()
// {
//   print(100); // function calling 
// }



// print 100 to 40 only odd no.

// #include<iostream>
// using namespace std;
// void print(int n)
// {
//     if(n<40) return;
//     if(n%2!=0)
//     cout<<n<<endl;
//     print(n-1);

// }
// int main()
// {
//     print(100); //function ko call laga diye
// }


// print 1 to 10 using recursion and also use two arguments


// // this is doesn't give output
// #include<iostream>
// using namespace std;
// void print(int a, int b)
// {
//     if(b<=10) return ;
//     cout<<a;
//     print(a+1,b);
// }
// int main()
// {
//     print(1,10);
// }


// #include<iostream>
// using namespace std;
// void print(int a)
// {
//     if(a==0) return ;
//     cout<<a<<endl;
//     print(a-1);
// }
// int main()
// {
//     print(10);
// }

// factorial of n number using for loop
// 4!=4*3*2*1=24

// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     int f=1;
//     for(int i=2; i<=n; i++)
//     {
//         f=f*i;
//     }
//     return f;
// }
// int main()
// {
//    cout<<fact(4);
// }


// 5!=5*4*3*2*1=120
// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     int f=1;
//     for(int i=2; i<=n ;i++) 
//     { 
//         f*=i;
//     }
//         return f;
//     }

// int main()
// {
//     cout<<fact(0);
// }



// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n==1 || n==0) return 1;
//     return n*fact(n-1);
// }
// int main()
// {
//     cout<<fact(3);
// }

// #include<iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n==1 || n==0) return 1;
//     int ans= n*fact(n-1);
//     return ans;
// }
// int main()
// {
//     cout<<fact(3);
// }


// factorial of a number up to n using for loop
// #include<iostream>
// using namespace std;
// void fact(int n)
// {
//     for(int j=1; j<=n; j++)
//     {
//      int f=1;
//      for(int i=2; i<=j; i++)
//      {
//          f*=i;
//      }
//    cout<<f<<endl;
//     }
// }
// int main()
// {
//     fact(5);
// }





// #include<iostream>
// using namespace std;
// void fact(int n)
// { 
//      int f=1;
//      for(int i=1; i<=n; i++)
//      {
//         f*=i;
//         cout<<f<<endl;
//      }
// }
// int main()
// {
//     fact(5);
// }



// // print factorial of 1 to 5.
// #include<iostream>
// using namespace std;
// int print(int n)
// {
//     if(n==0) return 1;
//     return n*print(n-1);
// }
// int main()
// {
//     cout<<print(5);   
// }


// print sum from 1 to n(recursion)
// here we use parameters


// #include<iostream>
// using namespace std;
// void print(int sum, int n)
// {
//     if(n==0) return ;
//     cout<<sum<<" ";  
//    print(sum+n,n-1);
   
// }
// int main()
// {
//     print(0,5);
// }



// print sum from 1 to n(recursion)
// without using parameters

#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0) return 0;
    return n+ sum(n-1);
    cout<<n<<" ";
}
int main()
{
    cout<<sum(20);
}