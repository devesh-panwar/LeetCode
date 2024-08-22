class Solution {
    public int findComplement(int num) {
        

         StringBuilder bn = new StringBuilder();

        while (num != 0) {
        if (num % 2 == 1) {
            bn.insert(0, '1');  
        } else {
            bn.insert(0, '0');  
        }
        num /= 2;
    }

    
    // if (bn.length() == 0) {
        bn.insert(0,'1');
    //}

    
    for (int i = 0; i < bn.length(); i++) {
        if (bn.charAt(i) == '1') {
            bn.setCharAt(i, '0');
        } else {
            bn.setCharAt(i, '1');
        }
    }

    
    int ans = 0;
    int p = 0;
    for (int i = bn.length() - 1; i >= 0; i--) {
        if (bn.charAt(i) == '1') {
            ans += Math.pow(2, p);
        }
        p++;
    }

    return ans;

    }
}