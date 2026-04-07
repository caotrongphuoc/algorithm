bool isPerfectSquare(int num) 
{
    if(num < 1) return false;
    int left = 1;
    int right = num;
    long long mid;
    long long kq;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        kq = mid * mid;
        if(kq == num) return true;
        else
        {
            if(kq < num) left = mid + 1;
            else right = mid - 1;
        }
    }    
    return false;
}