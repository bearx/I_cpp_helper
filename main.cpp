#include<bits/stdc++.h>
using namespace std;
constexpr bool dbg=false;
constexpr char no_sep='\0';
using ll=long long;
using ld=long double;
template<ll buffersz>
inline char igetchar()
{
    static char buf[buffersz],*p1=buf,*p2=buf;
    return p1==p2 && (p2=(p1=buf)+fread(buf,1,buffersz,stdin),p1==p2)?EOF:*p1++;
}
template<ll buffersz,typename T>
void read_one(T&x)
{
    x=0;ll f=0;
    char ch=igetchar<buffersz>();
    while(!isdigit(ch)) f|=(ch=='-'),ch=igetchar<buffersz>();
    while(isdigit(ch)) x=(x<<1)+(x<<3)+(ch^48),ch=igetchar<buffersz>();
    x=f?-x:x;
}
template<ll buffersz=dbg?1:(ll)1e4,typename... U>
void readint(U&... args)
{
    int a[]={(read_one<buffersz>(args),0)...};
}
inline void ifastios()
{
    static bool firstrun=true;
    if (!firstrun) return;
    if constexpr(!dbg) ios::sync_with_stdio(0),cin.tie(0);
    firstrun=false;
}
template<char sep=' ',ll precision=-1,typename... U>
void print(U&&... args)
{
    auto st=cout.flags();
    if constexpr(precision>=0)
    {
        cout.setf(ios::fixed);
        cout.precision(precision);
    }
    if constexpr(sep!='\0')
    {
        int a[]={(cout<<args<<sep,0)...};
    }
    else
    {
        int a[]={(cout<<args,0)...};
    }
    if constexpr(precision>=0) cout.flags(st);
}
template<char sep=' ',ll precision=-1,typename... U>
void println(U&&... args)
{
    print<sep,precision>(forward<U>(args)...);
    print<no_sep,precision>('\n');
}
template<typename... U>
bool read(U&... args)
{
    ifastios();
    if(cin.good())
        int a[]={(cin>>args,0)...};
    return cin.good();
}
int main()
{
    println(1,'a',true,"cb");
    println<no_sep>(1,'a',true,"cb");
}