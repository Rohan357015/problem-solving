class solution {
    public int borrowwwww(int a ,int b){
         int borrow = 0;
         int carry = 0;
        while(a>0|| b>0){
            int digitA = a % 10;
            int digitB = b % 10;
           
            
            if(digitA-carry < digitB){
                borrow++;
                carry = 1;
            }else{
                carry = 0;
            }
            a/=10;
            b/=10;
        }
        return borrow;
    }
}
class t {
    public static void main(String[] args) {
        solution sol = new solution();
        int a = 777;
        int b = 111;
        int result = sol.borrowwwww(a, b);
        System.out.println("Number of borrows: " + result);
    }
}