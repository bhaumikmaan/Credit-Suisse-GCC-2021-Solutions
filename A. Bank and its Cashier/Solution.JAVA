/***  KNOWLEDGE IS POWER  ***/

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;



class TestClass {

    public static int solution(int n)
    {
        int x ;
        if(n%3 == 0)
        {
            x = n/3 + n/3 ;
        }
        else
        {
            x = (n/3 + 1) + n/3 ;
        }
        return x ;
    }


    public static void main(String args[] ) throws Exception {
        

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n=Integer.parseInt(br.readLine());
        int answer=solution(n);
        System.out.println(answer);
        
    }
}
