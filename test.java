public class arrayl{
  public static void main(String[] args){
    int cnt = 0;
    do{
      cnt++; // cnt = 1;
    } while (cnt<0);

    if(cnt==1)
      cnt++; // cnt = 2;
    else
      cnt = cnt + 3;
    System.out.printf("%d", cnt); // 2
  }
}