package exsoma;
import java.util.Scanner;

public class ExSoma {
    public static int soma(int x, int y){
        int soma = x + y;
        return soma;
    }
    
    public static void main(String[] args) {
        Scanner ler  = new Scanner(System.in);
        System.out.println("Escreva os num\n");
        //int num1 = ler.nextInt();
        //int num2 = ler.nextInt();
        System.out.println(soma(2,3));
    }
}
