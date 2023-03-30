package com.solved;

import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class Matrix_addtion {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();

        int[][] matrix1 = new int[a][b];
        int[][] matrix2 = new int[a][b];

        for (int i=0;i<a;i++) {
            for (int j=0;j<b;j++) {
                matrix1[i][j] = in.nextInt();
            }
        }

        for (int i=0;i<a;i++) {
            for (int j=0;j<b;j++) {
                matrix2[i][j] = in.nextInt();
            }
        }

        for (int i=0;i<a;i++) {
            for (int j=0;j<b;j++) {
                System.out.print(matrix1[i][j] + matrix2[i][j] + " ");
            }
            System.out.print("\n");
        }

    }
}
