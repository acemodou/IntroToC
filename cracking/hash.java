import java.util.Arrays;


public class hash{

    String[] theArray;
    int arraySize;
    int itemsInArray = 0;

    public static void main(String[] args){

      hash theFunc = new hash(30);
      String[] elementsToAdd = {"1","5","9","21","26"};
      theFunc.hashFunction1(elementsToAdd, theFunc.theArray);
      theFunc.displayHash();
        
    }

    // Simple hash function that puts values in the same 
    // index that matches their value
public void hashFunction1(String[] stringsForArray, String[] theArray){
     for(int n = 0; n < stringsForArray.length; n++){
         String newElementVal = stringsForArray[n];
         theArray[Integer.parseInt(newElementVal)] = newElementVal;
     }
}



       hash(int size){
          arraySize = size;
          theArray = new String[size];
          Arrays.fill(theArray, "-1");
      }

    public  void displayHash() {
        int increment = 0;
        for (int m = 0; m < 3; m++) {
            increment += 10;
            for (int n = 0; n < 71; n++)
                System.out.print("-");
            System.out.println();

            for (int n = increment - 10; n < increment; n++) {
                System.out.format("| %3s " + " ", n);

            }

            System.out.println("|");

            for (int n = 0; n < 71; n++)
                System.out.print("-");

            System.out.println();

            for (int n = increment - 10; n < increment; n++) {

                if (theArray[n].equals("-1"))
                    System.out.print("|      ");

                else

                    System.out.print(String.format("| %3s " + " ", theArray[n]));
            }


            System.out.println("|");

            for (int n = 0; n < 71; n++)
                System.out.print("-");

            System.out.println();

        }
 
    }


}