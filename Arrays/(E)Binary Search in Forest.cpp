#include <iostream>
using namespace std;

/*There are n tree in a forest. Heights of the trees is stored in array tree[ ].
If ith tree is cut at height h, the wood obtained is tree[i]-h, given that tree[i]>h.
If total wood needed is k (not less, neither more), find the height at which every tree should be cut
(all trees have to be cut at the same height).
*/

int wood_collected(int tree[],int n,int h)
{
    int ret=0;
    for(int i=0;i<n;i++)
    {
        if(tree[i]>h)
            ret+=tree[i]-h;
    }
    return ret;
}

int findHeight(int tree[],int n, int k)
{
    int l=0; //lower limit
    int h=0; //Higher limit
    for(int i=0;i<n;i++)
        h=max(h,tree[i]);

    while(l<=h)
    {
        int mid=(l+h)/2;
        int val=wood_collected(tree,n,mid);

        if(val==k)return mid;

        if(val>k)l=mid+1;

        else h=mid-1;
    }
    return -1;

}


int main()
{
    int N=6;
    int arr[]={1,7,6,3,4,7};
    int K=8;
    cout<<findHeight(arr,N,K);
    return 0;
}
