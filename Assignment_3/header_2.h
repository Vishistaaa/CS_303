#include <iostream>

#include <string>

#include <queue>

using namespace std;

queue<int> reverse(queue<int> q)

{
    int s = q.size();

    queue<int> ans;

    for (int i = 0; i < s; i++) {

        for (int j = 0; j < q.size() - 1; j++) 
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }

        ans.push(q.front());
        q.pop();
    }
    return ans;
}
