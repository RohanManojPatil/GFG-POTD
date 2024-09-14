// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        // Get the size of the input array
        int n=arr.size();

        // Queues to store positive and negative numbers separately
        queue<int> qp; // Queue for positive numbers
        queue<int> qn; // Queue for negative numbers

        // Traverse through the array and separate positive and negative numbers            into respective queues 
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                // If the current element is positive, push it to qp
                qp.push(arr[i]);
            }else{


                qn.push(arr[i]);
            }
        }
        int i=0;
        while(qp.empty()==false && qn.empty()==false)
        {
            if(i%2==0)
            {
                int toppos=qp.front();
                qp.pop();
                arr[i]=toppos;
            }
            else{
                int topneg=qn.front();
                qn.pop();
                arr[i]=topneg;
            }
            i++;
        }
        while(!qp.empty())
        {
            int toppos=qp.front();
            qp.pop();
            arr[i]=toppos;
            i++;
        }
        while(!qn.empty())
        {
            int topneg=qn.front();
            qn.pop();
            arr[i]=topneg;
            i++;
        }
    }
};