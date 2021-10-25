package lista;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Senha {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Digite a senha!");

		String senha = sc.next();
		Pattern letter = Pattern.compile("[a-zA-z]");
		Pattern digit = Pattern.compile("[0-9]");
		Pattern special = Pattern.compile("[!@#$%&*()_+=|<>?{}\\[\\]~-]");

		Matcher hasLetter = letter.matcher(senha);
		Matcher hasDigit = digit.matcher(senha);
		Matcher hasSpecial = special.matcher(senha);
		senha.charAt(0);
		if(senha.length() < 10) {
			System.out.println("Senha precisa ser maior do que 10 caracteres");
		}
		if (senha.length() >= 10 && hasDigit.find()== false && hasSpecial.find() == true) {
			System.out.println("Senha válida");
		}
		else if(hasDigit.find()== true) {
			System.out.println("Digite novamente, a senha não pode ter números!");
		}
		
	}

}
