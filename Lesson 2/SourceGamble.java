import java.util.Scanner;

class Scav
{
    public static void main(String args[])
    {
        long count = 0;
        long randomnum = 0;
        String nam;

        Scanner name=new Scanner (System.in);

        while (randomnum != 1000)
        {
            randomnum = (long) (Math.random() * 1001);
            if (randomnum == 1000)
            {
                System.out.println("Enter user:");
                nam = name.nextLine();
                System.out.println(" ");

                int rando = (int) (Math.random() * 4);

                String[] value = {"Kamado", "Agamatsu", "Rengoku", "Uzui"};
                if (rando == 0)
                {
                    System.out.println(nam + " has gotten: " + value[0]);
                }
                else if (rando == 1)
                {
                    System.out.println(nam + " has gotten: " + value[1]);
                }
                else if (rando == 2)
                {
                    System.out.println(nam + " has gotten: " + value[2]);
                }
                else if (rando == 3)
                {
                    System.out.println(nam + " has gotten: " + value[3]);
                }
                
                System.out.println("It took " + count + " tries to get.");
            } 
            else 
            {
                count += 1;
            }
        }   
        name.close(); 
    }
}

