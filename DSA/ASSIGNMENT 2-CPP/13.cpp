int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int HCFlcm(int a,int b){
    return (a*b)/gcd(a,b);
}
# O(log(min(a,b))
