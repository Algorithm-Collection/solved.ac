package com.solved;

import java.util.Scanner;

public class MutiplicationTable {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int a = in.nextInt();

        for (int i=1;i<=9;i++) {
            System.out.println(a + " * " + i + " = " + a*i);
        }
    }
}
