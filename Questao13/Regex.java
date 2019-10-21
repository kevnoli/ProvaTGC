import java.util.regex.*;  
public class Regex{  
	public static void main(String args[]){  
		System.out.println("\\.s\\ casa com \"as\"? "+ Pattern.matches(".s", "as")); 
		System.out.println("\\.s\\ casa com \"mk\"? "+Pattern.matches(".s", "mk"));
		System.out.println("\\.s\\ casa com \"mst\"? "+Pattern.matches(".s", "mst"));  
		System.out.println("\\..s\\ casa com \"mas\"? "+Pattern.matches("..s", "mas"));
	}
}