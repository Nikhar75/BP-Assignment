// Reverse Polish Notation in Java


import java.io.*;
import java.util.*;

class solution {
	public int stacky(String[] tokens)
	{

		Stack<String> stack = new Stack<String>();
		int a, b;
		String result = "";
		int get = 0;
		String choice;
		int value = 0;
		String c = "";

		for (int i = 0; i < tokens.length; i++) {

		
			if (tokens[i] != "+" && tokens[i] != "-"
				&& tokens[i] != "*" && tokens[i] != "/") {
				stack.push(tokens[i]);
				continue;
			}
			else {
		
				choice = tokens[i];
			}

			// Switch-Case
			switch (choice) {
			case "+":


				a = Integer.parseInt(stack.pop());
				b = Integer.parseInt(stack.pop());
				value = a + b;
				result = c + value;
				stack.push(result);
				break;

			case "-":

				a = Integer.parseInt(stack.pop());
				b = Integer.parseInt(stack.pop());
				value = a - b;
				result = c + value;
				stack.push(result);
				break;

			case "*":

				a = Integer.parseInt(stack.pop());
				b = Integer.parseInt(stack.pop());
				value = a * b;
				result = c + value;
				stack.push(result);
				break;

			case "/":

				a = Integer.parseInt(stack.pop());
				b = Integer.parseInt(stack.pop());
				value = a / b;
				result = c + value;
				stack.push(result);
				break;

			default:
				continue;
			}
		}

		return Integer.parseInt(stack.pop());
	}
}

class ReversePolish {
	
	public static void main(String[] args)
	{

		String[] s
			= { "1","2","+","3","*" };
		
		solution str = new solution();
		int result = str.stacky(s);
		System.out.println(result);
	}
}
