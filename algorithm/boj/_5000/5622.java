package TIL.algorithm.boj._5000;

import java.io.*;

class Main5622 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] dial = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
        String s = br.readLine();
        int ret = 0;
        
        for(int i=0; i<s.length(); i++) {
            for(int j=0; j<dial.length; j++) {
                if(dial[j].indexOf(s.charAt(i))>=0) {
                    ret += j+3;
                }
            }
        }
        bw.write(ret+"\n");
        bw.flush();
    }
}