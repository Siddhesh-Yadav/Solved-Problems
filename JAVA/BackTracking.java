public class BackTracking{
    public static int countNoOfWaysTilesCanBeStacked(int n, int m ){
        if (n == m) {
            return 2;
        }
        if(n < m){
            return 1;
        }
        int horizontal = countNoOfWaysTilesCanBeStacked( n -m, m);
        int vertical = countNoOfWaysTilesCanBeStacked(n -1, m);
        return horizontal + vertical;
    }

    public static int countNoOfWaysToInviteGuests(int n){
        if(n <= 0 ){
            return 1;
        }
        int single = countNoOfWaysToInviteGuests( n - 1);
        int doubles = countNoOfWaysToInviteGuests(n - 2) * (n-1);

        return single + doubles;
    }

    public static void main(String args[]){
        // System.out.println(countNoOfWaysTilesCanBeStacked(4, 2));
        System.out.println(countNoOfWaysToInviteGuests(4));
    }
}