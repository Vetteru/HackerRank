import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;

class Solution {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        for(int i = 0; i < T; i++){
            int n = scan.nextInt(), m = scan.nextInt();
            BigInteger A = fact(n+m), B = fact(n), C = fact(m);
            System.out.println((A.divide(B).divide(C)).mod(new BigInteger("1000000007")));
        }

    }

    public static BigInteger fact(int n){
        BigInteger res = new BigInteger("1");
        for(int i = 1; i <= n; i++) res = res.multiply(new BigInteger(String.valueOf(i)));
        return res;
    }
}
