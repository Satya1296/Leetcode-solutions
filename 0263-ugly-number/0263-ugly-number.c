bool isUgly(int n) {
    if(n<=0)
    return 0;
    int factors[]={2,3,5};
    for(int i=0;i<3;i++){
    while(n%factors[i]==0){
        n=n/factors[i];
        }
    }
    return n==1;
}