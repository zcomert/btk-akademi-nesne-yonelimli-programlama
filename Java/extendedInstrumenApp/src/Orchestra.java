public class Orchestra {
    private Instrument[] instruments = { new Guitar(), new Piano() };

    public void playAll() {
        for(Instrument instrument : instruments){
            instrument.play();
        }
    }
}
