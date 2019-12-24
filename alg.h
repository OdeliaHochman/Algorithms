#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
const T Median( T b, T e,int n)
{
    int size = distance(b,e);
    
     T addMedianLoc = b;

    if(n == 1 || size % n != 0)
     {
         return e;
     }
    else
     {
       while(b!=e) //1 2 3 8 10 6 200 100 100
       {
          T a = b;
          T endA = b+n;
          int mid = n/2;
          sort(a,endA);
          int res=0;

         if (size % 2 == 0)
         {
          
           res = (*(a+mid-1) + *(a+mid)) /2;
           *addMedianLoc=res;
         }
         else 
         {
           res = *(a+mid);
           *addMedianLoc=res;
         }
           *addMedianLoc++; 
           b=b+n;
        } 
        return addMedianLoc;
     }


 }
    


template<typename T>
const T Transpose( T b,  T e)
{
    int size = distance(b,e);
   

   if( size % 2 == 0)
   {
        while(b!=e)
        {
            iter_swap(b,b+1);
            b=b+2;
        }
        return e;
   }
   else
   {
        while(b!=e-1)
        {
           iter_swap(b,b+1);
           b=b+2;
        }
        return e-1;
   }
   
}

template<typename Function , typename T>
const T Transformations( T b, T e, Function func)
{
    int size = distance(b,e);
    T  addTransLoc = b;
   
   if(size % 2 == 0 && size != 0)
   {
       while(b!=e)
        {
            *addTransLoc=func(*b,*(b+1));
             addTransLoc++;
             b=b+2;
        }
        return addTransLoc;
   }
   else
   {
      return e;
   }
}

