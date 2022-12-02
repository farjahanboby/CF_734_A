 #include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,count1=0,count2=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++){

        if(a[i]=='A')
            count1++;
        else
            count2++;
    }
    if(count1>count2)
        cout<<"Anton"<<endl;
    else if(count1<count2)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
