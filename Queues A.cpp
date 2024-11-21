#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> Q;
    int inp0,inp1;
    string log="";
    int n,temp;
    int total=0;
    int sessionTime;
    cin>>sessionTime;
    cin>>n;
    int orders[n] ;
    int priorities[n];
    for (int t=0;t<n;t++)
    {
        cin>>inp0;
        cin>>inp1;
        orders[t]=inp0;
        priorities[t]=inp1;
    }
    int j=0;
        for (int i =0;i<n;i++)
        {
        j=0;
        for (j=0;j<n;j++){if(priorities[j]==i+1) Q.push(orders[j]);}
        }
        while(!Q.empty())
        {
            temp=Q.front();
            if(temp>sessionTime)
            {
                temp-=sessionTime;
                total+=sessionTime;
                string strST = to_string(sessionTime);
                if (log=="") log+=strST;
                else log=log+" + "+strST;
                Q.push(temp);
                Q.pop();
            }
            else
            {

                total+=temp;
                string strTMP = to_string(temp);
                if (log=="") log+=strTMP;
                else log=log+" + "+strTMP;
                Q.pop();
            }

        }

//// 30 20 40
//// 2  1   3
///// B A C



 cout<<log<<" = "<<total;
    return 0;
}
