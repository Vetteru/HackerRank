import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String A = scan.next();
        String B = scan.next();
        int N = scan.nextInt();
        BigInteger[] T = new BigInteger[N];
        T[0] = new BigInteger(A);
        T[1] = new BigInteger(B);
        for(int i = 2; i < N; i++) T[i] = (T[i-1].pow(2)).add(T[i-2]);
        System.out.println(T[N-1]);
    }
}
