public class TratamentoExcecoes{
     public static void main(String []args){
        int x[] = {0,1};
        for(int i = 0; i < 3; i++){
            try {
                System.out.println(x[i]);
            }catch(ArrayIndexOutOfBoundsException e) {
                System.out.println("ArrayIndexOutOfBounds: " + e.getMessage());
            }finally{
                System.out.println("Fim da iteração.");
            }
        }
    }
}