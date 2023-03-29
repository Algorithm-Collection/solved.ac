package com.solved;

import java.util.Scanner;

public class SafariWorld {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long a = in.nextLong();
        long b = in.nextLong();

        if (a + (b*-1) < 0) {
            System.out.println((a + (b*-1))*-1);
        } else
            System.out.println(a + (b*-1));
    }
}
