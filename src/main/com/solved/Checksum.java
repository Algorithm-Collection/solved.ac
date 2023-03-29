package com.solved;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class Checksum {

    public static void main(String[] args) {
        LinkedList<Integer> li = new LinkedList<Integer>();
        LinkedList<Double> li2 = new LinkedList<Double>();

        Scanner in = new Scanner(System.in);

        for (int i=0;i<5;i++) {
            li.add(in.nextInt());
        }

        Iterator iter = li.iterator();
        while (iter.hasNext()) {
            li2.add(Math.pow(iter.next().hashCode(),2));
            System.out.println(iter.next().hashCode());
        }
    }
}
