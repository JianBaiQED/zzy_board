#incldue<bits/stdc++.h>
using namespace std;
const double eps=1e-7;
int check(double Elemtype)
{

}
double f(double x)
{
    return ;
}
double Real_Num_Dichotomy(double right,double left)//实数二分
{
    double mid=left+(right-left)/2;
    while(right-left<=eps)
    {
        mid=left+(right-left)/2;
        if(check(mid))
            right=mid;
        else
            left=mid;
    }
    return mid;
}
int Integer_Dichotomy(int right,int left)//整数二分
{
    int mid=left+(right-left)/2;
    while(left<right)
    {
        if(check(mid))
            right=mid-1;
        else
            left=mid;
    }
    return mid;
}
double Real_Num_Tri(double l,double r)//实数三分
{
    double k=(r-l)/3.0;
    double mid1=l+k,mid2=r-k;
    while(r-l>=eps)
    {
        k=(r-l)/3.0;
        mid1=l+k,mid2=r-k;
        if(check())
            l=mid1;
        else
            r=mid2;
    }
    return l;
}
int Integer_Tri(int l,int r)//整数三分
{
    int mid1=l+(r-l)/3,mid2=r-(r-l)/3;
    while(r-l>2)
    {
        mid1=l+(r-l)/3,mid2=r-(r-l)/3;
        if(check)
            l=mid1;
        else
            r=mid2;
    }
    return ans;//ans由最终的l和r处理而来
}
