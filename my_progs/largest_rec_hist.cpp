#include<stdio.h>
#include<stack>
using namespace std;
int a[100001],h;
long long int max_(long long int m,long long int n)
{ return m>n?m:n;}
long long int largestRectangleArea() {
        stack<int> stack_;
        long long int maxArea = 0;
        int i = 0;
        while(i<h) {
            if(stack_.empty() || 
                a[i] >= stack_.top()) {
                stack_.push(a[i]);
                i++;
            }
            else {
                long long int count = 0;
                while(!stack_.empty() && 
                    stack_.top() > a[i]) {
                    count++;
                    int top = stack_.top();
                    stack_.pop();
                    maxArea = max_(maxArea, top * count);
                }
                for(int j = 0; j < count + 1; ++j) {
                    stack_.push(a[i]);
                }
                i++;
            }
        }
        
        long long int count = 0;
        while(!stack_.empty()) {
            count++;
            maxArea = max_(maxArea, stack_.top() * count);
            stack_.pop();
        }
        return maxArea;
    }
int main()
{
    
    int i;
    scanf("%d",&h);
    while(h!=0)
    {  for(i=0;i<h;i++)
       scanf("%d",&a[i]);
       printf("%lld\n",largestRectangleArea());
       scanf("%d",&h);}
    return 0;
}

    
