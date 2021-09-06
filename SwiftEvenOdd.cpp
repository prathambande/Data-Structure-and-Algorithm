// "When on odd no is followed by an even number, 
// every odd becomes even. 
// Similarly when an odd situation is 
// accompanied by an even mental state 
// every odd looks like a learning opportunity. "


#include<iostream>
#define s 1000000
using namespace std;

int main()
{
    
    int array[s];
    int red;
    int size = 0;
    
    while(cin >> red)
    {
        array[size] = red;
        ++size;
    }
    
    int i = 0;
    int j = size - 1; //sizeof(array)/sizeof(array[0]) - 1;
    bool es = false, os = false;
    while(i<j)
    {
        if(array[i]%2 == 0)
        {
            ++i;
        }
        else
        es = true;
        
        if(array[j]%2 != 0)
        --j;
        else
        os = true;
        
        if(os && es)
        {
            swap(array[i], array[j]);
            ++i;--j;
            es = false;
            os = es;
        }
        
    }
    
    for(int k = 0; k < size; ++k)
    cout << array[k] << " ";    
    
}




