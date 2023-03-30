package com.solved;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class Checksum {

    public static void main(String[] args) {
        LinkedList<Integer> li = new LinkedList<Integer>();
        LinkedList<Integer> li2 = new LinkedList<Integer>();

        Scanner in = new Scanner(System.in);

        for (int i=0;i<5;i++) {
            li.add(in.nextInt());
        }

        Iterator iter = li.iterator();

        while (iter.hasNext()) {
            li2.add((int)Math.pow(Integer.parseInt(String.valueOf(iter.next())),2));
        }

        Iterator iter2 = li2.iterator();

        int sum = 0;
        while (iter2.hasNext()) {
            sum += Integer.parseInt(String.valueOf(iter2.next()));
        }

        System.out.println(sum%10);
    }
}
