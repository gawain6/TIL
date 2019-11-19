package TIL.algorithm.boj._1000;

import java.io.*;
import java.util.ArrayList;

class Main1316 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.parseInt(br.readLine());
        int ret = 0;
        for(int i=0; i<n; i++) {
            char prev = ' ';
            ArrayList<Character> li = new ArrayList<>();
            StringBuilder word = new StringBuilder(br.readLine());
            char[] c = word.toString().toCharArray();
            for(int j=0; j<c.length; j++) {
                if(!li.contains(c[j])) li.add(c[j]);
                else if(li.contains(c[j])&&prev!=c[j]) {
                    ret -= 1; break;
                }
                prev = c[j];
            }
            ret += 1;
        }
        bw.write(ret+"\n");
        bw.flush();
    }
}