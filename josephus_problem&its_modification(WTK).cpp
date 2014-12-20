 SPOJ: WTK
what Kolaveri Di:

The problem is basically a modification to Josephus problem.

In Josephus problem N people stand in a circle and Kth person is killed untill only one is left.
the idea to find the safe position.


int josphus(int n,int k)
{
if (n==1)return 1;

return (josephus(n-1,k)+k-1) % n +1;

}

in our problem there is a slight modification i.e., every time the value of k is increased so the solution to this is.


initially k=0;
int josphus(int n,int k)
{
if (n==1)return 1;

return (josephus(n-1,k+1)+k-1) % n +1;

}
