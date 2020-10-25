//PROGRAM NAME:Convert milliseconds to minutes and seconds individually
//BY:NANDANA SURESH
//PROGRAM CODE

import java.util.concurrent.TimeUnit;

public class Milliseconds {

    public static void main(String[] args) {
        long milliseconds = 1000000;

        // long minutes = (milliseconds / 1000) / 60;
        long minutes = TimeUnit.MILLISECONDS.toMinutes(milliseconds);

        // long seconds = (milliseconds / 1000);
        long seconds = TimeUnit.MILLISECONDS.toSeconds(milliseconds);

        System.out.format("%d Milliseconds = %d minutes\n", milliseconds, minutes );
        System.out.println("Or");
        System.out.format("%d Milliseconds = %d seconds", milliseconds, seconds );

    }
}
