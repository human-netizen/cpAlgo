class tr
{
public:
    int co;
    tr* ar[26];
    tr()
    {
        co=0;
        for(int i=0; i<26; i++)ar[i]=0;
        //cout<<sizeof(tr)<<"\n";
    }
};
tr *root=new tr();
void form(string &s,tr* cur)
{
    tr *ncur;
    int k=s.size();
    for(int i=0; i<k; i++)
    {
        int c=s[i]-'a';
        if(cur->ar[c]==0)
        {
            ncur=new tr();
            cur->ar[c]=ncur;
        }
        else
        {
            ncur=cur->ar[c];
        }
        ncur->co++;
        cur=ncur;
    }
}
ll cnts(string &s,tr* cur)
{
    tr *ncur;
    int k=s.size();
    ll sum=0;
    for(int i=0; i<k; i++)
    {
        int c=s[i]-'a';
        ncur=cur->ar[c];
        if(ncur==0)break;
        else
        {
            sum=sum+(ncur->co);
        }
        cur=ncur;
    }
    return sum;
}

