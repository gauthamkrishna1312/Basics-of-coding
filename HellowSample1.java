import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;

public class HellowSample1 {
    public static void main(String[] args) {
        Scanner g=new Scanner(System.in);
        System.out.println("Select your desired programm");
        System.out.println("1 :Temperature converter");
        System.out.println("2 :Basic Calculator");
        System.out.println("3 :Print a pattern");
        System.out.print("Enter operation :");
        int operation=g.nextInt();
        switch (operation) {
            case 1:
                System.out.println("\nEnter your measured unit\n1 :Celscius\n2 :Fahrenheit\n");
                System.out.print("      : ");
                int unit=g.nextInt();
                if (unit==1) {
                    System.out.print("Enter your value :");
                    double temp=g.nextDouble();
                    double  Fahrenheit=((1.8)*temp)+32;
                    System.out.println("Temperature in Fahrenheight is :"+Fahrenheit);
                }else if (unit==2) {
                    System.out.print("Enter your value :");
                    double temp=g.nextDouble();
                    double  Celscius=((temp-32)*(0.555));
                    System.out.println("Temperature in Celscius is :"+Celscius);
                }else {
                    System.out.println("******Invalid input******");
                }
                break;
            case 2:
                System.out.print("\nEnter first digit :");
                double num1=g.nextDouble();
                System.out.print("Enter second digit :");
                double num2=g.nextDouble();
                System.out.println("\n1-Addition\n2-Substrction\n3-Multipication\n4-Devition");
                int duty=g.nextInt();
                switch (duty) {
                    case 1:
                        double num3=num1+num2;
                        System.out.println(num1+" + "+num2+" = "+num3);
                        break;
                    case 2:
                        double num4=num1-num2;
                        System.out.println(num1+" - "+num2+" = "+num4);
                        break;
                    case 3:
                        double num5=num1*num2;
                        System.out.println(num1+" x "+num2+" = "+num5);
                        break;
                    case 4:
                        double num6=num1/num2;
                        System.out.println(num1+" / "+num2+" = "+num6);
                        break;
                    default:
                        System.out.println("******Invalid input******");
                        break;
                }
                break;
            case 3:
                System.out.println("\nEnter a limiting digit :");
                int lim=g.nextInt();
                int cont=lim;
                System.out.println("");
                for (int i = 0; i < cont; i++) {
                    for (int j = 0; j <= i; j++) {
                        System.out.print("(0)");
                    }
                    System.out.println("");
                }
                for (int i = 0; i < cont; i++) {
                    for (int j = 1; j < cont-i; j++) {
                        System.out.print("(0)");
                    }
                    System.out.println("");
                }
                break;
            default:
                System.out.println("******Invalid input******");
                break;
        }
    }
}