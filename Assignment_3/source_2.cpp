# include <iostream>

# include <queue>

# include "header_2.h"

using namespace std;

int main()

{
    
queue<int> q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  q = reverse(q);
  
  while(!q.empty()) 
{
  {
    cout<< q.front() <<" ";
    q.pop();
    
  }
}
}