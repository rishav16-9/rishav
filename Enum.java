import java.util.Scanner;
enum weekdays
{
    sun,mon,tue,wed,thu,fri,sat
}
public class Enum
{
    public static void main( String args[]) throws IllegalArgumentException
    {
        Scanner ob = new Scanner (System.in);
        String weekday;
        try{
        System.out.println("enter the day");
        weekday = ob.next();
        weekdays day;
        day=weekdays.valueOf(weekday);
            if (day == weekdays.sun) {
                System.out.println("Sunday");
            } else if (day == weekdays.mon || day == weekdays.tue || day == weekdays.wed || day == weekdays.thu || day == weekdays.fri || day == weekdays.sat) {
                System.out.println("working day");
            }
        }
        catch(IllegalArgumentException e)
        {
            System.out.println(e.getMessage());
            System.out.println("check the input");
        }
    }
}