package TIL.algorithm.boj._2000;

import java.io.*;
import java.util.HashMap;

class Main2577 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int n = 1;
        String[] arr;
        
        for(int i=0; i<3; i++) {
            n *= Integer.parseInt(br.readLine());
        }
        arr = Integer.toString(n).split("");
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        
        for(int i=0; i<10; i++) {
            map.put(Integer.toString(i), 0);
        }
        
        for(int i=0; i<arr.length; i++) {
            map.put(arr[i], map.get(arr[i])+1);
        }
        
        for(int i=0; i<10; i++) {
            bw.write(map.get(Integer.toString(i))+"\n");
        }
        bw.flush();
    }
}