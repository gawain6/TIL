package TIL.algorithm.boj._4000;

import java.io.*;
import java.util.StringTokenizer;
import java.util.ArrayList;

class Main4344 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int c = Integer.parseInt(br.readLine());
        
        for(int i=0; i<c; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine().trim());
            int size = st.countTokens();
            ArrayList<Integer> al = new ArrayList<>();
            for(int j=0; j<size; j++) {
                al.add(Integer.parseInt(st.nextToken()));
            }
            
            double n = al.get(0);
            al.remove(0);
            double cnt = 0;
            
            double avg = 0;
            for(int j=0; j<al.size(); j++) {
                avg += al.get(j);
            }
            avg /= n;
            
            for(int j=0; j<al.size(); j++) {
                if(al.get(j)>avg) {
                    cnt += 1;
                }
            }
            bw.write(String.format("%.3f", cnt/n*100.0)+"%\n");
        }
        br.close();
        bw.flush();
        bw.close();
    }
}