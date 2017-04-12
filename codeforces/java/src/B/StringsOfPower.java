package B;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * Created by mahmoud on 1/30/2017.
 */
public class StringsOfPower {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        Pattern r  = Pattern.compile("heavy([A-Z]| |[a-z]|[1-9]|)*metal");
        Matcher m = r.matcher(s);
        int count = m.groupCount();
        System.out.println(count);
        if (m.find())
            for (int i = 0; i<count;i++){
                System.out.println(m.group(i));
            }
    }
}
