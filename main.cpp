#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int len;
    cin >> len;
    int input[len];
    for(int i=1; i<=len; i++)
    {
        cin >> input[i];
    }
    const int maxlen=1000;
    int visited[maxlen]= {};
    for(int i=1; i<=len; i++)
    {
        {
            cin >> visited[i];
            input[visited[i]]++;
            if(input[visited[i]]==1) cout << visited[i] << " ";
        }
    }
}
