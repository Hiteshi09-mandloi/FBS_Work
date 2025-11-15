package musicalSystem;

import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;

     
// Abstract base class
abstract class Instrument {
    protected String name;
    protected String soundFile;
    protected Clip clip;
    protected String s;
    
    Instrument(String name, String soundFile) {
        this.name = name;
        this.soundFile = soundFile;
    }
    
    public Instrument() {
		// TODO Auto-generated constructor stub
	}

    // Abstract method to be overridden
    abstract void play();

    // Common method to actually play sound
    protected void playSound() {
        try {
            File file = new File(soundFile);
            if (!file.exists()) {
                System.out.println("Sound file not found: " + soundFile);
                return;
            }

            AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
            Clip clip = AudioSystem.getClip();
            clip.open(audioStream);
            clip.start();
            // Wait till sound finishes playing
           Thread.sleep(clip.getMicrosecondLength() / 1000);
            clip.close();

        } catch (UnsupportedAudioFileException e) {
            System.out.println("Unsupported audio format: " + soundFile);
        } catch (IOException e) {
            System.out.println(" Error reading file: " + soundFile);
        } catch (LineUnavailableException e) {
            System.out.println(" Audio line unavailable.");
        } catch (InterruptedException e) {
          Thread.currentThread().interrupt();
       }
    }
    
//    // Method to stop sound
//    public void stopSound() {
//        if (clip != null && clip.isRunning()) {
//            clip.stop();
//            clip.close();
//            System.out.println(name + " music stopped.");
//        } else {
//            System.out.println("No sound is currently playing.");
//        }
//    }
//    
//    public void resetSound() {
//        stopSound();
//        playSound();
//    }
//
//    public void getCh(String ch) {
//        switch (ch.toUpperCase()) {
//            case "P":
//                play();
//                break;
//            case "S":
//                stopSound();
//                break;
//            case "R":
//                resetSound();
//                break;
//            case "Q":
//                System.out.println("👋 Quitting...");
//                System.exit(0);
//                break;
//            default:
//                System.out.println("❗ Invalid input! Use P, S, R, or Q.");
//        }
//    }
    
    
 
}

//Concrete instrument classes
class Piano extends Instrument {
 Piano(String name, String soundFile) {
     super(name, soundFile);
 }
 @Override
 void play() {
     System.out.println(name + " is playing...");
     playSound();
 }

}

class Guitar extends Instrument {
 Guitar(String name, String soundFile) {
     super(name, soundFile);
 }
 @Override
 void play() {
     System.out.println( name + " is strumming...");
     playSound();
 }

}

class Drum extends Instrument {
 Drum(String name, String soundFile) {
     super(name, soundFile);
 }
 @Override
 void play() {
     System.out.println(name + " is beating...");
     playSound();
 }

}

class Flute extends Instrument {
	
	public Flute() {
		// TODO Auto-generated constructor stub
	}
 Flute(String name, String soundFile) {
     super(name, soundFile);
 }
 @Override
 void play() {
     System.out.println(name + " is playing...");
     playSound();
 }

}


