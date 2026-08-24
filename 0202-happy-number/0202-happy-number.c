int square(int n){
    return n*n;
}
int digit_sum(int n){
int sum=0;
if(n==0){
    return 0;
}
else{
    return square((n%10))+digit_sum(n/10);
}
}
int single_digit_sum(int n)
{
    int sum=digit_sum(n);
    if(sum<10){
        return sum;
    }
    else
    {
        return single_digit_sum(sum);
    }

}

bool isHappy(int n) {
  if(single_digit_sum(n)==1 || single_digit_sum(n)==7){
    return true;
  }
  else{
    return false;
  }
}