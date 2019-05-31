class Solution {
public:
    bool IsPrime(int num)
    {
        if (num <= 1)
            return false;
        int sqrtNum = sqrt(num);
        for (int i = 2; i <= sqrtNum; ++i)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    int countPrimes(int n) 
    {
        if (n <= 2)
            return 0;
        if (n == 3)
            return 1;
        if (n == 4 || n == 5)
            return 2;
        if (n == 6)
            return 3;

        int count = 3;
        for (int i = 7; i < n; i += 6)
        {
            if (IsPrime(i))
                ++count;
        }
        for (int i = 11; i < n; i += 6)
        {
            if (IsPrime(i))
                ++count;
        }
        return count;
    }
};