package TIL.algorithm.boj._15000;

import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.io.IOException;

class Main15596 {
    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int[] arr = {1, 3, 5};
        long result = sum(arr);

        bw.write(result+"\n");
        bw.flush();
    }
    
    public static long sum(int[] a) {
        long ans = 0;
        
        for(int i=0; i<a.length; i++) {
            ans += a[i];
        }
        
        return ans;
    }
}