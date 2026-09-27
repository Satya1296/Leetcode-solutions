int stack[2001],top=-1;
void push(int i){
    stack[++top]=i;
}
int pop(){
    return stack[top--];
}
void reverse(char *s,int l,int r){
    while(l<r){
        char temp=s[l];
        s[l]=s[r];
        s[r]=temp;
        l++;
        r--;
    }
}
//l=0,r=0;
char* reverseParentheses(char* s) {
    static char str[100001];
    int k=0,r;
      for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('){
            push(i);
        }
        else if(s[i]==')'){
            int l=pop();
            r=i;
            reverse(s,l+1,r-1);
        }
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!='(' && s[i]!=')'){
            str[k++]=s[i];
        }
    }
    str[k] = '\0';
    return str;
}