import java.util.Scanner;

public class Lectureinfo 
{
    public static void main(String args[])
    {
        /* int age = 20;
        String Name = "Dulsara";

        System.out.println("The individual " + Name + " is " + age); */

        int birth,total;
        String name;

        Scanner user=new Scanner (System.in);

        System.out.println("Enter Name: ");
        name = user.nextLine();
        System.out.println("Enter The birthyear: ");
        birth = user.nextInt();

        total = 2023 - birth;
        System.out.println(name + " " +  total);

        user.close();


    }
}
