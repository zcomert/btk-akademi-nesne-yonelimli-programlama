public class Guitar implements Instrument {

    @Override
    public void play() {
        System.out.println("Playing the guitar..");
    }

    public void setChord() {
        System.out.println("The guitar has been tunned.");
    }

}
