import java.util.*;
import java.lang.*;
import java.math.*;

class Main{
    //Lucas' Theorem
    public static void main(String[] args){
	Scanner scan = new Scanner(System.in);
	int t = scan.nextInt();
	for(int i = 0; i < t; i++){
	    String n = scan.next();
	    String p = scan.next();
	    ArrayList<Integer> n_s = convertTo(new BigInteger(n), p);
	    BigInteger res = new BigInteger("1");
	    for(int j = 0; j < n_s.size(); j++){
		res = res.multiply(new BigInteger((n_s.get(j)).toString()).add(new BigInteger("1")));
	    }
	    System.out.println(new BigInteger(n).subtract(res).add(new BigInteger("1")));
	}
    }

    public static ArrayList<Integer> convertTo(BigInteger num, String dig){
	ArrayList<Integer> res = new ArrayList<Integer>();
	while(num.compareTo(new BigInteger("0")) > 0){
	    res.add(num.remainder(new BigInteger(dig)).intValue());
	    num = num.divide(new BigInteger(dig));
	}
	return res;
    }
}
