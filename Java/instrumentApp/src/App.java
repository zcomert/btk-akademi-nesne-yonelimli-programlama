public class App {
    public static void main(String[] args) throws Exception {
        Instrument guitar = new Guitar();
        Instrument piano = new Piano();

        guitar.play();
        piano.play();
    }
}
