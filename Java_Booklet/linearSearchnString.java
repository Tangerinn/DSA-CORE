import java.util.Scanner;
class Demo
{
    static void linearSearch(String name,char target)
    {
        for(int i = 0; i<name.length(); i++)
        {
            if(target==name.charAt(i))
            {
                System.out.println(target+" exists at "+(i+1)+"th character in "+name);
                return;

            }

        }
        System.out.println(target+" does not exist in "+ name);
    }

    public static void main(String[] args) 
    {
    Scanner input = new Scanner(System.in);
       
    System.out.print("Enter a string : ");
    String name = input.nextLine(); // can take sentences
    // String name = input.nextLine(); // can take only one word, ignores the rest if typed.

    System.out.println();

    System.out.print("Enter target character : "); 
    char  target = input.next().charAt(0);

    linearSearch(name, target);
}
}
