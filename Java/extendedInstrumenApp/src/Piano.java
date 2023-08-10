public class Piano implements Instrument, KeyboardInstrument {

    @Override
    public void play() {
        System.out.println("Playing the piano...");
    }

    @Override
    public void press() {
        System.out.println("The key has been pressed.");
    }
    
}
