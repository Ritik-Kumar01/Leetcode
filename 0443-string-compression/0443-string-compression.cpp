class Solution {
public:
    int compress(vector<char>& a) {
        int n = a.size();
        int idx=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            char ch=a[i];
            while(i<n &&a[i]==ch)
            {
                count++;
                i++;
            }

                a[idx++]=ch;
                if(count>1)
                {
                for(char c:to_string(count))
                {
                    a[idx++]=c;
                }
            }
            i--;
        }
        a.resize(idx);
        return idx;
    }
};

/*
1.char arr
2.compression
3.in-place
4.new length of the array

a. single ch
b. more chcount
c.more count mul chars
d.

*/