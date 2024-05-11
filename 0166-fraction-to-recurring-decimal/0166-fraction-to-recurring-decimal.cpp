class Solution {
public:
    string fractionToDecimal(int numerator , int denominator) {

       unordered_map<long long,int>q;    
        long long ne = numerator,de = denominator;
        if(numerator <0 && denominator < 0)
        {
            ne = abs(numerator),de = abs(denominator);
        }
       
        string ans = to_string(ne/de);
        int pi = ans.size();
        ans += '.';
        if(ne%de == 0)
        {
            ans.pop_back();
            return ans;
        }

        q[ne%de] = 1;
        long long temp = ne%de;
        int n = 0;
        while(temp!=0)
        {
            q[temp] = ++n;
            temp *= 10;
           ans += to_string(abs(temp/de));
           temp = temp % de;

           if(temp == 0)
           {
               return ans;
           }
           else if(q.find(temp) != q.end())
           {
               ans.push_back(')');
               int ac = q[temp];
               ans =  ans.substr(0,pi+ac) + '(' + ans.substr(pi+ac);
              
              if(de<0 )
               if(de < 0 || ne < 0)
               {
                   ans = '-'+ans;
               }
               return ans;
           }
        } 

        return "";
    }
};
