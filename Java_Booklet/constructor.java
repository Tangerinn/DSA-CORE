import java.util.Scanner;
// import java.lang.Math;

class Student {
   String name, branch;
   int rno;
   float cgpa;// instance variable declaration.

   // method 1 :
   void displayDetails() {
      System.out.println("Name : " + this.name); // added "this" keyword.
      System.out.println("Branch : " + this.branch);
      System.out.println("Roll number : " + this.rno);
      System.out.println("CGPA : " + this.cgpa);

   }

   // Without a constructor, you'd have to manually set values every time.
   // Cleaner, less repetitive, and ensures every object starts with valid data!
   Student(String a, String b, int c, float d) {
      this.name = a;
      this.branch = b;
      this.rno = c;
      this.cgpa = d;
   }

}

class demo {
   public static void main(String[] args) {
      // object no. 1 :
      Student tanaya = new Student("Tanaya Pawar", "INFT", 38, 8.8f);
      // tanaya.cgpa = 8.8f;
      // tanaya.name = "Tanaya Pawar";
      // tanaya.rno = 38;
      // tanaya.branch = "INFT";
      tanaya.displayDetails();

      Student sakshi = new Student("Sakshi Patil", "INFT", 37, 9.7f);
      // sakshi.cgpa = 9.7f;
      // sakshi.name = "Sakshi Patil";
      // sakshi.rno = 37;
      // sakshi.branch = "INFT";
      sakshi.displayDetails();

   }
}
