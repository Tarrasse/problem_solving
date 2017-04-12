package A;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

/**
 * Created by mahmoud on 1/27/2017.
 */


public class k_th_divisor {
    static ArrayList<Long> divisors ;
    public static void main(String[] args) throws InterruptedException {
        divisors = new ArrayList<>();
        ArrayList<Thread> threads = new ArrayList<>();
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long k = input.nextLong();
        for (long i = 1; i < n; i+= 1000) {
            if (n >= (i+1000)){
                Partition partition = new Partition(n, i,(i+1000));
                partition.start();
                threads.add(partition);
            }else{
                Partition partition = new Partition(n, i,n);
                partition.start();
                threads.add(partition);
            }
        }
        for (int i = 0; i <threads.size(); i++) {
            threads.get(i).join();
        }
        divisors.sort(new Comparator<Long>() {
            @Override
            public int compare(Long o1, Long o2) {
                return o1.compareTo(o2);
            }
        });
        System.out.println(divisors.get((int)(k-1)));
    }
    static class Partition extends Thread {
        long from ;
        long end;
        long n;

        public Partition(long n,long from, long end) {
            this.from = from;
            this.end = end;
            this.n = n;
        }
        public void run() {
            for (long i = from; i < end ; i++) {
                if((n%i) == 0){
                    divisors.add(i);
                }
            }
        }
    }
}
