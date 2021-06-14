// Reverse Polish Notation in Java


import java.io.*;
import java.util.*;

class solution {
	public int stacky(String[] tokens)
	{

		// Intialize the stack and the variable
		Stack<String> stack = new Stack<String>();
		int x, y;
		String result = "";
		int get = 0;
		String choice;
		int value = 0;
		String p = "";

		// Iterating to the each character
		// in the array of the string
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


				x = Integer.parseInt(stack.pop());
				y = Integer.parseInt(stack.pop());
				value = x + y;
				result = p + value;
				stack.push(result);
				break;

			case "-":

				x = Integer.parseInt(stack.pop());
				y = Integer.parseInt(stack.pop());
				value = x - y;
				result = p + value;
				stack.push(result);
				break;

			case "*":

				x = Integer.parseInt(stack.pop());
				y = Integer.parseInt(stack.pop());
				value = x * y;
				result = p + value;
				stack.push(result);
				break;

			case "/":

				x = Integer.parseInt(stack.pop());
				y = Integer.parseInt(stack.pop());
				value = y / x;
				result = p + value;
				stack.push(result);
				break;

			default:
				continue;
			}
		}

		// Method to convert the String to integer
		return Integer.parseInt(stack.pop());
	}
}

class GFG {
	
	public static void main(String[] args)
	{
		// String Input
		String[] s
			= { "1","2","+","3","*" };
		
		solution str = new solution();
		int result = str.stacky(s);
		System.out.println(result);
	}
}
