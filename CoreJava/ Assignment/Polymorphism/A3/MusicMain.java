package musicalSystem;

import java.util.Scanner;

public class MusicMain extends Thread {
	
  public static void main(String[] args) {
	  
	  
	  
        Instrument[] instruments = {
	            new Piano("Piano", "sounds/piano.wav"),
	            new Guitar("Guitar", "sounds/guitar.wav"),
	            new Drum("Drum", "sounds/drum.wav"),
	            new Flute("Flute", "sounds/flute.wav")
	        };
	        
////	        Scanner sc=new Scanner(System.in);
////	        
////	        String ch=sc.next().toUpperCase();
////	        
////              
////	       
////	        	System.out.println("p=play,S=stop,R=Reset,Q=quit");
//	        	
        instruments[3].play();
	        
	        
//	        
//	        for (Instrument inst : instruments) {
//	            inst.play();
//	           // inst.getCh(ch);
//	            System.out.println("------------------------------");
//	        }
//      
	        System.err.println("Mainends");
        
          
			
		

	        System.out.println("All instruments finished playing!");
	    }
	

	}



