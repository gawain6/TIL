package TIL.algorithm.boj._4000;

import java.io.*;

class Main4673 {
    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int[] arr = new int[10001];
        int n = 0;
        
        for(int i=0; i<10001; i++) {
            arr[i] = 1;
        }
        
        for(int i=1; i<10001; i++) {
            n = d(i);
            if(n<10001)
                arr[n] = 0;
        }
        for(int i=1; i<10001; i++) {
            if(arr[i]==1)
                bw.write(i+"\n");
        }
        bw.flush();
        bw.close();
    }
    
    public static int d(int n) {
        int dn = n;
        while(n!=0) {
            dn += n%10;
            n /= 10;
        }
        return dn;
    }
}