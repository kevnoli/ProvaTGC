public class EfeitoColateral{

	private static int x = 0;

	public static void main (String[]args){
		System.out.print("1: ");
		efeito();
		System.out.print("2: ");
		efeito();
		System.out.print("3: ");
		efeito();
		System.out.print("4: ");
		efeito();

	}

	public static void efeito(){
		if(x < 2)
			System.out.println("Olá");
		x++;
	}
}