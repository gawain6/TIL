package TIL.algorithm.boj._3000;

import java.io.*;
import java.util.HashMap;

class Main3052 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        int n = 0;
        int x = 0;
        
        for(int i=0; i<10; i++) {
            n = Integer.parseInt(br.readLine());
            x = n % 42;
            map.put(Integer.toString(x), x);
        }
        bw.write(map.size()+"\n");
        br.close();
        bw.flush();
        bw.close();
    }
}